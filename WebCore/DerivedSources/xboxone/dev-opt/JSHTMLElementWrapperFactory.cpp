/*
 * THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 * This file was generated by the dom/make_names.pl script.
 *
 * Copyright (C) 2005, 2006, 2007, 2008, 2009, 2013 Apple Inc.  All rights reserved.
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

#include "config.h"
#include "JSHTMLElementWrapperFactory.h"

#include "JSHTMLAnchorElement.h"
#include "JSHTMLAppletElement.h"
#include "JSHTMLAreaElement.h"
#include "JSHTMLBaseElement.h"
#include "JSHTMLBaseFontElement.h"
#include "JSHTMLQuoteElement.h"
#include "JSHTMLBodyElement.h"
#include "JSHTMLBRElement.h"
#include "JSHTMLButtonElement.h"
#include "JSHTMLCanvasElement.h"
#include "JSHTMLTableCaptionElement.h"
#include "JSHTMLTableColElement.h"
#include "JSHTMLModElement.h"
#include "JSHTMLDirectoryElement.h"
#include "JSHTMLDivElement.h"
#include "JSHTMLDListElement.h"
#include "JSHTMLEmbedElement.h"
#include "JSHTMLFieldSetElement.h"
#include "JSHTMLFontElement.h"
#include "JSHTMLFormElement.h"
#include "JSHTMLFrameElement.h"
#include "JSHTMLFrameSetElement.h"
#include "JSHTMLHeadingElement.h"
#include "JSHTMLHeadElement.h"
#include "JSHTMLHRElement.h"
#include "JSHTMLHtmlElement.h"
#include "JSHTMLIFrameElement.h"
#include "JSHTMLUnknownElement.h"
#include "JSHTMLImageElement.h"
#include "JSHTMLInputElement.h"
#include "JSHTMLKeygenElement.h"
#include "JSHTMLLabelElement.h"
#include "JSHTMLLegendElement.h"
#include "JSHTMLLIElement.h"
#include "JSHTMLLinkElement.h"
#include "JSHTMLPreElement.h"
#include "JSHTMLMapElement.h"
#include "JSHTMLMarqueeElement.h"
#include "JSHTMLMenuElement.h"
#include "JSHTMLMetaElement.h"
#include "JSHTMLObjectElement.h"
#include "JSHTMLOListElement.h"
#include "JSHTMLOptGroupElement.h"
#include "JSHTMLOptionElement.h"
#include "JSHTMLOutputElement.h"
#include "JSHTMLParagraphElement.h"
#include "JSHTMLParamElement.h"
#include "JSHTMLProgressElement.h"
#include "JSHTMLScriptElement.h"
#include "JSHTMLSelectElement.h"
#include "JSHTMLSpanElement.h"
#include "JSHTMLStyleElement.h"
#include "JSHTMLTableElement.h"
#include "JSHTMLTableSectionElement.h"
#include "JSHTMLTableCellElement.h"
#include "JSHTMLTextAreaElement.h"
#include "JSHTMLTitleElement.h"
#include "JSHTMLTableRowElement.h"
#include "JSHTMLUListElement.h"
#include "JSHTMLUnknownElement.h"
#include "HTMLAnchorElement.h"
#include "HTMLElement.h"
#include "HTMLAppletElement.h"
#include "HTMLAreaElement.h"
#include "HTMLBaseElement.h"
#include "HTMLBaseFontElement.h"
#include "HTMLBDIElement.h"
#include "HTMLQuoteElement.h"
#include "HTMLBodyElement.h"
#include "HTMLBRElement.h"
#include "HTMLButtonElement.h"
#include "HTMLCanvasElement.h"
#include "HTMLTableCaptionElement.h"
#include "HTMLTableColElement.h"
#include "HTMLModElement.h"
#include "HTMLDirectoryElement.h"
#include "HTMLDivElement.h"
#include "HTMLDListElement.h"
#include "HTMLEmbedElement.h"
#include "HTMLFieldSetElement.h"
#include "HTMLFontElement.h"
#include "HTMLFormElement.h"
#include "HTMLFrameElement.h"
#include "HTMLFrameSetElement.h"
#include "HTMLHeadingElement.h"
#include "HTMLHeadElement.h"
#include "HTMLHRElement.h"
#include "HTMLHtmlElement.h"
#include "HTMLIFrameElement.h"
#include "HTMLUnknownElement.h"
#include "HTMLImageElement.h"
#include "HTMLInputElement.h"
#include "HTMLKeygenElement.h"
#include "HTMLLabelElement.h"
#include "HTMLLegendElement.h"
#include "HTMLLIElement.h"
#include "HTMLLinkElement.h"
#include "HTMLPreElement.h"
#include "HTMLMapElement.h"
#include "HTMLMarqueeElement.h"
#include "HTMLMenuElement.h"
#include "HTMLMetaElement.h"
#include "HTMLObjectElement.h"
#include "HTMLOListElement.h"
#include "HTMLOptGroupElement.h"
#include "HTMLOptionElement.h"
#include "HTMLOutputElement.h"
#include "HTMLParagraphElement.h"
#include "HTMLParamElement.h"
#include "HTMLProgressElement.h"
#include "RubyTextElement.h"
#include "RubyElement.h"
#include "HTMLScriptElement.h"
#include "HTMLSelectElement.h"
#include "HTMLSpanElement.h"
#include "HTMLStyleElement.h"
#include "HTMLTableElement.h"
#include "HTMLTableSectionElement.h"
#include "HTMLTableCellElement.h"
#include "HTMLTextAreaElement.h"
#include "HTMLTitleElement.h"
#include "HTMLTableRowElement.h"
#include "HTMLUListElement.h"
#include "HTMLWBRElement.h"
#include "HTMLUnknownElement.h"

#include "HTMLNames.h"

#include "Document.h"
#include "RuntimeEnabledFeatures.h"
#include "Settings.h"
#include <wtf/NeverDestroyed.h>
#include <wtf/StdLibExtras.h>

#if ENABLE(ATTACHMENT_ELEMENT)
#include "HTMLAttachmentElement.h"
#include "JSHTMLAttachmentElement.h"
#endif

#if ENABLE(DATALIST_ELEMENT)
#include "HTMLDataListElement.h"
#include "JSHTMLDataListElement.h"
#endif

#if ENABLE(DETAILS_ELEMENT)
#include "HTMLDetailsElement.h"
#include "HTMLSummaryElement.h"
#include "JSHTMLDetailsElement.h"
#endif

#if ENABLE(METER_ELEMENT)
#include "HTMLMeterElement.h"
#include "JSHTMLMeterElement.h"
#endif

#if ENABLE(TEMPLATE_ELEMENT)
#include "HTMLTemplateElement.h"
#include "JSHTMLTemplateElement.h"
#endif

#if ENABLE(VIDEO)
#include "HTMLAudioElement.h"
#include "HTMLSourceElement.h"
#include "HTMLVideoElement.h"
#include "JSHTMLAudioElement.h"
#include "JSHTMLSourceElement.h"
#include "JSHTMLVideoElement.h"
#endif

#if ENABLE(VIDEO_TRACK)
#include "HTMLTrackElement.h"
#include "JSHTMLTrackElement.h"
#endif

using namespace JSC;

namespace WebCore {

using namespace HTMLNames;

typedef JSDOMWrapper* (*CreateHTMLElementWrapperFunction)(JSDOMGlobalObject*, PassRefPtr<HTMLElement>);

static JSDOMWrapper* createHTMLAnchorElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLAnchorElement, element.get());
}

static JSDOMWrapper* createHTMLElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLElement, element.get());
}

static JSDOMWrapper* createHTMLAppletElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLAppletElement, element.get());
}

static JSDOMWrapper* createHTMLAreaElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLAreaElement, element.get());
}

#if ENABLE(ATTACHMENT_ELEMENT)

static JSDOMWrapper* createHTMLAttachmentElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    if (element->isHTMLUnknownElement())
        return CREATE_DOM_WRAPPER(globalObject, HTMLUnknownElement, element.get());
    return CREATE_DOM_WRAPPER(globalObject, HTMLAttachmentElement, element.get());
}

#endif

#if ENABLE(VIDEO)

static JSDOMWrapper* createHTMLAudioElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    if (element->isHTMLUnknownElement())
        return CREATE_DOM_WRAPPER(globalObject, HTMLUnknownElement, element.get());
    return CREATE_DOM_WRAPPER(globalObject, HTMLAudioElement, element.get());
}

#endif

static JSDOMWrapper* createHTMLBaseElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLBaseElement, element.get());
}

static JSDOMWrapper* createHTMLBaseFontElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLBaseFontElement, element.get());
}

static JSDOMWrapper* createHTMLQuoteElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLQuoteElement, element.get());
}

static JSDOMWrapper* createHTMLBodyElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLBodyElement, element.get());
}

static JSDOMWrapper* createHTMLBRElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLBRElement, element.get());
}

static JSDOMWrapper* createHTMLButtonElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLButtonElement, element.get());
}

static JSDOMWrapper* createHTMLCanvasElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLCanvasElement, element.get());
}

static JSDOMWrapper* createHTMLTableCaptionElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLTableCaptionElement, element.get());
}

static JSDOMWrapper* createHTMLTableColElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLTableColElement, element.get());
}

#if ENABLE(DATALIST_ELEMENT)

static JSDOMWrapper* createHTMLDataListElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLDataListElement, element.get());
}

#endif

static JSDOMWrapper* createHTMLModElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLModElement, element.get());
}

#if ENABLE(DETAILS_ELEMENT)

static JSDOMWrapper* createHTMLDetailsElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLDetailsElement, element.get());
}

#endif

static JSDOMWrapper* createHTMLDirectoryElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLDirectoryElement, element.get());
}

static JSDOMWrapper* createHTMLDivElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLDivElement, element.get());
}

static JSDOMWrapper* createHTMLDListElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLDListElement, element.get());
}

static JSDOMWrapper* createHTMLEmbedElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLEmbedElement, element.get());
}

static JSDOMWrapper* createHTMLFieldSetElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLFieldSetElement, element.get());
}

static JSDOMWrapper* createHTMLFontElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLFontElement, element.get());
}

static JSDOMWrapper* createHTMLFormElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLFormElement, element.get());
}

static JSDOMWrapper* createHTMLFrameElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLFrameElement, element.get());
}

static JSDOMWrapper* createHTMLFrameSetElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLFrameSetElement, element.get());
}

static JSDOMWrapper* createHTMLHeadingElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLHeadingElement, element.get());
}

static JSDOMWrapper* createHTMLHeadElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLHeadElement, element.get());
}

static JSDOMWrapper* createHTMLHRElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLHRElement, element.get());
}

static JSDOMWrapper* createHTMLHtmlElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLHtmlElement, element.get());
}

static JSDOMWrapper* createHTMLIFrameElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLIFrameElement, element.get());
}

static JSDOMWrapper* createHTMLUnknownElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLUnknownElement, element.get());
}

static JSDOMWrapper* createHTMLImageElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLImageElement, element.get());
}

static JSDOMWrapper* createHTMLInputElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLInputElement, element.get());
}

static JSDOMWrapper* createHTMLKeygenElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLKeygenElement, element.get());
}

static JSDOMWrapper* createHTMLLabelElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLLabelElement, element.get());
}

static JSDOMWrapper* createHTMLLegendElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLLegendElement, element.get());
}

static JSDOMWrapper* createHTMLLIElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLLIElement, element.get());
}

static JSDOMWrapper* createHTMLLinkElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLLinkElement, element.get());
}

static JSDOMWrapper* createHTMLPreElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLPreElement, element.get());
}

static JSDOMWrapper* createHTMLMapElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLMapElement, element.get());
}

static JSDOMWrapper* createHTMLMarqueeElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLMarqueeElement, element.get());
}

static JSDOMWrapper* createHTMLMenuElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLMenuElement, element.get());
}

static JSDOMWrapper* createHTMLMetaElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLMetaElement, element.get());
}

#if ENABLE(METER_ELEMENT)

static JSDOMWrapper* createHTMLMeterElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLMeterElement, element.get());
}

#endif

static JSDOMWrapper* createHTMLObjectElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLObjectElement, element.get());
}

static JSDOMWrapper* createHTMLOListElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLOListElement, element.get());
}

static JSDOMWrapper* createHTMLOptGroupElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLOptGroupElement, element.get());
}

static JSDOMWrapper* createHTMLOptionElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLOptionElement, element.get());
}

static JSDOMWrapper* createHTMLOutputElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLOutputElement, element.get());
}

static JSDOMWrapper* createHTMLParagraphElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLParagraphElement, element.get());
}

static JSDOMWrapper* createHTMLParamElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLParamElement, element.get());
}

static JSDOMWrapper* createHTMLProgressElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLProgressElement, element.get());
}

static JSDOMWrapper* createHTMLScriptElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLScriptElement, element.get());
}

static JSDOMWrapper* createHTMLSelectElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLSelectElement, element.get());
}

#if ENABLE(VIDEO)

static JSDOMWrapper* createHTMLSourceElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    if (element->isHTMLUnknownElement())
        return CREATE_DOM_WRAPPER(globalObject, HTMLUnknownElement, element.get());
    return CREATE_DOM_WRAPPER(globalObject, HTMLSourceElement, element.get());
}

#endif

static JSDOMWrapper* createHTMLSpanElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLSpanElement, element.get());
}

static JSDOMWrapper* createHTMLStyleElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLStyleElement, element.get());
}

static JSDOMWrapper* createHTMLTableElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLTableElement, element.get());
}

static JSDOMWrapper* createHTMLTableSectionElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLTableSectionElement, element.get());
}

static JSDOMWrapper* createHTMLTableCellElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLTableCellElement, element.get());
}

#if ENABLE(TEMPLATE_ELEMENT)

static JSDOMWrapper* createHTMLTemplateElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLTemplateElement, element.get());
}

#endif

static JSDOMWrapper* createHTMLTextAreaElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLTextAreaElement, element.get());
}

static JSDOMWrapper* createHTMLTitleElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLTitleElement, element.get());
}

static JSDOMWrapper* createHTMLTableRowElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLTableRowElement, element.get());
}

#if ENABLE(VIDEO_TRACK)

static JSDOMWrapper* createHTMLTrackElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    if (element->isHTMLUnknownElement())
        return CREATE_DOM_WRAPPER(globalObject, HTMLUnknownElement, element.get());
    return CREATE_DOM_WRAPPER(globalObject, HTMLTrackElement, element.get());
}

#endif

static JSDOMWrapper* createHTMLUListElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    return CREATE_DOM_WRAPPER(globalObject, HTMLUListElement, element.get());
}

#if ENABLE(VIDEO)

static JSDOMWrapper* createHTMLVideoElementWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    if (element->isHTMLUnknownElement())
        return CREATE_DOM_WRAPPER(globalObject, HTMLUnknownElement, element.get());
    return CREATE_DOM_WRAPPER(globalObject, HTMLVideoElement, element.get());
}

#endif


static NEVER_INLINE void populateHTMLWrapperMap(HashMap<AtomicStringImpl*, CreateHTMLElementWrapperFunction>& map)
{
    struct TableEntry {
        const QualifiedName& name;
        CreateHTMLElementWrapperFunction function;
    };

    static const TableEntry table[] = {
        { aTag, &createHTMLAnchorElementWrapper },
        { abbrTag, &createHTMLElementWrapper },
        { acronymTag, &createHTMLElementWrapper },
        { addressTag, &createHTMLElementWrapper },
        { appletTag, &createHTMLAppletElementWrapper },
        { areaTag, &createHTMLAreaElementWrapper },
        { articleTag, &createHTMLElementWrapper },
        { asideTag, &createHTMLElementWrapper },
#if ENABLE(ATTACHMENT_ELEMENT)
        { attachmentTag, &createHTMLAttachmentElementWrapper },
#endif
#if ENABLE(VIDEO)
        { audioTag, &createHTMLAudioElementWrapper },
#endif
        { bTag, &createHTMLElementWrapper },
        { baseTag, &createHTMLBaseElementWrapper },
        { basefontTag, &createHTMLBaseFontElementWrapper },
        { bdiTag, &createHTMLElementWrapper },
        { bdoTag, &createHTMLElementWrapper },
        { bgsoundTag, &createHTMLElementWrapper },
        { bigTag, &createHTMLElementWrapper },
        { blockquoteTag, &createHTMLQuoteElementWrapper },
        { bodyTag, &createHTMLBodyElementWrapper },
        { brTag, &createHTMLBRElementWrapper },
        { buttonTag, &createHTMLButtonElementWrapper },
        { canvasTag, &createHTMLCanvasElementWrapper },
        { captionTag, &createHTMLTableCaptionElementWrapper },
        { centerTag, &createHTMLElementWrapper },
        { citeTag, &createHTMLElementWrapper },
        { codeTag, &createHTMLElementWrapper },
        { colTag, &createHTMLTableColElementWrapper },
        { colgroupTag, &createHTMLTableColElementWrapper },
        { commandTag, &createHTMLElementWrapper },
#if ENABLE(DATALIST_ELEMENT)
        { datalistTag, &createHTMLDataListElementWrapper },
#endif
        { ddTag, &createHTMLElementWrapper },
        { delTag, &createHTMLModElementWrapper },
#if ENABLE(DETAILS_ELEMENT)
        { detailsTag, &createHTMLDetailsElementWrapper },
#endif
        { dfnTag, &createHTMLElementWrapper },
        { dirTag, &createHTMLDirectoryElementWrapper },
        { divTag, &createHTMLDivElementWrapper },
        { dlTag, &createHTMLDListElementWrapper },
        { dtTag, &createHTMLElementWrapper },
        { emTag, &createHTMLElementWrapper },
        { embedTag, &createHTMLEmbedElementWrapper },
        { fieldsetTag, &createHTMLFieldSetElementWrapper },
        { figcaptionTag, &createHTMLElementWrapper },
        { figureTag, &createHTMLElementWrapper },
        { fontTag, &createHTMLFontElementWrapper },
        { footerTag, &createHTMLElementWrapper },
        { formTag, &createHTMLFormElementWrapper },
        { frameTag, &createHTMLFrameElementWrapper },
        { framesetTag, &createHTMLFrameSetElementWrapper },
        { h1Tag, &createHTMLHeadingElementWrapper },
        { h2Tag, &createHTMLHeadingElementWrapper },
        { h3Tag, &createHTMLHeadingElementWrapper },
        { h4Tag, &createHTMLHeadingElementWrapper },
        { h5Tag, &createHTMLHeadingElementWrapper },
        { h6Tag, &createHTMLHeadingElementWrapper },
        { headTag, &createHTMLHeadElementWrapper },
        { headerTag, &createHTMLElementWrapper },
        { hgroupTag, &createHTMLElementWrapper },
        { hrTag, &createHTMLHRElementWrapper },
        { htmlTag, &createHTMLHtmlElementWrapper },
        { iTag, &createHTMLElementWrapper },
        { iframeTag, &createHTMLIFrameElementWrapper },
        { imageTag, &createHTMLUnknownElementWrapper },
        { imgTag, &createHTMLImageElementWrapper },
        { inputTag, &createHTMLInputElementWrapper },
        { insTag, &createHTMLModElementWrapper },
        { isindexTag, &createHTMLUnknownElementWrapper },
        { kbdTag, &createHTMLElementWrapper },
        { keygenTag, &createHTMLKeygenElementWrapper },
        { labelTag, &createHTMLLabelElementWrapper },
        { layerTag, &createHTMLElementWrapper },
        { legendTag, &createHTMLLegendElementWrapper },
        { liTag, &createHTMLLIElementWrapper },
        { linkTag, &createHTMLLinkElementWrapper },
        { listingTag, &createHTMLPreElementWrapper },
        { mainTag, &createHTMLElementWrapper },
        { mapTag, &createHTMLMapElementWrapper },
        { markTag, &createHTMLElementWrapper },
        { marqueeTag, &createHTMLMarqueeElementWrapper },
        { menuTag, &createHTMLMenuElementWrapper },
        { metaTag, &createHTMLMetaElementWrapper },
#if ENABLE(METER_ELEMENT)
        { meterTag, &createHTMLMeterElementWrapper },
#endif
        { navTag, &createHTMLElementWrapper },
        { nobrTag, &createHTMLElementWrapper },
        { noembedTag, &createHTMLElementWrapper },
        { noframesTag, &createHTMLElementWrapper },
        { nolayerTag, &createHTMLElementWrapper },
        { noscriptTag, &createHTMLElementWrapper },
        { objectTag, &createHTMLObjectElementWrapper },
        { olTag, &createHTMLOListElementWrapper },
        { optgroupTag, &createHTMLOptGroupElementWrapper },
        { optionTag, &createHTMLOptionElementWrapper },
        { outputTag, &createHTMLOutputElementWrapper },
        { pTag, &createHTMLParagraphElementWrapper },
        { paramTag, &createHTMLParamElementWrapper },
        { plaintextTag, &createHTMLElementWrapper },
        { preTag, &createHTMLPreElementWrapper },
        { progressTag, &createHTMLProgressElementWrapper },
        { qTag, &createHTMLQuoteElementWrapper },
        { rbTag, &createHTMLElementWrapper },
        { rpTag, &createHTMLElementWrapper },
        { rtTag, &createHTMLElementWrapper },
        { rtcTag, &createHTMLElementWrapper },
        { rubyTag, &createHTMLElementWrapper },
        { sTag, &createHTMLElementWrapper },
        { sampTag, &createHTMLElementWrapper },
        { scriptTag, &createHTMLScriptElementWrapper },
        { sectionTag, &createHTMLElementWrapper },
        { selectTag, &createHTMLSelectElementWrapper },
        { smallTag, &createHTMLElementWrapper },
#if ENABLE(VIDEO)
        { sourceTag, &createHTMLSourceElementWrapper },
#endif
        { spanTag, &createHTMLSpanElementWrapper },
        { strikeTag, &createHTMLElementWrapper },
        { strongTag, &createHTMLElementWrapper },
        { styleTag, &createHTMLStyleElementWrapper },
        { subTag, &createHTMLElementWrapper },
#if ENABLE(DETAILS_ELEMENT)
        { summaryTag, &createHTMLElementWrapper },
#endif
        { supTag, &createHTMLElementWrapper },
        { tableTag, &createHTMLTableElementWrapper },
        { tbodyTag, &createHTMLTableSectionElementWrapper },
        { tdTag, &createHTMLTableCellElementWrapper },
#if ENABLE(TEMPLATE_ELEMENT)
        { templateTag, &createHTMLTemplateElementWrapper },
#endif
        { textareaTag, &createHTMLTextAreaElementWrapper },
        { tfootTag, &createHTMLTableSectionElementWrapper },
        { thTag, &createHTMLTableCellElementWrapper },
        { theadTag, &createHTMLTableSectionElementWrapper },
        { timeTag, &createHTMLElementWrapper },
        { titleTag, &createHTMLTitleElementWrapper },
        { trTag, &createHTMLTableRowElementWrapper },
#if ENABLE(VIDEO_TRACK)
        { trackTag, &createHTMLTrackElementWrapper },
#endif
        { ttTag, &createHTMLElementWrapper },
        { uTag, &createHTMLElementWrapper },
        { ulTag, &createHTMLUListElementWrapper },
        { varTag, &createHTMLElementWrapper },
#if ENABLE(VIDEO)
        { videoTag, &createHTMLVideoElementWrapper },
#endif
        { wbrTag, &createHTMLElementWrapper },
        { webkitShadowContentTag, &createHTMLElementWrapper },
        { xmpTag, &createHTMLPreElementWrapper },
    };

    for (unsigned i = 0; i < WTF_ARRAY_LENGTH(table); ++i)
        map.add(table[i].name.localName().impl(), table[i].function);
}

JSDOMWrapper* createJSHTMLWrapper(JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> element)
{
    static NeverDestroyed<HashMap<AtomicStringImpl*, CreateHTMLElementWrapperFunction>> functions;
    if (functions.get().isEmpty())
        populateHTMLWrapperMap(functions);
    if (auto function = functions.get().get(element->localName().impl()))
        return function(globalObject, element);
    return CREATE_DOM_WRAPPER(globalObject, HTMLUnknownElement, element.get());
}

}