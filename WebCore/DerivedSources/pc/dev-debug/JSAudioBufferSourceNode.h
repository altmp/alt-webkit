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

#ifndef JSAudioBufferSourceNode_h
#define JSAudioBufferSourceNode_h

#if ENABLE(WEB_AUDIO)

#include "AudioBufferSourceNode.h"
#include "JSAudioNode.h"

namespace WebCore {

class JSAudioBufferSourceNode : public JSAudioNode {
public:
    typedef JSAudioNode Base;
    static JSAudioBufferSourceNode* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<AudioBufferSourceNode>&& impl)
    {
        JSAudioBufferSourceNode* ptr = new (NotNull, JSC::allocateCell<JSAudioBufferSourceNode>(globalObject->vm().heap)) JSAudioBufferSourceNode(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);

    // Custom attributes
    void setBuffer(JSC::ExecState*, JSC::JSValue);
    AudioBufferSourceNode& impl() const
    {
        return static_cast<AudioBufferSourceNode&>(Base::impl());
    }
public:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
protected:
    JSAudioBufferSourceNode(JSC::Structure*, JSDOMGlobalObject*, Ref<AudioBufferSourceNode>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, AudioBufferSourceNode*);
inline JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, AudioBufferSourceNode& impl) { return toJS(exec, globalObject, &impl); }


} // namespace WebCore

#endif // ENABLE(WEB_AUDIO)

#endif
