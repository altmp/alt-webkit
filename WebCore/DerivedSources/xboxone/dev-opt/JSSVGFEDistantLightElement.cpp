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
#include "JSSVGFEDistantLightElement.h"

#include "JSDOMBinding.h"
#include "JSSVGAnimatedNumber.h"
#include "SVGFEDistantLightElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGFEDistantLightElementAzimuth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEDistantLightElementElevation(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEDistantLightElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGFEDistantLightElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGFEDistantLightElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGFEDistantLightElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGFEDistantLightElementPrototype>(vm.heap)) JSSVGFEDistantLightElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGFEDistantLightElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGFEDistantLightElementConstructor : public DOMConstructorObject {
private:
    JSSVGFEDistantLightElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGFEDistantLightElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGFEDistantLightElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGFEDistantLightElementConstructor>(vm.heap)) JSSVGFEDistantLightElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGFEDistantLightElementConstructor::s_info = { "SVGFEDistantLightElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFEDistantLightElementConstructor) };

JSSVGFEDistantLightElementConstructor::JSSVGFEDistantLightElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEDistantLightElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGFEDistantLightElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGFEDistantLightElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEDistantLightElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDistantLightElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "azimuth", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDistantLightElementAzimuth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "elevation", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDistantLightElementElevation), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSSVGFEDistantLightElementPrototype::s_info = { "SVGFEDistantLightElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFEDistantLightElementPrototype) };

void JSSVGFEDistantLightElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGFEDistantLightElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGFEDistantLightElement::s_info = { "SVGFEDistantLightElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFEDistantLightElement) };

JSSVGFEDistantLightElement::JSSVGFEDistantLightElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGFEDistantLightElement>&& impl)
    : JSSVGElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGFEDistantLightElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGFEDistantLightElementPrototype::create(vm, globalObject, JSSVGFEDistantLightElementPrototype::createStructure(vm, globalObject, JSSVGElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGFEDistantLightElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEDistantLightElement>(vm, globalObject);
}

EncodedJSValue jsSVGFEDistantLightElementAzimuth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEDistantLightElement* castedThis = jsDynamicCast<JSSVGFEDistantLightElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEDistantLightElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEDistantLightElement", "azimuth");
        return throwGetterTypeError(*exec, "SVGFEDistantLightElement", "azimuth");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.azimuthAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEDistantLightElementElevation(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEDistantLightElement* castedThis = jsDynamicCast<JSSVGFEDistantLightElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEDistantLightElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEDistantLightElement", "elevation");
        return throwGetterTypeError(*exec, "SVGFEDistantLightElement", "elevation");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.elevationAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEDistantLightElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGFEDistantLightElementPrototype* domObject = jsDynamicCast<JSSVGFEDistantLightElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGFEDistantLightElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGFEDistantLightElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEDistantLightElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
