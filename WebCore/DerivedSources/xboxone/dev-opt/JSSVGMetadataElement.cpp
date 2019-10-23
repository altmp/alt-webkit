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
#include "JSSVGMetadataElement.h"

#include "JSDOMBinding.h"
#include "SVGMetadataElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGMetadataElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGMetadataElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGMetadataElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGMetadataElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGMetadataElementPrototype>(vm.heap)) JSSVGMetadataElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGMetadataElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGMetadataElementConstructor : public DOMConstructorObject {
private:
    JSSVGMetadataElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGMetadataElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGMetadataElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGMetadataElementConstructor>(vm.heap)) JSSVGMetadataElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGMetadataElementConstructor::s_info = { "SVGMetadataElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGMetadataElementConstructor) };

JSSVGMetadataElementConstructor::JSSVGMetadataElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGMetadataElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGMetadataElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGMetadataElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGMetadataElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGMetadataElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSSVGMetadataElementPrototype::s_info = { "SVGMetadataElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGMetadataElementPrototype) };

void JSSVGMetadataElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGMetadataElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGMetadataElement::s_info = { "SVGMetadataElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGMetadataElement) };

JSSVGMetadataElement::JSSVGMetadataElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGMetadataElement>&& impl)
    : JSSVGElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGMetadataElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGMetadataElementPrototype::create(vm, globalObject, JSSVGMetadataElementPrototype::createStructure(vm, globalObject, JSSVGElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGMetadataElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGMetadataElement>(vm, globalObject);
}

EncodedJSValue jsSVGMetadataElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGMetadataElementPrototype* domObject = jsDynamicCast<JSSVGMetadataElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGMetadataElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGMetadataElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGMetadataElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}