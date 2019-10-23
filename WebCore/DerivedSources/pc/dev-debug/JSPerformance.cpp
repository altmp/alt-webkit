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

#if ENABLE(WEB_TIMING)

#include "JSPerformance.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSPerformanceNavigation.h"
#include "JSPerformanceTiming.h"
#include "Performance.h"
#include "PerformanceNavigation.h"
#include "PerformanceTiming.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsPerformancePrototypeFunctionNow(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsPerformanceNavigation(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsPerformanceTiming(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsPerformanceConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSPerformancePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSPerformancePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSPerformancePrototype* ptr = new (NotNull, JSC::allocateCell<JSPerformancePrototype>(vm.heap)) JSPerformancePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSPerformancePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSPerformanceConstructor : public DOMConstructorObject {
private:
    JSPerformanceConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSPerformanceConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSPerformanceConstructor* ptr = new (NotNull, JSC::allocateCell<JSPerformanceConstructor>(vm.heap)) JSPerformanceConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSPerformanceConstructor::s_info = { "PerformanceConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSPerformanceConstructor) };

JSPerformanceConstructor::JSPerformanceConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSPerformanceConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSPerformance::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("Performance"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSPerformancePrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPerformanceConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "navigation", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPerformanceNavigation), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "timing", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsPerformanceTiming), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "now", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsPerformancePrototypeFunctionNow), (intptr_t) (0) },
};

const ClassInfo JSPerformancePrototype::s_info = { "PerformancePrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSPerformancePrototype) };

void JSPerformancePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSPerformancePrototypeTableValues, *this);
}

const ClassInfo JSPerformance::s_info = { "Performance", &Base::s_info, 0, CREATE_METHOD_TABLE(JSPerformance) };

JSPerformance::JSPerformance(Structure* structure, JSDOMGlobalObject* globalObject, Ref<Performance>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSPerformance::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSPerformancePrototype::create(vm, globalObject, JSPerformancePrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSPerformance::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSPerformance>(vm, globalObject);
}

void JSPerformance::destroy(JSC::JSCell* cell)
{
    JSPerformance* thisObject = static_cast<JSPerformance*>(cell);
    thisObject->JSPerformance::~JSPerformance();
}

JSPerformance::~JSPerformance()
{
    releaseImpl();
}

EncodedJSValue jsPerformanceNavigation(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSPerformance* castedThis = jsDynamicCast<JSPerformance*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSPerformancePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Performance", "navigation");
        return throwGetterTypeError(*exec, "Performance", "navigation");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.navigation()));
    return JSValue::encode(result);
}


EncodedJSValue jsPerformanceTiming(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSPerformance* castedThis = jsDynamicCast<JSPerformance*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSPerformancePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Performance", "timing");
        return throwGetterTypeError(*exec, "Performance", "timing");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.timing()));
    return JSValue::encode(result);
}


EncodedJSValue jsPerformanceConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSPerformancePrototype* domObject = jsDynamicCast<JSPerformancePrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSPerformance::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSPerformance::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSPerformanceConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsPerformancePrototypeFunctionNow(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSPerformance* castedThis = jsDynamicCast<JSPerformance*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "Performance", "now");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSPerformance::info());
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.now());
    return JSValue::encode(result);
}

void JSPerformance::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    auto* thisObject = jsCast<JSPerformance*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl().visitJSEventListeners(visitor);
}

bool JSPerformanceOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsPerformance = jsCast<JSPerformance*>(handle.slot()->asCell());
    if (jsPerformance->impl().isFiringEventListeners())
        return true;
    UNUSED_PARAM(visitor);
    return false;
}

void JSPerformanceOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsPerformance = jsCast<JSPerformance*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsPerformance->impl(), jsPerformance);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7Performance@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore11PerformanceE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, Performance* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSPerformance>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7Performance@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore11PerformanceE[2];
#if COMPILER(CLANG)
    // If this fails Performance does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(Performance), Performance_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // Performance has subclasses. If Performance has subclasses that get passed
    // to toJS() we currently require Performance you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSPerformance>(globalObject, impl);
}

Performance* JSPerformance::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSPerformance*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(WEB_TIMING)
