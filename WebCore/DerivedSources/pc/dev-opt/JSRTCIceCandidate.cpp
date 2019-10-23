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

#include "JSRTCIceCandidate.h"

#include "JSDOMBinding.h"
#include "RTCIceCandidate.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsRTCIceCandidateCandidate(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRTCIceCandidateSdpMid(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRTCIceCandidateSdpMLineIndex(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRTCIceCandidateConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSRTCIceCandidatePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSRTCIceCandidatePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSRTCIceCandidatePrototype* ptr = new (NotNull, JSC::allocateCell<JSRTCIceCandidatePrototype>(vm.heap)) JSRTCIceCandidatePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSRTCIceCandidatePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSRTCIceCandidateConstructor : public DOMConstructorObject {
private:
    JSRTCIceCandidateConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSRTCIceCandidateConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSRTCIceCandidateConstructor* ptr = new (NotNull, JSC::allocateCell<JSRTCIceCandidateConstructor>(vm.heap)) JSRTCIceCandidateConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

const ClassInfo JSRTCIceCandidateConstructor::s_info = { "RTCIceCandidateConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSRTCIceCandidateConstructor) };

JSRTCIceCandidateConstructor::JSRTCIceCandidateConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSRTCIceCandidateConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSRTCIceCandidate::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("RTCIceCandidate"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

ConstructType JSRTCIceCandidateConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSRTCIceCandidate;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSRTCIceCandidatePrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCIceCandidateConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "candidate", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCIceCandidateCandidate), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "sdpMid", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCIceCandidateSdpMid), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "sdpMLineIndex", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCIceCandidateSdpMLineIndex), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSRTCIceCandidatePrototype::s_info = { "RTCIceCandidatePrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSRTCIceCandidatePrototype) };

void JSRTCIceCandidatePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSRTCIceCandidatePrototypeTableValues, *this);
}

const ClassInfo JSRTCIceCandidate::s_info = { "RTCIceCandidate", &Base::s_info, 0, CREATE_METHOD_TABLE(JSRTCIceCandidate) };

JSRTCIceCandidate::JSRTCIceCandidate(Structure* structure, JSDOMGlobalObject* globalObject, Ref<RTCIceCandidate>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSRTCIceCandidate::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSRTCIceCandidatePrototype::create(vm, globalObject, JSRTCIceCandidatePrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSRTCIceCandidate::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSRTCIceCandidate>(vm, globalObject);
}

void JSRTCIceCandidate::destroy(JSC::JSCell* cell)
{
    JSRTCIceCandidate* thisObject = static_cast<JSRTCIceCandidate*>(cell);
    thisObject->JSRTCIceCandidate::~JSRTCIceCandidate();
}

JSRTCIceCandidate::~JSRTCIceCandidate()
{
    releaseImpl();
}

EncodedJSValue jsRTCIceCandidateCandidate(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSRTCIceCandidate* castedThis = jsDynamicCast<JSRTCIceCandidate*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSRTCIceCandidatePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "RTCIceCandidate", "candidate");
        return throwGetterTypeError(*exec, "RTCIceCandidate", "candidate");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.candidate());
    return JSValue::encode(result);
}


EncodedJSValue jsRTCIceCandidateSdpMid(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSRTCIceCandidate* castedThis = jsDynamicCast<JSRTCIceCandidate*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSRTCIceCandidatePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "RTCIceCandidate", "sdpMid");
        return throwGetterTypeError(*exec, "RTCIceCandidate", "sdpMid");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.sdpMid());
    return JSValue::encode(result);
}


EncodedJSValue jsRTCIceCandidateSdpMLineIndex(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSRTCIceCandidate* castedThis = jsDynamicCast<JSRTCIceCandidate*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSRTCIceCandidatePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "RTCIceCandidate", "sdpMLineIndex");
        return throwGetterTypeError(*exec, "RTCIceCandidate", "sdpMLineIndex");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.sdpMLineIndex());
    return JSValue::encode(result);
}


EncodedJSValue jsRTCIceCandidateConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSRTCIceCandidatePrototype* domObject = jsDynamicCast<JSRTCIceCandidatePrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSRTCIceCandidate::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSRTCIceCandidate::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSRTCIceCandidateConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSRTCIceCandidateOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSRTCIceCandidateOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsRTCIceCandidate = jsCast<JSRTCIceCandidate*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsRTCIceCandidate->impl(), jsRTCIceCandidate);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7RTCIceCandidate@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore15RTCIceCandidateE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, RTCIceCandidate* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSRTCIceCandidate>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7RTCIceCandidate@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore15RTCIceCandidateE[2];
#if COMPILER(CLANG)
    // If this fails RTCIceCandidate does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(RTCIceCandidate), RTCIceCandidate_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // RTCIceCandidate has subclasses. If RTCIceCandidate has subclasses that get passed
    // to toJS() we currently require RTCIceCandidate you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSRTCIceCandidate>(globalObject, impl);
}

RTCIceCandidate* JSRTCIceCandidate::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSRTCIceCandidate*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(MEDIA_STREAM)