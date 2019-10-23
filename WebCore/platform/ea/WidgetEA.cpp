/*
 * Copyright (C) 2006 Dirk Mueller <mueller@kde.org>
 * Copyright (C) 2006 George Staikos <staikos@kde.org>
 * Copyright (C) 2006 Zack Rusin <zack@kde.org>
 * Copyright (C) 2006 Nikolas Zimmermann <zimmermann@kde.org>
 * Copyright (C) 2008 Holger Hans Peter Freyther
 *
 * All rights reserved.
 * Copyright (C) 2011, 2012, 2015 Electronic Arts, Inc. All rights reserved.
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
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "Widget.h"

#include "Cursor.h"
#include "Font.h"
#include "GraphicsContext.h"
#include "HostWindow.h"
#include "IntRect.h"
#include "NotImplemented.h"
#include "WebPageClientEA.h"
#include "FrameView.h"
#include <internal/include/EAWebKitAssert.h>

// EAWidget platform class for any custom settings.  
// In 1.x we had a WidgetPrivate which mostly passed around the containing Window to the scrollbars but that might have been hacky.  
// Most of the operations we want seem already handled (like getting the frameRect() and rect window conversions.  
// The cursor implementation should not be needed since our cursors are external and we send out a cursor changed notification.
class EAWidget
{
public:   
    void show(){}
    void hide(){}
};


namespace WebCore {

 
Widget::Widget(PlatformWidget widget)
{
    init(widget);
}

Widget::~Widget()
{
    EAW_ASSERT(!parent());
}

IntRect Widget::frameRect() const
{
    return m_frame;
}

void Widget::setFrameRect(const IntRect& rect)
{
    m_frame = rect;

    frameRectsChanged();
}

void Widget::setFocus(bool focused)
{
}

void Widget::setCursor(const Cursor& cursor)
{
    FrameView* view = root();
    if (!view)
        return;
    view->hostWindow()->setCursor(cursor);
}

void Widget::show()
{
    setSelfVisible(true);

    if (isParentVisible() && platformWidget())
        platformWidget()->show();
}

void Widget::hide()
{
    setSelfVisible(false);

    if (isParentVisible() && platformWidget())
        platformWidget()->hide();
}

void Widget::paint(GraphicsContext*, const IntRect&)
{
}

void Widget::setIsSelected(bool)
{
    notImplemented();
}

} // WebCore

namespace WebCore {

void ScrollView::platformAddChild(Widget*)
{
}

void ScrollView::platformRemoveChild(Widget* child)
{
	child->hide();
}

}
