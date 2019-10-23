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
#include "JSSVGPathSegLinetoRel.h"

#include "JSDOMBinding.h"
#include "SVGPathSegLinetoRel.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGPathSegLinetoRelX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegLinetoRelX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegLinetoRelY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGPathSegLinetoRelY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGPathSegLinetoRelConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGPathSegLinetoRelPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGPathSegLinetoRelPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGPathSegLinetoRelPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegLinetoRelPrototype>(vm.heap)) JSSVGPathSegLinetoRelPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGPathSegLinetoRelPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGPathSegLinetoRelConstructor : public DOMConstructorObject {
private:
    JSSVGPathSegLinetoRelConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGPathSegLinetoRelConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGPathSegLinetoRelConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegLinetoRelConstructor>(vm.heap)) JSSVGPathSegLinetoRelConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGPathSegLinetoRelConstructor::s_info = { "SVGPathSegLinetoRelConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegLinetoRelConstructor) };

JSSVGPathSegLinetoRelConstructor::JSSVGPathSegLinetoRelConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPathSegLinetoRelConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGPathSegLinetoRel::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGPathSegLinetoRel"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegLinetoRelPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoRelConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoRelX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegLinetoRelX) },
    { "y", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoRelY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGPathSegLinetoRelY) },
};

const ClassInfo JSSVGPathSegLinetoRelPrototype::s_info = { "SVGPathSegLinetoRelPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegLinetoRelPrototype) };

void JSSVGPathSegLinetoRelPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGPathSegLinetoRelPrototypeTableValues, *this);
}

const ClassInfo JSSVGPathSegLinetoRel::s_info = { "SVGPathSegLinetoRel", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGPathSegLinetoRel) };

JSSVGPathSegLinetoRel::JSSVGPathSegLinetoRel(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGPathSegLinetoRel>&& impl)
    : JSSVGPathSeg(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGPathSegLinetoRel::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGPathSegLinetoRelPrototype::create(vm, globalObject, JSSVGPathSegLinetoRelPrototype::createStructure(vm, globalObject, JSSVGPathSeg::getPrototype(vm, globalObject)));
}

JSObject* JSSVGPathSegLinetoRel::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegLinetoRel>(vm, globalObject);
}

EncodedJSValue jsSVGPathSegLinetoRelX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegLinetoRel* castedThis = jsDynamicCast<JSSVGPathSegLinetoRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegLinetoRelPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegLinetoRel", "x");
        return throwGetterTypeError(*exec, "SVGPathSegLinetoRel", "x");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.x());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegLinetoRelY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGPathSegLinetoRel* castedThis = jsDynamicCast<JSSVGPathSegLinetoRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegLinetoRelPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGPathSegLinetoRel", "y");
        return throwGetterTypeError(*exec, "SVGPathSegLinetoRel", "y");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.y());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGPathSegLinetoRelConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGPathSegLinetoRelPrototype* domObject = jsDynamicCast<JSSVGPathSegLinetoRelPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGPathSegLinetoRel::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSSVGPathSegLinetoRelX(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegLinetoRel* castedThis = jsDynamicCast<JSSVGPathSegLinetoRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegLinetoRelPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegLinetoRel", "x");
        else
            throwSetterTypeError(*exec, "SVGPathSegLinetoRel", "x");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setX(nativeValue);
}


void setJSSVGPathSegLinetoRelY(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGPathSegLinetoRel* castedThis = jsDynamicCast<JSSVGPathSegLinetoRel*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGPathSegLinetoRelPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGPathSegLinetoRel", "y");
        else
            throwSetterTypeError(*exec, "SVGPathSegLinetoRel", "y");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setY(nativeValue);
}


JSValue JSSVGPathSegLinetoRel::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegLinetoRelConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}