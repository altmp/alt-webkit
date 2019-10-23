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

#ifndef JSNodeIterator_h
#define JSNodeIterator_h

#include "JSDOMWrapper.h"
#include "NodeIterator.h"
#include <wtf/NeverDestroyed.h>

namespace WebCore {

class JSNodeIterator : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSNodeIterator* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<NodeIterator>&& impl)
    {
        JSNodeIterator* ptr = new (NotNull, JSC::allocateCell<JSNodeIterator>(globalObject->vm().heap)) JSNodeIterator(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static NodeIterator* toWrapped(JSC::JSValue);
    static void destroy(JSC::JSCell*);
    ~JSNodeIterator();

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    static void visitChildren(JSCell*, JSC::SlotVisitor&);
    void visitAdditionalChildren(JSC::SlotVisitor&);

    NodeIterator& impl() const { return *m_impl; }
    void releaseImpl() { std::exchange(m_impl, nullptr)->deref(); }

private:
    NodeIterator* m_impl;
protected:
    JSNodeIterator(JSC::Structure*, JSDOMGlobalObject*, Ref<NodeIterator>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};

class JSNodeIteratorOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, NodeIterator*)
{
    static NeverDestroyed<JSNodeIteratorOwner> owner;
    return &owner.get();
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, NodeIterator*);
inline JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, NodeIterator& impl) { return toJS(exec, globalObject, &impl); }


} // namespace WebCore

#endif
