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
#include "JSDocumentFragment.h"

#include "Document.h"
#include "DocumentFragment.h"
#include "Element.h"
#include "ExceptionCode.h"
#include "HTMLCollection.h"
#include "JSDOMBinding.h"
#include "JSElement.h"
#include "JSHTMLCollection.h"
#include "JSNodeList.h"
#include "NameNodeList.h"
#include "NodeList.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDocumentFragmentPrototypeFunctionGetElementById(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentFragmentPrototypeFunctionPrepend(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentFragmentPrototypeFunctionAppend(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentFragmentPrototypeFunctionQuerySelector(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentFragmentPrototypeFunctionQuerySelectorAll(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsDocumentFragmentChildren(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDocumentFragmentFirstElementChild(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDocumentFragmentLastElementChild(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDocumentFragmentChildElementCount(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDocumentFragmentConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSDocumentFragmentPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSDocumentFragmentPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDocumentFragmentPrototype* ptr = new (NotNull, JSC::allocateCell<JSDocumentFragmentPrototype>(vm.heap)) JSDocumentFragmentPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSDocumentFragmentPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSDocumentFragmentConstructor : public DOMConstructorObject {
private:
    JSDocumentFragmentConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSDocumentFragmentConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSDocumentFragmentConstructor* ptr = new (NotNull, JSC::allocateCell<JSDocumentFragmentConstructor>(vm.heap)) JSDocumentFragmentConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSDocumentFragment(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

EncodedJSValue JSC_HOST_CALL JSDocumentFragmentConstructor::constructJSDocumentFragment(ExecState* exec)
{
    auto* castedThis = jsCast<JSDocumentFragmentConstructor*>(exec->callee());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwConstructorDocumentUnavailableError(*exec, "DocumentFragment");
    auto& document = downcast<Document>(*context);
    RefPtr<DocumentFragment> object = DocumentFragment::create(document);
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

const ClassInfo JSDocumentFragmentConstructor::s_info = { "DocumentFragmentConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDocumentFragmentConstructor) };

JSDocumentFragmentConstructor::JSDocumentFragmentConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDocumentFragmentConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSDocumentFragment::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("DocumentFragment"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

ConstructType JSDocumentFragmentConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSDocumentFragment;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSDocumentFragmentPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDocumentFragmentConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "children", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDocumentFragmentChildren), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "firstElementChild", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDocumentFragmentFirstElementChild), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "lastElementChild", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDocumentFragmentLastElementChild), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "childElementCount", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDocumentFragmentChildElementCount), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "getElementById", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDocumentFragmentPrototypeFunctionGetElementById), (intptr_t) (0) },
    { "prepend", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDocumentFragmentPrototypeFunctionPrepend), (intptr_t) (1) },
    { "append", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDocumentFragmentPrototypeFunctionAppend), (intptr_t) (1) },
    { "querySelector", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDocumentFragmentPrototypeFunctionQuerySelector), (intptr_t) (1) },
    { "querySelectorAll", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDocumentFragmentPrototypeFunctionQuerySelectorAll), (intptr_t) (1) },
};

const ClassInfo JSDocumentFragmentPrototype::s_info = { "DocumentFragmentPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDocumentFragmentPrototype) };

void JSDocumentFragmentPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSDocumentFragmentPrototypeTableValues, *this);
}

const ClassInfo JSDocumentFragment::s_info = { "DocumentFragment", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDocumentFragment) };

JSDocumentFragment::JSDocumentFragment(Structure* structure, JSDOMGlobalObject* globalObject, Ref<DocumentFragment>&& impl)
    : JSNode(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSDocumentFragment::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSDocumentFragmentPrototype::create(vm, globalObject, JSDocumentFragmentPrototype::createStructure(vm, globalObject, JSNode::getPrototype(vm, globalObject)));
}

JSObject* JSDocumentFragment::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDocumentFragment>(vm, globalObject);
}

EncodedJSValue jsDocumentFragmentChildren(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDocumentFragment* castedThis = jsDynamicCast<JSDocumentFragment*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDocumentFragmentPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DocumentFragment", "children");
        return throwGetterTypeError(*exec, "DocumentFragment", "children");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.children()));
    return JSValue::encode(result);
}


EncodedJSValue jsDocumentFragmentFirstElementChild(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDocumentFragment* castedThis = jsDynamicCast<JSDocumentFragment*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDocumentFragmentPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DocumentFragment", "firstElementChild");
        return throwGetterTypeError(*exec, "DocumentFragment", "firstElementChild");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.firstElementChild()));
    return JSValue::encode(result);
}


EncodedJSValue jsDocumentFragmentLastElementChild(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDocumentFragment* castedThis = jsDynamicCast<JSDocumentFragment*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDocumentFragmentPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DocumentFragment", "lastElementChild");
        return throwGetterTypeError(*exec, "DocumentFragment", "lastElementChild");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.lastElementChild()));
    return JSValue::encode(result);
}


EncodedJSValue jsDocumentFragmentChildElementCount(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDocumentFragment* castedThis = jsDynamicCast<JSDocumentFragment*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDocumentFragmentPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DocumentFragment", "childElementCount");
        return throwGetterTypeError(*exec, "DocumentFragment", "childElementCount");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.childElementCount());
    return JSValue::encode(result);
}


EncodedJSValue jsDocumentFragmentConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSDocumentFragmentPrototype* domObject = jsDynamicCast<JSDocumentFragmentPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSDocumentFragment::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSDocumentFragment::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDocumentFragmentConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDocumentFragmentPrototypeFunctionGetElementById(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDocumentFragment* castedThis = jsDynamicCast<JSDocumentFragment*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DocumentFragment", "getElementById");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDocumentFragment::info());
    auto& impl = castedThis->impl();
    AtomicString elementId = exec->argument(0).toString(exec)->toExistingAtomicString(exec).get();
    if (elementId.isNull())
        return JSValue::encode(jsNull());
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.getElementById(elementId)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDocumentFragmentPrototypeFunctionPrepend(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDocumentFragment* castedThis = jsDynamicCast<JSDocumentFragment*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DocumentFragment", "prepend");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDocumentFragment::info());
    return JSValue::encode(castedThis->prepend(exec));
}

EncodedJSValue JSC_HOST_CALL jsDocumentFragmentPrototypeFunctionAppend(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDocumentFragment* castedThis = jsDynamicCast<JSDocumentFragment*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DocumentFragment", "append");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDocumentFragment::info());
    return JSValue::encode(castedThis->append(exec));
}

EncodedJSValue JSC_HOST_CALL jsDocumentFragmentPrototypeFunctionQuerySelector(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDocumentFragment* castedThis = jsDynamicCast<JSDocumentFragment*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DocumentFragment", "querySelector");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDocumentFragment::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    String selectors = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.querySelector(selectors, ec)));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDocumentFragmentPrototypeFunctionQuerySelectorAll(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDocumentFragment* castedThis = jsDynamicCast<JSDocumentFragment*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DocumentFragment", "querySelectorAll");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDocumentFragment::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    String selectors = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.querySelectorAll(selectors, ec)));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}


}
