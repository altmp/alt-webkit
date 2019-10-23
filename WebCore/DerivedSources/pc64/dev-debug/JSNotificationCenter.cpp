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

#if ENABLE(LEGACY_NOTIFICATIONS)

#include "JSNotificationCenter.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSNotification.h"
#include "JSVoidCallback.h"
#include "Notification.h"
#include "NotificationCenter.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsNotificationCenterPrototypeFunctionCreateNotification(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsNotificationCenterPrototypeFunctionCheckPermission(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsNotificationCenterPrototypeFunctionRequestPermission(JSC::ExecState*);

class JSNotificationCenterPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSNotificationCenterPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSNotificationCenterPrototype* ptr = new (NotNull, JSC::allocateCell<JSNotificationCenterPrototype>(vm.heap)) JSNotificationCenterPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSNotificationCenterPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSNotificationCenterPrototypeTableValues[] =
{
    { "createNotification", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsNotificationCenterPrototypeFunctionCreateNotification), (intptr_t) (3) },
    { "checkPermission", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsNotificationCenterPrototypeFunctionCheckPermission), (intptr_t) (0) },
    { "requestPermission", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsNotificationCenterPrototypeFunctionRequestPermission), (intptr_t) (0) },
};

const ClassInfo JSNotificationCenterPrototype::s_info = { "NotificationCenterPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSNotificationCenterPrototype) };

void JSNotificationCenterPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSNotificationCenterPrototypeTableValues, *this);
}

const ClassInfo JSNotificationCenter::s_info = { "NotificationCenter", &Base::s_info, 0, CREATE_METHOD_TABLE(JSNotificationCenter) };

JSNotificationCenter::JSNotificationCenter(Structure* structure, JSDOMGlobalObject* globalObject, Ref<NotificationCenter>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSNotificationCenter::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSNotificationCenterPrototype::create(vm, globalObject, JSNotificationCenterPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSNotificationCenter::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSNotificationCenter>(vm, globalObject);
}

void JSNotificationCenter::destroy(JSC::JSCell* cell)
{
    JSNotificationCenter* thisObject = static_cast<JSNotificationCenter*>(cell);
    thisObject->JSNotificationCenter::~JSNotificationCenter();
}

JSNotificationCenter::~JSNotificationCenter()
{
    releaseImpl();
}

EncodedJSValue JSC_HOST_CALL jsNotificationCenterPrototypeFunctionCreateNotification(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSNotificationCenter* castedThis = jsDynamicCast<JSNotificationCenter*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "NotificationCenter", "createNotification");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSNotificationCenter::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 3))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    String iconUrl = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    String title = exec->argument(1).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    String body = exec->argument(2).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.createNotification(iconUrl, title, body, ec)));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNotificationCenterPrototypeFunctionCheckPermission(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSNotificationCenter* castedThis = jsDynamicCast<JSNotificationCenter*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "NotificationCenter", "checkPermission");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSNotificationCenter::info());
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.checkPermission());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNotificationCenterPrototypeFunctionRequestPermission(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSNotificationCenter* castedThis = jsDynamicCast<JSNotificationCenter*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "NotificationCenter", "requestPermission");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSNotificationCenter::info());
    auto& impl = castedThis->impl();
    RefPtr<VoidCallback> callback;
    if (!exec->argument(0).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(0).isFunction())
            return throwArgumentMustBeFunctionError(*exec, 0, "callback", "NotificationCenter", "requestPermission");
        callback = JSVoidCallback::create(asObject(exec->uncheckedArgument(0)), castedThis->globalObject());
    }
    impl.requestPermission(callback);
    return JSValue::encode(jsUndefined());
}

bool JSNotificationCenterOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsNotificationCenter = jsCast<JSNotificationCenter*>(handle.slot()->asCell());
    if (jsNotificationCenter->impl().hasPendingActivity())
        return true;
    UNUSED_PARAM(visitor);
    return false;
}

void JSNotificationCenterOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsNotificationCenter = jsCast<JSNotificationCenter*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsNotificationCenter->impl(), jsNotificationCenter);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7NotificationCenter@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore18NotificationCenterE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, NotificationCenter* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSNotificationCenter>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7NotificationCenter@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore18NotificationCenterE[2];
#if COMPILER(CLANG)
    // If this fails NotificationCenter does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(NotificationCenter), NotificationCenter_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // NotificationCenter has subclasses. If NotificationCenter has subclasses that get passed
    // to toJS() we currently require NotificationCenter you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSNotificationCenter>(globalObject, impl);
}

NotificationCenter* JSNotificationCenter::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSNotificationCenter*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(LEGACY_NOTIFICATIONS)