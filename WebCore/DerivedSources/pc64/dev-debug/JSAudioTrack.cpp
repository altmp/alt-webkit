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

#if ENABLE(VIDEO_TRACK)

#include "JSAudioTrack.h"

#include "AudioTrack.h"
#include "AudioTrackMediaSource.h"
#include "Element.h"
#include "JSDOMBinding.h"
#include "JSNodeCustom.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

#if ENABLE(MEDIA_SOURCE) && ENABLE(VIDEO_TRACK)
#include "JSSourceBuffer.h"
#include "SourceBuffer.h"
#endif

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsAudioTrackId(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsAudioTrackKind(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSAudioTrackKind(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsAudioTrackLabel(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsAudioTrackLanguage(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSAudioTrackLanguage(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsAudioTrackEnabled(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSAudioTrackEnabled(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
#if ENABLE(MEDIA_SOURCE) && ENABLE(VIDEO_TRACK)
JSC::EncodedJSValue jsAudioTrackSourceBuffer(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
#endif

class JSAudioTrackPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSAudioTrackPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSAudioTrackPrototype* ptr = new (NotNull, JSC::allocateCell<JSAudioTrackPrototype>(vm.heap)) JSAudioTrackPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSAudioTrackPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table */

static const struct CompactHashIndex JSAudioTrackTableIndex[4] = {
    { 0, -1 },
    { 1, -1 },
    { -1, -1 },
    { -1, -1 },
};


static const HashTableValue JSAudioTrackTableValues[] =
{
    { "kind", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioTrackKind), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSAudioTrackKind) },
    { "language", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioTrackLanguage), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSAudioTrackLanguage) },
};

static const HashTable JSAudioTrackTable = { 2, 3, true, JSAudioTrackTableValues, 0, JSAudioTrackTableIndex };
/* Hash table for prototype */

static const HashTableValue JSAudioTrackPrototypeTableValues[] =
{
    { "id", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioTrackId), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "label", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioTrackLabel), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "enabled", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioTrackEnabled), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSAudioTrackEnabled) },
#if ENABLE(MEDIA_SOURCE) && ENABLE(VIDEO_TRACK)
    { "sourceBuffer", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioTrackSourceBuffer), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
#else
    { 0, 0, NoIntrinsic, 0, 0 },
#endif
};

const ClassInfo JSAudioTrackPrototype::s_info = { "AudioTrackPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSAudioTrackPrototype) };

void JSAudioTrackPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSAudioTrackPrototypeTableValues, *this);
}

const ClassInfo JSAudioTrack::s_info = { "AudioTrack", &Base::s_info, &JSAudioTrackTable, CREATE_METHOD_TABLE(JSAudioTrack) };

JSAudioTrack::JSAudioTrack(Structure* structure, JSDOMGlobalObject* globalObject, Ref<AudioTrack>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSAudioTrack::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSAudioTrackPrototype::create(vm, globalObject, JSAudioTrackPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSAudioTrack::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSAudioTrack>(vm, globalObject);
}

void JSAudioTrack::destroy(JSC::JSCell* cell)
{
    JSAudioTrack* thisObject = static_cast<JSAudioTrack*>(cell);
    thisObject->JSAudioTrack::~JSAudioTrack();
}

JSAudioTrack::~JSAudioTrack()
{
    releaseImpl();
}

bool JSAudioTrack::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSAudioTrack*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSAudioTrack, Base>(exec, JSAudioTrackTable, thisObject, propertyName, slot);
}

EncodedJSValue jsAudioTrackId(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSAudioTrack* castedThis = jsDynamicCast<JSAudioTrack*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSAudioTrackPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "AudioTrack", "id");
        return throwGetterTypeError(*exec, "AudioTrack", "id");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.id());
    return JSValue::encode(result);
}


EncodedJSValue jsAudioTrackKind(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSAudioTrack*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.kind());
    return JSValue::encode(result);
}


EncodedJSValue jsAudioTrackLabel(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSAudioTrack* castedThis = jsDynamicCast<JSAudioTrack*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSAudioTrackPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "AudioTrack", "label");
        return throwGetterTypeError(*exec, "AudioTrack", "label");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.label());
    return JSValue::encode(result);
}


EncodedJSValue jsAudioTrackLanguage(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSAudioTrack*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.language());
    return JSValue::encode(result);
}


EncodedJSValue jsAudioTrackEnabled(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSAudioTrack* castedThis = jsDynamicCast<JSAudioTrack*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSAudioTrackPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "AudioTrack", "enabled");
        return throwGetterTypeError(*exec, "AudioTrack", "enabled");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.enabled());
    return JSValue::encode(result);
}


#if ENABLE(MEDIA_SOURCE) && ENABLE(VIDEO_TRACK)
EncodedJSValue jsAudioTrackSourceBuffer(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSAudioTrack* castedThis = jsDynamicCast<JSAudioTrack*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSAudioTrackPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "AudioTrack", "sourceBuffer");
        return throwGetterTypeError(*exec, "AudioTrack", "sourceBuffer");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(AudioTrackMediaSource::sourceBuffer(&impl)));
    return JSValue::encode(result);
}

#endif

void setJSAudioTrackKind(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSAudioTrack*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    castedThis->setKind(exec, value);
}


void setJSAudioTrackLanguage(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSAudioTrack*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    castedThis->setLanguage(exec, value);
}


void setJSAudioTrackEnabled(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSAudioTrack* castedThis = jsDynamicCast<JSAudioTrack*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSAudioTrackPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "AudioTrack", "enabled");
        else
            throwSetterTypeError(*exec, "AudioTrack", "enabled");
        return;
    }
    auto& impl = castedThis->impl();
    bool nativeValue = value.toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setEnabled(nativeValue);
}


void JSAudioTrack::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    auto* thisObject = jsCast<JSAudioTrack*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Base::visitChildren(thisObject, visitor);
    thisObject->visitAdditionalChildren(visitor);
}

bool JSAudioTrackOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsAudioTrack = jsCast<JSAudioTrack*>(handle.slot()->asCell());
    Element* element = WTF::getPtr(jsAudioTrack->impl().element());
    if (!element)
        return false;
    void* root = WebCore::root(element);
    return visitor.containsOpaqueRoot(root);
}

void JSAudioTrackOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsAudioTrack = jsCast<JSAudioTrack*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsAudioTrack->impl(), jsAudioTrack);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7AudioTrack@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore10AudioTrackE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, AudioTrack* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSAudioTrack>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7AudioTrack@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore10AudioTrackE[2];
#if COMPILER(CLANG)
    // If this fails AudioTrack does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(AudioTrack), AudioTrack_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // AudioTrack has subclasses. If AudioTrack has subclasses that get passed
    // to toJS() we currently require AudioTrack you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSAudioTrack>(globalObject, impl);
}

AudioTrack* JSAudioTrack::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSAudioTrack*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(VIDEO_TRACK)
