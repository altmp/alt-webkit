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

#ifndef JSTextTrackCue_h
#define JSTextTrackCue_h

#if ENABLE(VIDEO_TRACK)

#include "JSDOMWrapper.h"
#include "TextTrackCue.h"
#include <wtf/NeverDestroyed.h>

namespace WebCore {

class JSTextTrackCue : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSTextTrackCue* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<TextTrackCue>&& impl)
    {
        JSTextTrackCue* ptr = new (NotNull, JSC::allocateCell<JSTextTrackCue>(globalObject->vm().heap)) JSTextTrackCue(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static TextTrackCue* toWrapped(JSC::JSValue);
    static void destroy(JSC::JSCell*);
    ~JSTextTrackCue();

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    static void visitChildren(JSCell*, JSC::SlotVisitor&);
    void visitAdditionalChildren(JSC::SlotVisitor&);

    TextTrackCue& impl() const { return *m_impl; }
    void releaseImpl() { std::exchange(m_impl, nullptr)->deref(); }

private:
    TextTrackCue* m_impl;
protected:
    JSTextTrackCue(JSC::Structure*, JSDOMGlobalObject*, Ref<TextTrackCue>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};

class JSTextTrackCueOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, TextTrackCue*)
{
    static NeverDestroyed<JSTextTrackCueOwner> owner;
    return &owner.get();
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, TextTrackCue*);
inline JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, TextTrackCue& impl) { return toJS(exec, globalObject, &impl); }


} // namespace WebCore

#endif // ENABLE(VIDEO_TRACK)

#endif