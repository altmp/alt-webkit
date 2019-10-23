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
#include "JSSVGPathSegCurvetoQuadraticRel.h"

#include "JSDOMBinding.h"
#include "SVGPathSegCurvetoQuadraticRel.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGPathSegCurvetoQuadraticRelX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoQuadraticRelX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegCurvetoQuadraticRelY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoQuadraticRelY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegCurvetoQuadraticRelX1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoQuadraticRelX1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegCurvetoQuadraticRelY1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoQuadraticRelY1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegCurvetoQuadraticRelConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGPathSegCurvetoQuadraticRelPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGPathSegCurvetoQuadraticRelPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGPathSegCurvetoQuadraticRelPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoQuadraticRelPrototype>(vm.heap)) JSSVGPathSegCurvetoQuadraticRelPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGPathSegCurvetoQuadraticRelPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGPathSegCurvetoQuadraticRelConstructor : public DOMConstructorObject {
private:
    JSSVGPathSegCurvetoQuadraticRelConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGPathSegCurvetoQuadraticRelConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGPathSegCurvetoQuadraticRelConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoQuadraticRelConstructor>(vm.heap)) JSSVGPathSegCurvetoQuadraticRelConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGPathSegCurvetoQuadraticRelConstructor::s_info = { "SVGPathSegCurvetoQuadraticRelConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegCurvetoQuadraticRelConstructor) };

JSSVGPathSegCurvetoQuadraticRelConstructor::JSSVGPathSegCurvetoQuadraticRelConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPathSegCurvetoQuadraticRelConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGPathSegCurvetoQuadraticRel::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGPathSegCurvetoQuadraticRel"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegCurvetoQuadraticRelPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticRelConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticRelX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegCurvetoQuadraticRelX) },
    { "y", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticRelY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegCurvetoQuadraticRelY) },
    { "x1", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticRelX1), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegCurvetoQuadraticRelX1) },
    { "y1", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoQuadraticRelY1), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegCurvetoQuadraticRelY1) },
};

const ClassInfo JSSVGPathSegCurvetoQuadraticRelPrototype::s_info = { "SVGPathSegCurvetoQuadraticRelPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegCurvetoQuadraticRelPrototype) };

void JSSVGPathSegCurvetoQuadraticRelPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGPathSegCurvetoQuadraticRelPrototypeTableValues, *this);
}

const ClassInfo JSSVGPathSegCurvetoQuadraticRel::s_info = { "SVGPathSegCurvetoQuadraticRel", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegCurvetoQuadraticRel) };

JSSVGPathSegCurvetoQuadraticRel::JSSVGPathSegCurvetoQuadraticRel(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGPathSegCurvetoQuadraticRel>&& impl)
    : JSSVGPathSeg(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGPathSegCurvetoQuadraticRel::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGPathSegCurvetoQuadraticRelPrototype::create(vm, globalObject, JSSVGPathSegCurvetoQuadraticRelPrototype::createStructure(vm, globalObject, JSSVGPathSeg::getPrototype(vm, globalObject)));
}

JSObject* JSSVGPathSegCurvetoQuadraticRel::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegCurvetoQuadraticRel>(vm, globalObject);
}

EncodedJSValue jsSVGPathSegCurvetoQuadraticRelX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoQuadraticRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoQuadraticRelPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegCurvetoQuadraticRel", "x");
        return throwGetterTypeError(*exec, "SVGPathSegCurvetoQuadraticRel", "x");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.x());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegCurvetoQuadraticRelY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoQuadraticRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoQuadraticRelPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegCurvetoQuadraticRel", "y");
        return throwGetterTypeError(*exec, "SVGPathSegCurvetoQuadraticRel", "y");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.y());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegCurvetoQuadraticRelX1(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoQuadraticRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoQuadraticRelPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegCurvetoQuadraticRel", "x1");
        return throwGetterTypeError(*exec, "SVGPathSegCurvetoQuadraticRel", "x1");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.x1());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegCurvetoQuadraticRelY1(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoQuadraticRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoQuadraticRelPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegCurvetoQuadraticRel", "y1");
        return throwGetterTypeError(*exec, "SVGPathSegCurvetoQuadraticRel", "y1");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.y1());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegCurvetoQuadraticRelConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGPathSegCurvetoQuadraticRelPrototype* domObject = jsDynamicCast<JSSVGPathSegCurvetoQuadraticRelPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGPathSegCurvetoQuadraticRel::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSSVGPathSegCurvetoQuadraticRelX(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoQuadraticRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoQuadraticRelPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegCurvetoQuadraticRel", "x");
        else
            throwSetterTypeError(*exec, "SVGPathSegCurvetoQuadraticRel", "x");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setX(nativeValue);
}


void setJSSVGPathSegCurvetoQuadraticRelY(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoQuadraticRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoQuadraticRelPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegCurvetoQuadraticRel", "y");
        else
            throwSetterTypeError(*exec, "SVGPathSegCurvetoQuadraticRel", "y");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setY(nativeValue);
}


void setJSSVGPathSegCurvetoQuadraticRelX1(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoQuadraticRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoQuadraticRelPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegCurvetoQuadraticRel", "x1");
        else
            throwSetterTypeError(*exec, "SVGPathSegCurvetoQuadraticRel", "x1");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setX1(nativeValue);
}


void setJSSVGPathSegCurvetoQuadraticRelY1(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegCurvetoQuadraticRel* castedThis = jsDynamicCast<JSSVGPathSegCurvetoQuadraticRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegCurvetoQuadraticRelPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegCurvetoQuadraticRel", "y1");
        else
            throwSetterTypeError(*exec, "SVGPathSegCurvetoQuadraticRel", "y1");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setY1(nativeValue);
}


JSValue JSSVGPathSegCurvetoQuadraticRel::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegCurvetoQuadraticRelConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
