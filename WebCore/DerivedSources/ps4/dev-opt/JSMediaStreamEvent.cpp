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

#if ENABLE(MEDIA_STREAM)

#include "JSMediaStreamEvent.h"

#include "JSDOMBinding.h"
#include "JSDictionary.h"
#include "JSMediaStream.h"
#include "MediaStream.h"
#include "MediaStreamEvent.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsMediaStreamEventStream(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsMediaStreamEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSMediaStreamEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSMediaStreamEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMediaStreamEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSMediaStreamEventPrototype>(vm.heap)) JSMediaStreamEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMediaStreamEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSMediaStreamEventConstructor : public DOMConstructorObject {
private:
    JSMediaStreamEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMediaStreamEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMediaStreamEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSMediaStreamEventConstructor>(vm.heap)) JSMediaStreamEventConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSMediaStreamEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

EncodedJSValue JSC_HOST_CALL JSMediaStreamEventConstructor::constructJSMediaStreamEvent(ExecState* exec)
{
    auto* jsConstructor = jsCast<JSMediaStreamEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->toAtomicString(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());

    MediaStreamEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillMediaStreamEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<MediaStreamEvent> event = MediaStreamEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillMediaStreamEventInit(MediaStreamEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("stream", eventInit.stream))
        return false;
    return true;
}

const ClassInfo JSMediaStreamEventConstructor::s_info = { "MediaStreamEventConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaStreamEventConstructor) };

JSMediaStreamEventConstructor::JSMediaStreamEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMediaStreamEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSMediaStreamEvent::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("MediaStreamEvent"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
}

ConstructType JSMediaStreamEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSMediaStreamEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSMediaStreamEventPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamEventConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "stream", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamEventStream), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSMediaStreamEventPrototype::s_info = { "MediaStreamEventPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaStreamEventPrototype) };

void JSMediaStreamEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSMediaStreamEventPrototypeTableValues, *this);
}

const ClassInfo JSMediaStreamEvent::s_info = { "MediaStreamEvent", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaStreamEvent) };

JSMediaStreamEvent::JSMediaStreamEvent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<MediaStreamEvent>&& impl)
    : JSEvent(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSMediaStreamEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSMediaStreamEventPrototype::create(vm, globalObject, JSMediaStreamEventPrototype::createStructure(vm, globalObject, JSEvent::getPrototype(vm, globalObject)));
}

JSObject* JSMediaStreamEvent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaStreamEvent>(vm, globalObject);
}

EncodedJSValue jsMediaStreamEventStream(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaStreamEvent* castedThis = jsDynamicCast<JSMediaStreamEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaStreamEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaStreamEvent", "stream");
        return throwGetterTypeError(*exec, "MediaStreamEvent", "stream");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.stream()));
    return JSValue::encode(result);
}


EncodedJSValue jsMediaStreamEventConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSMediaStreamEventPrototype* domObject = jsDynamicCast<JSMediaStreamEventPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSMediaStreamEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSMediaStreamEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMediaStreamEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(MEDIA_STREAM)
