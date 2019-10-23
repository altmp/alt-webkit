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

#include "JSMediaStreamTrackEvent.h"

#include "JSDOMBinding.h"
#include "JSDictionary.h"
#include "JSMediaStreamTrack.h"
#include "MediaStreamTrack.h"
#include "MediaStreamTrackEvent.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsMediaStreamTrackEventTrack(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsMediaStreamTrackEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSMediaStreamTrackEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSMediaStreamTrackEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMediaStreamTrackEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSMediaStreamTrackEventPrototype>(vm.heap)) JSMediaStreamTrackEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMediaStreamTrackEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSMediaStreamTrackEventConstructor : public DOMConstructorObject {
private:
    JSMediaStreamTrackEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMediaStreamTrackEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMediaStreamTrackEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSMediaStreamTrackEventConstructor>(vm.heap)) JSMediaStreamTrackEventConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSMediaStreamTrackEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

EncodedJSValue JSC_HOST_CALL JSMediaStreamTrackEventConstructor::constructJSMediaStreamTrackEvent(ExecState* exec)
{
    auto* jsConstructor = jsCast<JSMediaStreamTrackEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->toAtomicString(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());

    MediaStreamTrackEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillMediaStreamTrackEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<MediaStreamTrackEvent> event = MediaStreamTrackEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillMediaStreamTrackEventInit(MediaStreamTrackEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("track", eventInit.track))
        return false;
    return true;
}

const ClassInfo JSMediaStreamTrackEventConstructor::s_info = { "MediaStreamTrackEventConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaStreamTrackEventConstructor) };

JSMediaStreamTrackEventConstructor::JSMediaStreamTrackEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMediaStreamTrackEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSMediaStreamTrackEvent::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("MediaStreamTrackEvent"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
}

ConstructType JSMediaStreamTrackEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSMediaStreamTrackEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSMediaStreamTrackEventPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamTrackEventConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "track", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamTrackEventTrack), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSMediaStreamTrackEventPrototype::s_info = { "MediaStreamTrackEventPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaStreamTrackEventPrototype) };

void JSMediaStreamTrackEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSMediaStreamTrackEventPrototypeTableValues, *this);
}

const ClassInfo JSMediaStreamTrackEvent::s_info = { "MediaStreamTrackEvent", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaStreamTrackEvent) };

JSMediaStreamTrackEvent::JSMediaStreamTrackEvent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<MediaStreamTrackEvent>&& impl)
    : JSEvent(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSMediaStreamTrackEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSMediaStreamTrackEventPrototype::create(vm, globalObject, JSMediaStreamTrackEventPrototype::createStructure(vm, globalObject, JSEvent::getPrototype(vm, globalObject)));
}

JSObject* JSMediaStreamTrackEvent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaStreamTrackEvent>(vm, globalObject);
}

EncodedJSValue jsMediaStreamTrackEventTrack(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaStreamTrackEvent* castedThis = jsDynamicCast<JSMediaStreamTrackEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaStreamTrackEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaStreamTrackEvent", "track");
        return throwGetterTypeError(*exec, "MediaStreamTrackEvent", "track");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.track()));
    return JSValue::encode(result);
}


EncodedJSValue jsMediaStreamTrackEventConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSMediaStreamTrackEventPrototype* domObject = jsDynamicCast<JSMediaStreamTrackEventPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSMediaStreamTrackEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSMediaStreamTrackEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMediaStreamTrackEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(MEDIA_STREAM)
