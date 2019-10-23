/*
 * Copyright (C) 2011 Google Inc. All rights reserved.
 * Copyright (C) 2014, 2015 Electronic Arts, Inc. All rights reserved.
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
#include "OSRandomSource.h"

#include <stdint.h>
#include <stdlib.h>

#if !OS(DARWIN) && OS(UNIX)
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#endif

#if OS(WINDOWS)
#include <windows.h>
#include <wincrypt.h> // windows.h must be included before wincrypt.h.
#endif

//+EAWebKitChange
//2/28/2014
#if PLATFORM(EA)
namespace EA { namespace WebKit {
    extern bool (*gpCryptographicallyRandomValueCallback)(unsigned char *buffer, size_t length);
}}
#endif
//-EAWebKitChange

namespace WTF {

#if !OS(DARWIN) && OS(UNIX)
NEVER_INLINE NO_RETURN_DUE_TO_CRASH static void crashUnableToOpenURandom()
{
    CRASH();
}

NEVER_INLINE NO_RETURN_DUE_TO_CRASH static void crashUnableToReadFromURandom()
{
    CRASH();
}
#endif
    
void cryptographicallyRandomValuesFromOS(unsigned char* buffer, size_t length)
{
#if OS(DARWIN)
    return arc4random_buf(buffer, length);
//+EAWebKitChange
//2/28/2014
//5/04/2015
#elif PLATFORM(EA)
	bool bResult = true;
	if (!EA::WebKit::gpCryptographicallyRandomValueCallback || !(bResult = EA::WebKit::gpCryptographicallyRandomValueCallback(buffer, length)))
    {
		if (bResult)
			ASSERT_WITH_MESSAGE(false, "WARNING : Missing an application-supplied Crypto function!!");

		ASSERT_WITH_MESSAGE(false, "Using a default Crypto Implementation");
		for (size_t i = 0; i < length; ++i) {
			buffer[i] = rand() % 255;
		}
    }
//-EAWebKitChange
#elif OS(UNIX)
    int fd = open("/dev/urandom", O_RDONLY, 0);
    if (fd < 0)
        crashUnableToOpenURandom(); // We need /dev/urandom for this API to work...

    ssize_t amountRead = 0;
    while (static_cast<size_t>(amountRead) < length) {
        ssize_t currentRead = read(fd, buffer + amountRead, length - amountRead);
        // We need to check for both EAGAIN and EINTR since on some systems /dev/urandom
        // is blocking and on others it is non-blocking.
        if (currentRead == -1) {
            if (!(errno == EAGAIN || errno == EINTR))
                crashUnableToReadFromURandom();
        } else
            amountRead += currentRead;
    }
    
    close(fd);

#elif OS(WINDOWS)
    HCRYPTPROV hCryptProv = 0;
    if (!CryptAcquireContext(&hCryptProv, 0, MS_DEF_PROV, PROV_RSA_FULL, CRYPT_VERIFYCONTEXT))
        CRASH();
    if (!CryptGenRandom(hCryptProv, length, buffer))
        CRASH();
    CryptReleaseContext(hCryptProv, 0);
#else
    #error "This configuration doesn't have a strong source of randomness."
    // WARNING: When adding new sources of OS randomness, the randomness must
    //          be of cryptographic quality!
#endif
}

}
