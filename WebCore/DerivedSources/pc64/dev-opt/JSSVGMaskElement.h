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

#ifndef JSSVGMaskElement_h
#define JSSVGMaskElement_h

#include "JSSVGElement.h"
#include "SVGElement.h"
#include "SVGMaskElement.h"

namespace WebCore {

class JSSVGMaskElement : public JSSVGElement {
public:
    typedef JSSVGElement Base;
    static JSSVGMaskElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGMaskElement>&& impl)
    {
        JSSVGMaskElement* ptr = new (NotNull, JSC::allocateCell<JSSVGMaskElement>(globalObject->vm().heap)) JSSVGMaskElement(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::JSType(JSElementType), StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    SVGMaskElement& impl() const
    {
        return static_cast<SVGMaskElement&>(Base::impl());
    }
protected:
    JSSVGMaskElement(JSC::Structure*, JSDOMGlobalObject*, Ref<SVGMaskElement>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};



} // namespace WebCore

#endif