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

#include "JSNavigatorUserMediaError.h"

#include "JSDOMBinding.h"
#include "NavigatorUserMediaError.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsNavigatorUserMediaErrorConstraintName(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSNavigatorUserMediaErrorPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSNavigatorUserMediaErrorPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSNavigatorUserMediaErrorPrototype* ptr = new (NotNull, JSC::allocateCell<JSNavigatorUserMediaErrorPrototype>(vm.heap)) JSNavigatorUserMediaErrorPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSNavigatorUserMediaErrorPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table */

static const struct CompactHashIndex JSNavigatorUserMediaErrorTableIndex[2] = {
    { 0, -1 },
    { -1, -1 },
};


static const HashTableValue JSNavigatorUserMediaErrorTableValues[] =
{
    { "constraintName", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorUserMediaErrorConstraintName), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

static const HashTable JSNavigatorUserMediaErrorTable = { 1, 1, true, JSNavigatorUserMediaErrorTableValues, 0, JSNavigatorUserMediaErrorTableIndex };
/* Hash table for prototype */

static const HashTableValue JSNavigatorUserMediaErrorPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

const ClassInfo JSNavigatorUserMediaErrorPrototype::s_info = { "NavigatorUserMediaErrorPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSNavigatorUserMediaErrorPrototype) };

void JSNavigatorUserMediaErrorPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSNavigatorUserMediaErrorPrototypeTableValues, *this);
}

const ClassInfo JSNavigatorUserMediaError::s_info = { "NavigatorUserMediaError", &Base::s_info, &JSNavigatorUserMediaErrorTable, CREATE_METHOD_TABLE(JSNavigatorUserMediaError) };

JSNavigatorUserMediaError::JSNavigatorUserMediaError(Structure* structure, JSDOMGlobalObject* globalObject, Ref<NavigatorUserMediaError>&& impl)
    : JSDOMError(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSNavigatorUserMediaError::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSNavigatorUserMediaErrorPrototype::create(vm, globalObject, JSNavigatorUserMediaErrorPrototype::createStructure(vm, globalObject, JSDOMError::getPrototype(vm, globalObject)));
}

JSObject* JSNavigatorUserMediaError::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSNavigatorUserMediaError>(vm, globalObject);
}

bool JSNavigatorUserMediaError::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSNavigatorUserMediaError*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSNavigatorUserMediaError, Base>(exec, JSNavigatorUserMediaErrorTable, thisObject, propertyName, slot);
}

EncodedJSValue jsNavigatorUserMediaErrorConstraintName(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSNavigatorUserMediaError*>(slotBase);
    JSNavigatorUserMediaError* castedThisObject = jsDynamicCast<JSNavigatorUserMediaError*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThisObject))
        reportDeprecatedGetterError(*exec, "NavigatorUserMediaError", "constraintName");
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.constraintName());
    return JSValue::encode(result);
}


#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7NavigatorUserMediaError@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore23NavigatorUserMediaErrorE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, NavigatorUserMediaError* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSNavigatorUserMediaError>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7NavigatorUserMediaError@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore23NavigatorUserMediaErrorE[2];
#if COMPILER(CLANG)
    // If this fails NavigatorUserMediaError does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(NavigatorUserMediaError), NavigatorUserMediaError_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // NavigatorUserMediaError has subclasses. If NavigatorUserMediaError has subclasses that get passed
    // to toJS() we currently require NavigatorUserMediaError you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSNavigatorUserMediaError>(globalObject, impl);
}


}

#endif // ENABLE(MEDIA_STREAM)
