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

#ifndef JSWebGLShaderPrecisionFormat_h
#define JSWebGLShaderPrecisionFormat_h

#if ENABLE(WEBGL)

#include "JSDOMWrapper.h"
#include "WebGLShaderPrecisionFormat.h"
#include <wtf/NeverDestroyed.h>

namespace WebCore {

class JSWebGLShaderPrecisionFormat : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSWebGLShaderPrecisionFormat* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<WebGLShaderPrecisionFormat>&& impl)
    {
        JSWebGLShaderPrecisionFormat* ptr = new (NotNull, JSC::allocateCell<JSWebGLShaderPrecisionFormat>(globalObject->vm().heap)) JSWebGLShaderPrecisionFormat(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static WebGLShaderPrecisionFormat* toWrapped(JSC::JSValue);
    static void destroy(JSC::JSCell*);
    ~JSWebGLShaderPrecisionFormat();

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    WebGLShaderPrecisionFormat& impl() const { return *m_impl; }
    void releaseImpl() { std::exchange(m_impl, nullptr)->deref(); }

private:
    WebGLShaderPrecisionFormat* m_impl;
protected:
    JSWebGLShaderPrecisionFormat(JSC::Structure*, JSDOMGlobalObject*, Ref<WebGLShaderPrecisionFormat>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};

class JSWebGLShaderPrecisionFormatOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, WebGLShaderPrecisionFormat*)
{
    static NeverDestroyed<JSWebGLShaderPrecisionFormatOwner> owner;
    return &owner.get();
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, WebGLShaderPrecisionFormat*);
inline JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebGLShaderPrecisionFormat& impl) { return toJS(exec, globalObject, &impl); }


} // namespace WebCore

#endif // ENABLE(WEBGL)

#endif
