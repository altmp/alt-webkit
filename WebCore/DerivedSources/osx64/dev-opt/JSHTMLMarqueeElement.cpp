/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

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

#include "config.h"
#include "JSHTMLMarqueeElement.h"

#include "ExceptionCode.h"
#include "HTMLMarqueeElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLMarqueeElementPrototypeFunctionStart(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLMarqueeElementPrototypeFunctionStop(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsHTMLMarqueeElementBehavior(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLMarqueeElementBehavior(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLMarqueeElementBgColor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLMarqueeElementBgColor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLMarqueeElementDirection(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLMarqueeElementDirection(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLMarqueeElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLMarqueeElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLMarqueeElementHspace(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLMarqueeElementHspace(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLMarqueeElementLoop(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLMarqueeElementLoop(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLMarqueeElementScrollAmount(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLMarqueeElementScrollAmount(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLMarqueeElementScrollDelay(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLMarqueeElementScrollDelay(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLMarqueeElementTrueSpeed(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLMarqueeElementTrueSpeed(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLMarqueeElementVspace(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLMarqueeElementVspace(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLMarqueeElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLMarqueeElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLMarqueeElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSHTMLMarqueeElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSHTMLMarqueeElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLMarqueeElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLMarqueeElementPrototype>(vm.heap)) JSHTMLMarqueeElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLMarqueeElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSHTMLMarqueeElementConstructor : public DOMConstructorObject {
private:
    JSHTMLMarqueeElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLMarqueeElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLMarqueeElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLMarqueeElementConstructor>(vm.heap)) JSHTMLMarqueeElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSHTMLMarqueeElementConstructor::s_info = { "HTMLMarqueeElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLMarqueeElementConstructor) };

JSHTMLMarqueeElementConstructor::JSHTMLMarqueeElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLMarqueeElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLMarqueeElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("HTMLMarqueeElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLMarqueeElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "behavior", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementBehavior), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLMarqueeElementBehavior) },
    { "bgColor", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementBgColor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLMarqueeElementBgColor) },
    { "direction", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementDirection), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLMarqueeElementDirection) },
    { "height", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLMarqueeElementHeight) },
    { "hspace", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementHspace), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLMarqueeElementHspace) },
    { "loop", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementLoop), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLMarqueeElementLoop) },
    { "scrollAmount", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementScrollAmount), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLMarqueeElementScrollAmount) },
    { "scrollDelay", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementScrollDelay), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLMarqueeElementScrollDelay) },
    { "trueSpeed", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementTrueSpeed), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLMarqueeElementTrueSpeed) },
    { "vspace", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementVspace), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLMarqueeElementVspace) },
    { "width", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMarqueeElementWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLMarqueeElementWidth) },
    { "start", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLMarqueeElementPrototypeFunctionStart), (intptr_t) (0) },
    { "stop", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLMarqueeElementPrototypeFunctionStop), (intptr_t) (0) },
};

const ClassInfo JSHTMLMarqueeElementPrototype::s_info = { "HTMLMarqueeElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLMarqueeElementPrototype) };

void JSHTMLMarqueeElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSHTMLMarqueeElementPrototypeTableValues, *this);
}

const ClassInfo JSHTMLMarqueeElement::s_info = { "HTMLMarqueeElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLMarqueeElement) };

JSHTMLMarqueeElement::JSHTMLMarqueeElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLMarqueeElement>&& impl)
    : JSHTMLElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSHTMLMarqueeElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLMarqueeElementPrototype::create(vm, globalObject, JSHTMLMarqueeElementPrototype::createStructure(vm, globalObject, JSHTMLElement::getPrototype(vm, globalObject)));
}

JSObject* JSHTMLMarqueeElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLMarqueeElement>(vm, globalObject);
}

EncodedJSValue jsHTMLMarqueeElementBehavior(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLMarqueeElement", "behavior");
        return throwGetterTypeError(*exec, "HTMLMarqueeElement", "behavior");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::behaviorAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLMarqueeElementBgColor(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLMarqueeElement", "bgColor");
        return throwGetterTypeError(*exec, "HTMLMarqueeElement", "bgColor");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::bgcolorAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLMarqueeElementDirection(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLMarqueeElement", "direction");
        return throwGetterTypeError(*exec, "HTMLMarqueeElement", "direction");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::directionAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLMarqueeElementHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLMarqueeElement", "height");
        return throwGetterTypeError(*exec, "HTMLMarqueeElement", "height");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::heightAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLMarqueeElementHspace(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLMarqueeElement", "hspace");
        return throwGetterTypeError(*exec, "HTMLMarqueeElement", "hspace");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(std::max(0, impl.getIntegralAttribute(WebCore::HTMLNames::hspaceAttr)));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLMarqueeElementLoop(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLMarqueeElement", "loop");
        return throwGetterTypeError(*exec, "HTMLMarqueeElement", "loop");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.loop());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLMarqueeElementScrollAmount(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLMarqueeElement", "scrollAmount");
        return throwGetterTypeError(*exec, "HTMLMarqueeElement", "scrollAmount");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.scrollAmount());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLMarqueeElementScrollDelay(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLMarqueeElement", "scrollDelay");
        return throwGetterTypeError(*exec, "HTMLMarqueeElement", "scrollDelay");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.scrollDelay());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLMarqueeElementTrueSpeed(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLMarqueeElement", "trueSpeed");
        return throwGetterTypeError(*exec, "HTMLMarqueeElement", "trueSpeed");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.fastHasAttribute(WebCore::HTMLNames::truespeedAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLMarqueeElementVspace(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLMarqueeElement", "vspace");
        return throwGetterTypeError(*exec, "HTMLMarqueeElement", "vspace");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(std::max(0, impl.getIntegralAttribute(WebCore::HTMLNames::vspaceAttr)));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLMarqueeElementWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLMarqueeElement", "width");
        return throwGetterTypeError(*exec, "HTMLMarqueeElement", "width");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::widthAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLMarqueeElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSHTMLMarqueeElementPrototype* domObject = jsDynamicCast<JSHTMLMarqueeElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLMarqueeElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSHTMLMarqueeElementBehavior(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLMarqueeElement", "behavior");
        else
            throwSetterTypeError(*exec, "HTMLMarqueeElement", "behavior");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::behaviorAttr, nativeValue);
}


void setJSHTMLMarqueeElementBgColor(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLMarqueeElement", "bgColor");
        else
            throwSetterTypeError(*exec, "HTMLMarqueeElement", "bgColor");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::bgcolorAttr, nativeValue);
}


void setJSHTMLMarqueeElementDirection(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLMarqueeElement", "direction");
        else
            throwSetterTypeError(*exec, "HTMLMarqueeElement", "direction");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::directionAttr, nativeValue);
}


void setJSHTMLMarqueeElementHeight(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLMarqueeElement", "height");
        else
            throwSetterTypeError(*exec, "HTMLMarqueeElement", "height");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::heightAttr, nativeValue);
}


void setJSHTMLMarqueeElementHspace(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLMarqueeElement", "hspace");
        else
            throwSetterTypeError(*exec, "HTMLMarqueeElement", "hspace");
        return;
    }
    auto& impl = castedThis->impl();
    unsigned nativeValue = toUInt32(exec, value, NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setUnsignedIntegralAttribute(WebCore::HTMLNames::hspaceAttr, nativeValue);
}


void setJSHTMLMarqueeElementLoop(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLMarqueeElement", "loop");
        else
            throwSetterTypeError(*exec, "HTMLMarqueeElement", "loop");
        return;
    }
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int nativeValue = toInt32(exec, value, NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setLoop(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSHTMLMarqueeElementScrollAmount(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLMarqueeElement", "scrollAmount");
        else
            throwSetterTypeError(*exec, "HTMLMarqueeElement", "scrollAmount");
        return;
    }
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int nativeValue = toInt32(exec, value, NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setScrollAmount(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSHTMLMarqueeElementScrollDelay(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLMarqueeElement", "scrollDelay");
        else
            throwSetterTypeError(*exec, "HTMLMarqueeElement", "scrollDelay");
        return;
    }
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int nativeValue = toInt32(exec, value, NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setScrollDelay(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSHTMLMarqueeElementTrueSpeed(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLMarqueeElement", "trueSpeed");
        else
            throwSetterTypeError(*exec, "HTMLMarqueeElement", "trueSpeed");
        return;
    }
    auto& impl = castedThis->impl();
    bool nativeValue = value.toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setBooleanAttribute(WebCore::HTMLNames::truespeedAttr, nativeValue);
}


void setJSHTMLMarqueeElementVspace(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLMarqueeElement", "vspace");
        else
            throwSetterTypeError(*exec, "HTMLMarqueeElement", "vspace");
        return;
    }
    auto& impl = castedThis->impl();
    unsigned nativeValue = toUInt32(exec, value, NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setUnsignedIntegralAttribute(WebCore::HTMLNames::vspaceAttr, nativeValue);
}


void setJSHTMLMarqueeElementWidth(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLMarqueeElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLMarqueeElement", "width");
        else
            throwSetterTypeError(*exec, "HTMLMarqueeElement", "width");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::widthAttr, nativeValue);
}


JSValue JSHTMLMarqueeElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLMarqueeElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLMarqueeElementPrototypeFunctionStart(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLMarqueeElement", "start");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLMarqueeElement::info());
    auto& impl = castedThis->impl();
    impl.start();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHTMLMarqueeElementPrototypeFunctionStop(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLMarqueeElement* castedThis = jsDynamicCast<JSHTMLMarqueeElement*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLMarqueeElement", "stop");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLMarqueeElement::info());
    auto& impl = castedThis->impl();
    impl.stop();
    return JSValue::encode(jsUndefined());
}


}