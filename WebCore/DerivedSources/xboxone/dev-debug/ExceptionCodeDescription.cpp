/*
 * THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 * Copyright (C) 2011 Google Inc.  All rights reserved.
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
 * THIS SOFTWARE IS PROVIDED BY GOOGLE, INC. ``AS IS'' AND ANY
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

#include "config.h"
#include "ExceptionCodeDescription.h"

#include "ExceptionCode.h"
#include "DOMCoreException.h"
#include "EventException.h"
#include "FileException.h"
#include "RangeException.h"
#include "SQLException.h"
#include "SVGException.h"
#include "XMLHttpRequestException.h"
#include "XPathException.h"
#if ENABLE(INDEXED_DATABASE)
#include "IDBDatabaseException.h"
#endif

namespace WebCore {

ExceptionCodeDescription::ExceptionCodeDescription(ExceptionCode ec)
{
    ASSERT(ec);
    if (EventException::initializeDescription(ec, this))
        return;
    if (FileException::initializeDescription(ec, this))
        return;
    if (RangeException::initializeDescription(ec, this))
        return;
    if (SQLException::initializeDescription(ec, this))
        return;
    if (SVGException::initializeDescription(ec, this))
        return;
    if (XMLHttpRequestException::initializeDescription(ec, this))
        return;
    if (XPathException::initializeDescription(ec, this))
        return;
#if ENABLE(INDEXED_DATABASE)
    if (IDBDatabaseException::initializeDescription(ec, this))
        return;
#endif
    if (DOMCoreException::initializeDescription(ec, this))
        return;
    ASSERT_NOT_REACHED();
}

} // namespace WebCore
