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
#include "JSSVGFEMorphologyElement.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEMorphologyElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsSVGFEMorphologyElementPrototypeFunctionSetRadius(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsSVGFEMorphologyElementIn1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEMorphologyElementOperator(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEMorphologyElementRadiusX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEMorphologyElementRadiusY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEMorphologyElementX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEMorphologyElementY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEMorphologyElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEMorphologyElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEMorphologyElementResult(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFEMorphologyElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGFEMorphologyElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGFEMorphologyElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGFEMorphologyElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGFEMorphologyElementPrototype>(vm.heap)) JSSVGFEMorphologyElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGFEMorphologyElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGFEMorphologyElementConstructor : public DOMConstructorObject {
private:
    JSSVGFEMorphologyElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGFEMorphologyElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGFEMorphologyElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGFEMorphologyElementConstructor>(vm.heap)) JSSVGFEMorphologyElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

/* Hash table for constructor */

static const HashTableValue JSSVGFEMorphologyElementConstructorTableValues[] =
{
    { "SVG_MORPHOLOGY_OPERATOR_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "SVG_MORPHOLOGY_OPERATOR_ERODE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "SVG_MORPHOLOGY_OPERATOR_DILATE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
};

const ClassInfo JSSVGFEMorphologyElementConstructor::s_info = { "SVGFEMorphologyElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFEMorphologyElementConstructor) };

JSSVGFEMorphologyElementConstructor::JSSVGFEMorphologyElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEMorphologyElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGFEMorphologyElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGFEMorphologyElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
    reifyStaticProperties(vm, JSSVGFEMorphologyElementConstructorTableValues, *this);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEMorphologyElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "in1", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementIn1), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "operator", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementOperator), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "radiusX", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementRadiusX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "radiusY", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementRadiusY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "y", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "width", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "height", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "result", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementResult), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "SVG_MORPHOLOGY_OPERATOR_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "SVG_MORPHOLOGY_OPERATOR_ERODE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "SVG_MORPHOLOGY_OPERATOR_DILATE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "setRadius", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGFEMorphologyElementPrototypeFunctionSetRadius), (intptr_t) (0) },
};

const ClassInfo JSSVGFEMorphologyElementPrototype::s_info = { "SVGFEMorphologyElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFEMorphologyElementPrototype) };

void JSSVGFEMorphologyElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGFEMorphologyElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGFEMorphologyElement::s_info = { "SVGFEMorphologyElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFEMorphologyElement) };

JSSVGFEMorphologyElement::JSSVGFEMorphologyElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGFEMorphologyElement>&& impl)
    : JSSVGElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGFEMorphologyElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGFEMorphologyElementPrototype::create(vm, globalObject, JSSVGFEMorphologyElementPrototype::createStructure(vm, globalObject, JSSVGElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGFEMorphologyElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEMorphologyElement>(vm, globalObject);
}

EncodedJSValue jsSVGFEMorphologyElementIn1(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEMorphologyElement* castedThis = jsDynamicCast<JSSVGFEMorphologyElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEMorphologyElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEMorphologyElement", "in1");
        return throwGetterTypeError(*exec, "SVGFEMorphologyElement", "in1");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.in1Animated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEMorphologyElementOperator(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEMorphologyElement* castedThis = jsDynamicCast<JSSVGFEMorphologyElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEMorphologyElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEMorphologyElement", "operator");
        return throwGetterTypeError(*exec, "SVGFEMorphologyElement", "operator");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedEnumeration> obj = impl.svgOperatorAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEMorphologyElementRadiusX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEMorphologyElement* castedThis = jsDynamicCast<JSSVGFEMorphologyElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEMorphologyElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEMorphologyElement", "radiusX");
        return throwGetterTypeError(*exec, "SVGFEMorphologyElement", "radiusX");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.radiusXAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEMorphologyElementRadiusY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEMorphologyElement* castedThis = jsDynamicCast<JSSVGFEMorphologyElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEMorphologyElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEMorphologyElement", "radiusY");
        return throwGetterTypeError(*exec, "SVGFEMorphologyElement", "radiusY");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.radiusYAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEMorphologyElementX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEMorphologyElement* castedThis = jsDynamicCast<JSSVGFEMorphologyElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEMorphologyElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEMorphologyElement", "x");
        return throwGetterTypeError(*exec, "SVGFEMorphologyElement", "x");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.xAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEMorphologyElementY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEMorphologyElement* castedThis = jsDynamicCast<JSSVGFEMorphologyElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEMorphologyElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEMorphologyElement", "y");
        return throwGetterTypeError(*exec, "SVGFEMorphologyElement", "y");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.yAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEMorphologyElementWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEMorphologyElement* castedThis = jsDynamicCast<JSSVGFEMorphologyElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEMorphologyElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEMorphologyElement", "width");
        return throwGetterTypeError(*exec, "SVGFEMorphologyElement", "width");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.widthAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEMorphologyElementHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEMorphologyElement* castedThis = jsDynamicCast<JSSVGFEMorphologyElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEMorphologyElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEMorphologyElement", "height");
        return throwGetterTypeError(*exec, "SVGFEMorphologyElement", "height");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.heightAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEMorphologyElementResult(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFEMorphologyElement* castedThis = jsDynamicCast<JSSVGFEMorphologyElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFEMorphologyElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFEMorphologyElement", "result");
        return throwGetterTypeError(*exec, "SVGFEMorphologyElement", "result");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.resultAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEMorphologyElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGFEMorphologyElementPrototype* domObject = jsDynamicCast<JSSVGFEMorphologyElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGFEMorphologyElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGFEMorphologyElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEMorphologyElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGFEMorphologyElementPrototypeFunctionSetRadius(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSSVGFEMorphologyElement* castedThis = jsDynamicCast<JSSVGFEMorphologyElement*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "SVGFEMorphologyElement", "setRadius");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGFEMorphologyElement::info());
    auto& impl = castedThis->impl();
    float radiusX = exec->argument(0).toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    float radiusY = exec->argument(1).toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.setRadius(radiusX, radiusY);
    return JSValue::encode(jsUndefined());
}


}