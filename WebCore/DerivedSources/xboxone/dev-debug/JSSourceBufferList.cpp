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

#if ENABLE(MEDIA_SOURCE)

#include "JSSourceBufferList.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSourceBuffer.h"
#include "SourceBuffer.h"
#include "SourceBufferList.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsSourceBufferListPrototypeFunctionItem(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsSourceBufferListLength(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSourceBufferListPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSourceBufferListPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSourceBufferListPrototype* ptr = new (NotNull, JSC::allocateCell<JSSourceBufferListPrototype>(vm.heap)) JSSourceBufferListPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSourceBufferListPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table */

static const struct CompactHashIndex JSSourceBufferListTableIndex[4] = {
    { -1, -1 },
    { 0, -1 },
    { -1, -1 },
    { -1, -1 },
};


static const HashTableValue JSSourceBufferListTableValues[] =
{
    { "length", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSourceBufferListLength), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

static const HashTable JSSourceBufferListTable = { 1, 3, true, JSSourceBufferListTableValues, 0, JSSourceBufferListTableIndex };
/* Hash table for prototype */

static const HashTableValue JSSourceBufferListPrototypeTableValues[] =
{
    { "item", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSourceBufferListPrototypeFunctionItem), (intptr_t) (1) },
};

const ClassInfo JSSourceBufferListPrototype::s_info = { "SourceBufferListPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSourceBufferListPrototype) };

void JSSourceBufferListPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSourceBufferListPrototypeTableValues, *this);
}

const ClassInfo JSSourceBufferList::s_info = { "SourceBufferList", &Base::s_info, &JSSourceBufferListTable, CREATE_METHOD_TABLE(JSSourceBufferList) };

JSSourceBufferList::JSSourceBufferList(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SourceBufferList>&& impl)
    : JSEventTarget(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSourceBufferList::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSourceBufferListPrototype::create(vm, globalObject, JSSourceBufferListPrototype::createStructure(vm, globalObject, JSEventTarget::getPrototype(vm, globalObject)));
}

JSObject* JSSourceBufferList::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSourceBufferList>(vm, globalObject);
}

bool JSSourceBufferList::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSSourceBufferList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    const HashTableValue* entry = getStaticValueSlotEntryWithoutCaching<JSSourceBufferList>(exec, propertyName);
    if (entry) {
        slot.setCacheableCustom(thisObject, entry->attributes(), entry->propertyGetter());
        return true;
    }
    Optional<uint32_t> optionalIndex = parseIndex(propertyName);
    if (optionalIndex && optionalIndex.value() < thisObject->impl().length()) {
        unsigned index = optionalIndex.value();
        unsigned attributes = DontDelete | ReadOnly;
        slot.setValue(thisObject, attributes, toJS(exec, thisObject->globalObject(), thisObject->impl().item(index)));
        return true;
    }
    return getStaticValueSlot<JSSourceBufferList, Base>(exec, JSSourceBufferListTable, thisObject, propertyName, slot);
}

bool JSSourceBufferList::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSSourceBufferList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setValue(thisObject, attributes, toJS(exec, thisObject->globalObject(), thisObject->impl().item(index)));
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

EncodedJSValue jsSourceBufferListLength(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSSourceBufferList*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.length());
    return JSValue::encode(result);
}


void JSSourceBufferList::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    auto* thisObject = jsCast<JSSourceBufferList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    for (unsigned i = 0, count = thisObject->impl().length(); i < count; ++i)
        propertyNames.add(Identifier::from(exec, i));
    Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

EncodedJSValue JSC_HOST_CALL jsSourceBufferListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSSourceBufferList* castedThis = jsDynamicCast<JSSourceBufferList*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "SourceBufferList", "item");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSourceBufferList::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    unsigned index = toUInt32(exec, exec->argument(0), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.item(index)));
    return JSValue::encode(result);
}

void JSSourceBufferList::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    auto* thisObject = jsCast<JSSourceBufferList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl().visitJSEventListeners(visitor);
}

bool JSSourceBufferListOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsSourceBufferList = jsCast<JSSourceBufferList*>(handle.slot()->asCell());
    if (jsSourceBufferList->impl().isFiringEventListeners())
        return true;
    SourceBufferList* root = &jsSourceBufferList->impl();
    return visitor.containsOpaqueRoot(root);
}

void JSSourceBufferListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsSourceBufferList = jsCast<JSSourceBufferList*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsSourceBufferList->impl(), jsSourceBufferList);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7SourceBufferList@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore16SourceBufferListE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, SourceBufferList* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSourceBufferList>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7SourceBufferList@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore16SourceBufferListE[2];
#if COMPILER(CLANG)
    // If this fails SourceBufferList does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(SourceBufferList), SourceBufferList_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // SourceBufferList has subclasses. If SourceBufferList has subclasses that get passed
    // to toJS() we currently require SourceBufferList you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSSourceBufferList>(globalObject, impl);
}

SourceBufferList* JSSourceBufferList::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSSourceBufferList*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(MEDIA_SOURCE)
