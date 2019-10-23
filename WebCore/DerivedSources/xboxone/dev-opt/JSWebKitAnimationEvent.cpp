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
#include "JSWebKitAnimationEvent.h"

#include "JSDOMBinding.h"
#include "JSDictionary.h"
#include "URL.h"
#include "WebKitAnimationEvent.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsWebKitAnimationEventAnimationName(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebKitAnimationEventElapsedTime(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebKitAnimationEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSWebKitAnimationEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSWebKitAnimationEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebKitAnimationEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSWebKitAnimationEventPrototype>(vm.heap)) JSWebKitAnimationEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWebKitAnimationEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSWebKitAnimationEventConstructor : public DOMConstructorObject {
private:
    JSWebKitAnimationEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebKitAnimationEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebKitAnimationEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSWebKitAnimationEventConstructor>(vm.heap)) JSWebKitAnimationEventConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSWebKitAnimationEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

EncodedJSValue JSC_HOST_CALL JSWebKitAnimationEventConstructor::constructJSWebKitAnimationEvent(ExecState* exec)
{
    auto* jsConstructor = jsCast<JSWebKitAnimationEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->toAtomicString(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());

    WebKitAnimationEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillWebKitAnimationEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<WebKitAnimationEvent> event = WebKitAnimationEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillWebKitAnimationEventInit(WebKitAnimationEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("animationName", eventInit.animationName))
        return false;
    if (!dictionary.tryGetProperty("elapsedTime", eventInit.elapsedTime))
        return false;
    return true;
}

const ClassInfo JSWebKitAnimationEventConstructor::s_info = { "WebKitAnimationEventConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebKitAnimationEventConstructor) };

JSWebKitAnimationEventConstructor::JSWebKitAnimationEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebKitAnimationEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWebKitAnimationEvent::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("WebKitAnimationEvent"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
}

ConstructType JSWebKitAnimationEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSWebKitAnimationEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSWebKitAnimationEventPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitAnimationEventConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "animationName", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitAnimationEventAnimationName), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "elapsedTime", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitAnimationEventElapsedTime), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSWebKitAnimationEventPrototype::s_info = { "WebKitAnimationEventPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebKitAnimationEventPrototype) };

void JSWebKitAnimationEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSWebKitAnimationEventPrototypeTableValues, *this);
}

const ClassInfo JSWebKitAnimationEvent::s_info = { "WebKitAnimationEvent", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebKitAnimationEvent) };

JSWebKitAnimationEvent::JSWebKitAnimationEvent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<WebKitAnimationEvent>&& impl)
    : JSEvent(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSWebKitAnimationEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebKitAnimationEventPrototype::create(vm, globalObject, JSWebKitAnimationEventPrototype::createStructure(vm, globalObject, JSEvent::getPrototype(vm, globalObject)));
}

JSObject* JSWebKitAnimationEvent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebKitAnimationEvent>(vm, globalObject);
}

EncodedJSValue jsWebKitAnimationEventAnimationName(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebKitAnimationEvent* castedThis = jsDynamicCast<JSWebKitAnimationEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebKitAnimationEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebKitAnimationEvent", "animationName");
        return throwGetterTypeError(*exec, "WebKitAnimationEvent", "animationName");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.animationName());
    return JSValue::encode(result);
}


EncodedJSValue jsWebKitAnimationEventElapsedTime(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebKitAnimationEvent* castedThis = jsDynamicCast<JSWebKitAnimationEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebKitAnimationEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebKitAnimationEvent", "elapsedTime");
        return throwGetterTypeError(*exec, "WebKitAnimationEvent", "elapsedTime");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.elapsedTime());
    return JSValue::encode(result);
}


EncodedJSValue jsWebKitAnimationEventConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSWebKitAnimationEventPrototype* domObject = jsDynamicCast<JSWebKitAnimationEventPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSWebKitAnimationEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSWebKitAnimationEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebKitAnimationEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}