/*
 * Copyright (C) 2008 Apple Inc. All Rights Reserved.
 * Copyright (C) 2013-2015 Electronic Arts, Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

//+EAWebKitChange
//4/15/2015
// This file has two modifications. One is to include "config.h" at the beginning and another is to fix up the include paths of the various files in webcore directory. Merge carefully for next iteration.
//-EAWebKitChange

#include "config.h"
#include "StorageThread.h"

#include <wtf/AutodrainedPool.h>
#include <wtf/MainThread.h>
//+EAWebKitChange
//06/13/2013
#include <EAWebKit/EAWebKitThreadInterface.h>
//-EAWebKitChange

namespace WebCore {

static HashSet<StorageThread*>& activeStorageThreads()
{
    ASSERT(isMainThread());
    DEPRECATED_DEFINE_STATIC_LOCAL(HashSet<StorageThread*>, threads, ());
    return threads;
}

StorageThread::StorageThread()
    : m_threadID(0)
{
    ASSERT(isMainThread());
}

StorageThread::~StorageThread()
{
    ASSERT(isMainThread());
    ASSERT(!m_threadID);
}

bool StorageThread::start()
{
    ASSERT(isMainThread());
    if (!m_threadID)
        m_threadID = createThread(StorageThread::threadEntryPointCallback, this, "WebCore: LocalStorage");
    activeStorageThreads().add(this);
    return m_threadID;
}

void StorageThread::threadEntryPointCallback(void* thread)
{
    static_cast<StorageThread*>(thread)->threadEntryPoint();
}

void StorageThread::threadEntryPoint()
{
    ASSERT(!isMainThread());

    while (auto function = m_queue.waitForMessage()) {
        AutodrainedPool pool;
		//+EAWebKitChange
		//03/18/2014
		//(*function)();
		m_currentTask = *function;
		EA::WebKit::GetThreadSystem()->ScheduleWork(StorageThread::DoWorkCallback,(void*)this);
		//-EAWebKitChange
    }
}

//+EAWebKitChange
//06/13/2013
void StorageThread::DoWorkCallback(void* context)
{
	static_cast<StorageThread*>(context)->DoWork();
}

void StorageThread::DoWork()
{
	(m_currentTask)();
}
//-EAWebKitChange

void StorageThread::dispatch(const std::function<void ()>& function)
{
    ASSERT(isMainThread());
    ASSERT(!m_queue.killed() && m_threadID);
    m_queue.append(std::make_unique<std::function<void ()>>(function));
}

void StorageThread::terminate()
{
    ASSERT(isMainThread());
    ASSERT(!m_queue.killed() && m_threadID);
    activeStorageThreads().remove(this);
    // Even in weird, exceptional cases, don't wait on a nonexistent thread to terminate.
    if (!m_threadID)
        return;

    m_queue.append(std::make_unique<std::function<void ()>>([this] {
        performTerminate();
    }));
    waitForThreadCompletion(m_threadID);
    ASSERT(m_queue.killed());
    m_threadID = 0;
}

void StorageThread::performTerminate()
{
    ASSERT(!isMainThread());
    m_queue.kill();
}

void StorageThread::releaseFastMallocFreeMemoryInAllThreads()
{
    HashSet<StorageThread*>& threads = activeStorageThreads();

    for (HashSet<StorageThread*>::iterator it = threads.begin(), end = threads.end(); it != end; ++it)
        (*it)->dispatch(WTF::releaseFastMallocFreeMemory);
}

}
