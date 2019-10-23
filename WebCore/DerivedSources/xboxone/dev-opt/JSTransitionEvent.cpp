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
#include "JSTransitionEvent.h"

#include "JSDOMBinding.h"
#include "JSDictionary.h"
#include "TransitionEvent.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsTransitionEventPropertyName(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsTransitionEventElapsedTime(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsTransitionEventPseudoElement(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsTransitionEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSTransitionEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSTransitionEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTransitionEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSTransitionEventPrototype>(vm.heap)) JSTransitionEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTransitionEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSTransitionEventConstructor : public DOMConstructorObject {
private:
    JSTransitionEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSTransitionEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSTransitionEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSTransitionEventConstructor>(vm.heap)) JSTransitionEventConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSTransitionEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

EncodedJSValue JSC_HOST_CALL JSTransitionEventConstructor::constructJSTransitionEvent(ExecState* exec)
{
    auto* jsConstructor = jsCast<JSTransitionEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->toAtomicString(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());

    TransitionEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillTransitionEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<TransitionEvent> event = TransitionEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillTransitionEventInit(TransitionEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("propertyName", eventInit.propertyName))
        return false;
    if (!dictionary.tryGetProperty("elapsedTime", eventInit.elapsedTime))
        return false;
    if (!dictionary.tryGetProperty("pseudoElement", eventInit.pseudoElement))
        return false;
    return true;
}

const ClassInfo JSTransitionEventConstructor::s_info = { "TransitionEventConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSTransitionEventConstructor) };

JSTransitionEventConstructor::JSTransitionEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSTransitionEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSTransitionEvent::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("TransitionEvent"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
}

ConstructType JSTransitionEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSTransitionEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSTransitionEventPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTransitionEventConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "propertyName", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTransitionEventPropertyName), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "elapsedTime", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTransitionEventElapsedTime), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "pseudoElement", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTransitionEventPseudoElement), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSTransitionEventPrototype::s_info = { "TransitionEventPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSTransitionEventPrototype) };

void JSTransitionEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTransitionEventPrototypeTableValues, *this);
}

const ClassInfo JSTransitionEvent::s_info = { "TransitionEvent", &Base::s_info, 0, CREATE_METHOD_TABLE(JSTransitionEvent) };

JSTransitionEvent::JSTransitionEvent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<TransitionEvent>&& impl)
    : JSEvent(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSTransitionEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSTransitionEventPrototype::create(vm, globalObject, JSTransitionEventPrototype::createStructure(vm, globalObject, JSEvent::getPrototype(vm, globalObject)));
}

JSObject* JSTransitionEvent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSTransitionEvent>(vm, globalObject);
}

EncodedJSValue jsTransitionEventPropertyName(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSTransitionEvent* castedThis = jsDynamicCast<JSTransitionEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSTransitionEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "TransitionEvent", "propertyName");
        return throwGetterTypeError(*exec, "TransitionEvent", "propertyName");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.propertyName());
    return JSValue::encode(result);
}


EncodedJSValue jsTransitionEventElapsedTime(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSTransitionEvent* castedThis = jsDynamicCast<JSTransitionEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSTransitionEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "TransitionEvent", "elapsedTime");
        return throwGetterTypeError(*exec, "TransitionEvent", "elapsedTime");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.elapsedTime());
    return JSValue::encode(result);
}


EncodedJSValue jsTransitionEventPseudoElement(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSTransitionEvent* castedThis = jsDynamicCast<JSTransitionEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSTransitionEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "TransitionEvent", "pseudoElement");
        return throwGetterTypeError(*exec, "TransitionEvent", "pseudoElement");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.pseudoElement());
    return JSValue::encode(result);
}


EncodedJSValue jsTransitionEventConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSTransitionEventPrototype* domObject = jsDynamicCast<JSTransitionEventPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSTransitionEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSTransitionEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTransitionEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
