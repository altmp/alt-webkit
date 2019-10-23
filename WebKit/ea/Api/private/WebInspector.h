/*
    Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies)
	Copyright (C) 2011 Electronic Arts, Inc. All rights reserved.

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef WEBINSPECTOR_H
#define WEBINSPECTOR_H

#include "WebPage.h"
#include <EAWebKit/EAWebKitView.h>
#include <EAWebKit/EAWebKitSystem.h>

namespace WebCore
{
    class InspectorFrontendClientEA;
}

namespace EA { namespace WebKit
{
class WebInspectorPrivate;

class WebInspector
{
public:
    WebInspector(void);
    ~WebInspector(void);

    void SetFrontend(View *frontendView);
    View *GetFrontend(void);

    void SetFrontendClient(WebCore::InspectorFrontendClientEA *client);
    void Shutdown(void);

private:
    View *mFrontendView;
    WebCore::InspectorFrontendClientEA *mFrontendClient;
};

}}

#endif
