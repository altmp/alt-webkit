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
#include "JSNodeList.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "Node.h"
#include "NodeList.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsNodeListPrototypeFunctionItem(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsNodeListLength(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsNodeListConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSNodeListPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSNodeListPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSNodeListPrototype* ptr = new (NotNull, JSC::allocateCell<JSNodeListPrototype>(vm.heap)) JSNodeListPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSNodeListPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSNodeListConstructor : public DOMConstructorObject {
private:
    JSNodeListConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSNodeListConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSNodeListConstructor* ptr = new (NotNull, JSC::allocateCell<JSNodeListConstructor>(vm.heap)) JSNodeListConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

/* Hash table */

static const struct CompactHashIndex JSNodeListTableIndex[5] = {
    { -1, -1 },
    { 0, 4 },
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
};


static const HashTableValue JSNodeListTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeListConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "length", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeListLength), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

static const HashTable JSNodeListTable = { 2, 3, true, JSNodeListTableValues, 0, JSNodeListTableIndex };
const ClassInfo JSNodeListConstructor::s_info = { "NodeListConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSNodeListConstructor) };

JSNodeListConstructor::JSNodeListConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSNodeListConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSNodeList::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("NodeList"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSNodeListPrototypeTableValues[] =
{
    { "item", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsNodeListPrototypeFunctionItem), (intptr_t) (1) },
};

const ClassInfo JSNodeListPrototype::s_info = { "NodeListPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSNodeListPrototype) };

void JSNodeListPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSNodeListPrototypeTableValues, *this);
}

const ClassInfo JSNodeList::s_info = { "NodeList", &Base::s_info, &JSNodeListTable, CREATE_METHOD_TABLE(JSNodeList) };

JSNodeList::JSNodeList(Structure* structure, JSDOMGlobalObject* globalObject, Ref<NodeList>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSNodeList::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSNodeListPrototype::create(vm, globalObject, JSNodeListPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSNodeList::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSNodeList>(vm, globalObject);
}

void JSNodeList::destroy(JSC::JSCell* cell)
{
    JSNodeList* thisObject = static_cast<JSNodeList*>(cell);
    thisObject->JSNodeList::~JSNodeList();
}

JSNodeList::~JSNodeList()
{
    releaseImpl();
}

bool JSNodeList::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSNodeList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    const HashTableValue* entry = getStaticValueSlotEntryWithoutCaching<JSNodeList>(exec, propertyName);
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
    if (thisObject->getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return getStaticValueSlot<JSNodeList, Base>(exec, JSNodeListTable, thisObject, propertyName, slot);
}

bool JSNodeList::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSNodeList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setValue(thisObject, attributes, toJS(exec, thisObject->globalObject(), thisObject->impl().item(index)));
        return true;
    }
    Identifier propertyName = Identifier::from(exec, index);
    if (thisObject->getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

EncodedJSValue jsNodeListLength(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSNodeList*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.length());
    return JSValue::encode(result);
}


EncodedJSValue jsNodeListConstructor(ExecState* exec, JSObject*, EncodedJSValue thisValue, PropertyName)
{
    JSNodeList* domObject = jsDynamicCast<JSNodeList*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSNodeList::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSNodeList::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    auto* thisObject = jsCast<JSNodeList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    for (unsigned i = 0, count = thisObject->impl().length(); i < count; ++i)
        propertyNames.add(Identifier::from(exec, i));
    Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSNodeList::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSNodeListConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsNodeListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSNodeList* castedThis = jsDynamicCast<JSNodeList*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "NodeList", "item");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSNodeList::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    unsigned index = toUInt32(exec, exec->argument(0), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.item(index)));
    return JSValue::encode(result);
}

void JSNodeList::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    auto* thisObject = jsCast<JSNodeList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Base::visitChildren(thisObject, visitor);
    visitor.reportExtraMemoryVisited(cell, thisObject->impl().memoryCost());
}

void JSNodeListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsNodeList = jsCast<JSNodeList*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsNodeList->impl(), jsNodeList);
}

NodeList* JSNodeList::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSNodeList*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
