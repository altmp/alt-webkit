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

#if ENABLE(XSLT)

#include "JSXSLTProcessor.h"

#include "Document.h"
#include "DocumentFragment.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDocument.h"
#include "JSDocumentFragment.h"
#include "JSNode.h"
#include "XSLTProcessor.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionImportStylesheet(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionTransformToFragment(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionTransformToDocument(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionSetParameter(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionGetParameter(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionRemoveParameter(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionClearParameters(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionReset(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsXSLTProcessorConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSXSLTProcessorPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSXSLTProcessorPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSXSLTProcessorPrototype* ptr = new (NotNull, JSC::allocateCell<JSXSLTProcessorPrototype>(vm.heap)) JSXSLTProcessorPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSXSLTProcessorPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSXSLTProcessorConstructor : public DOMConstructorObject {
private:
    JSXSLTProcessorConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSXSLTProcessorConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSXSLTProcessorConstructor* ptr = new (NotNull, JSC::allocateCell<JSXSLTProcessorConstructor>(vm.heap)) JSXSLTProcessorConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSXSLTProcessor(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

EncodedJSValue JSC_HOST_CALL JSXSLTProcessorConstructor::constructJSXSLTProcessor(ExecState* exec)
{
    auto* castedThis = jsCast<JSXSLTProcessorConstructor*>(exec->callee());
    RefPtr<XSLTProcessor> object = XSLTProcessor::create();
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

const ClassInfo JSXSLTProcessorConstructor::s_info = { "XSLTProcessorConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSXSLTProcessorConstructor) };

JSXSLTProcessorConstructor::JSXSLTProcessorConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSXSLTProcessorConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSXSLTProcessor::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("XSLTProcessor"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

ConstructType JSXSLTProcessorConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSXSLTProcessor;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSXSLTProcessorPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXSLTProcessorConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "importStylesheet", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionImportStylesheet), (intptr_t) (0) },
    { "transformToFragment", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionTransformToFragment), (intptr_t) (0) },
    { "transformToDocument", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionTransformToDocument), (intptr_t) (0) },
    { "setParameter", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionSetParameter), (intptr_t) (3) },
    { "getParameter", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionGetParameter), (intptr_t) (2) },
    { "removeParameter", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionRemoveParameter), (intptr_t) (2) },
    { "clearParameters", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionClearParameters), (intptr_t) (0) },
    { "reset", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXSLTProcessorPrototypeFunctionReset), (intptr_t) (0) },
};

const ClassInfo JSXSLTProcessorPrototype::s_info = { "XSLTProcessorPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSXSLTProcessorPrototype) };

void JSXSLTProcessorPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSXSLTProcessorPrototypeTableValues, *this);
}

const ClassInfo JSXSLTProcessor::s_info = { "XSLTProcessor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSXSLTProcessor) };

JSXSLTProcessor::JSXSLTProcessor(Structure* structure, JSDOMGlobalObject* globalObject, Ref<XSLTProcessor>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSXSLTProcessor::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSXSLTProcessorPrototype::create(vm, globalObject, JSXSLTProcessorPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSXSLTProcessor::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXSLTProcessor>(vm, globalObject);
}

void JSXSLTProcessor::destroy(JSC::JSCell* cell)
{
    JSXSLTProcessor* thisObject = static_cast<JSXSLTProcessor*>(cell);
    thisObject->JSXSLTProcessor::~JSXSLTProcessor();
}

JSXSLTProcessor::~JSXSLTProcessor()
{
    releaseImpl();
}

EncodedJSValue jsXSLTProcessorConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSXSLTProcessorPrototype* domObject = jsDynamicCast<JSXSLTProcessorPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSXSLTProcessor::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSXSLTProcessor::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSXSLTProcessorConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionImportStylesheet(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSXSLTProcessor* castedThis = jsDynamicCast<JSXSLTProcessor*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "XSLTProcessor", "importStylesheet");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXSLTProcessor::info());
    auto& impl = castedThis->impl();
    Node* stylesheet = JSNode::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.importStylesheet(stylesheet);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionTransformToFragment(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSXSLTProcessor* castedThis = jsDynamicCast<JSXSLTProcessor*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "XSLTProcessor", "transformToFragment");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXSLTProcessor::info());
    auto& impl = castedThis->impl();
    Node* source = JSNode::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    Document* docVal = JSDocument::toWrapped(exec->argument(1));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.transformToFragment(source, docVal)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionTransformToDocument(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSXSLTProcessor* castedThis = jsDynamicCast<JSXSLTProcessor*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "XSLTProcessor", "transformToDocument");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXSLTProcessor::info());
    auto& impl = castedThis->impl();
    Node* source = JSNode::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.transformToDocument(source)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionSetParameter(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSXSLTProcessor* castedThis = jsDynamicCast<JSXSLTProcessor*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "XSLTProcessor", "setParameter");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXSLTProcessor::info());
    return JSValue::encode(castedThis->setParameter(exec));
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionGetParameter(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSXSLTProcessor* castedThis = jsDynamicCast<JSXSLTProcessor*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "XSLTProcessor", "getParameter");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXSLTProcessor::info());
    return JSValue::encode(castedThis->getParameter(exec));
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionRemoveParameter(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSXSLTProcessor* castedThis = jsDynamicCast<JSXSLTProcessor*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "XSLTProcessor", "removeParameter");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXSLTProcessor::info());
    return JSValue::encode(castedThis->removeParameter(exec));
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionClearParameters(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSXSLTProcessor* castedThis = jsDynamicCast<JSXSLTProcessor*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "XSLTProcessor", "clearParameters");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXSLTProcessor::info());
    auto& impl = castedThis->impl();
    impl.clearParameters();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsXSLTProcessorPrototypeFunctionReset(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSXSLTProcessor* castedThis = jsDynamicCast<JSXSLTProcessor*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "XSLTProcessor", "reset");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXSLTProcessor::info());
    auto& impl = castedThis->impl();
    impl.reset();
    return JSValue::encode(jsUndefined());
}

bool JSXSLTProcessorOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSXSLTProcessorOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsXSLTProcessor = jsCast<JSXSLTProcessor*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsXSLTProcessor->impl(), jsXSLTProcessor);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, XSLTProcessor* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSXSLTProcessor>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to XSLTProcessor.
    COMPILE_ASSERT(!__is_polymorphic(XSLTProcessor), XSLTProcessor_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSXSLTProcessor>(globalObject, impl);
}

XSLTProcessor* JSXSLTProcessor::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSXSLTProcessor*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(XSLT)
