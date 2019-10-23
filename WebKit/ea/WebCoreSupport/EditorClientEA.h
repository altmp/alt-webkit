/*
 * Copyright (C) 2006 Nikolas Zimmermann <zimmermann@kde.org>
 * Copyright (C) 2006 Zack Rusin <zack@kde.org>
 * Copyright (C) 2006 Apple Computer, Inc.
 * Copyright (C) 2011, 2013, 2014, 2015 Electronic Arts, Inc. All rights reserved.
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef EditorClientEA_h
#define EditorClientEA_h

#include "EditorClient.h"
#include <wtf/RefCounted.h>

#include <wtf/Forward.h>

namespace EA
{
namespace WebKit
{
class WebPage;
}
}

namespace WebCore {

class EditorClientEA : public EditorClient {
public:
	EditorClientEA(EA::WebKit::WebPage* page);
    
    virtual void pageDestroyed() override;
    
    virtual bool shouldDeleteRange(Range*) override;
    virtual bool smartInsertDeleteEnabled() override; 
    virtual bool isSelectTrailingWhitespaceEnabled() override; 
    virtual bool isContinuousSpellCheckingEnabled() override;
    virtual void toggleContinuousSpellChecking() override;
    virtual bool isGrammarCheckingEnabled() override;
    virtual void toggleGrammarChecking() override;
    virtual int spellCheckerDocumentTag() override;

    virtual bool shouldBeginEditing(Range*) override;
    virtual bool shouldEndEditing(Range*) override;
    virtual bool shouldInsertNode(Node*, Range*, EditorInsertAction) override;
    virtual bool shouldInsertText(const String&, Range*, EditorInsertAction) override;
    virtual bool shouldChangeSelectedRange(Range* fromRange, Range* toRange, EAffinity, bool stillSelecting) override;

    virtual bool shouldApplyStyle(StyleProperties*, Range*) override;
	virtual void didApplyStyle() override;

    virtual bool shouldMoveRangeAfterDelete(Range*, Range*) override;

    virtual void didBeginEditing() override;
    virtual void respondToChangedContents() override;
    virtual void respondToChangedSelection(Frame*) override;
	virtual void didChangeSelectionAndUpdateLayout() override { }
    virtual void didEndEditing() override;
    virtual void willWriteSelectionToPasteboard(Range*) override;
    virtual void didWriteSelectionToPasteboard() override;
    virtual void getClientPasteboardDataForRange(Range*, Vector<String>& pasteboardTypes, Vector<RefPtr<WebCore::SharedBuffer> >& pasteboardData) override;
    
    virtual void registerUndoStep(PassRefPtr<UndoStep>) override;
    virtual void registerRedoStep(PassRefPtr<UndoStep>) override;
    virtual void clearUndoRedoOperations() override;

    virtual bool canCopyCut(Frame*, bool defaultValue) const override;
    virtual bool canPaste(Frame*, bool defaultValue) const override;
    virtual bool canUndo() const override;
    virtual bool canRedo() const override;
    
    virtual void undo() override;
    virtual void redo() override;

    virtual void handleKeyboardEvent(KeyboardEvent*) override;
    virtual void handleInputMethodKeydown(KeyboardEvent*) override;

    virtual void textFieldDidBeginEditing(Element*) override;
    virtual void textFieldDidEndEditing(Element*) override;
    virtual void textDidChangeInTextField(Element*) override;
    virtual bool doTextFieldCommandFromEvent(Element*, KeyboardEvent*) override;
    virtual void textWillBeDeletedInTextField(Element*) override;
    virtual void textDidChangeInTextArea(Element*) override;

    virtual void updateSpellingUIWithGrammarString(const String&, const GrammarDetail&) override;
    virtual void updateSpellingUIWithMisspelledWord(const String&) override;
    virtual void showSpellingUI(bool show) override;
    virtual bool spellingUIIsShowing() override;
    virtual void willSetInputMethodState() override;
    virtual void setInputMethodState(bool enabled) override;
    virtual TextCheckerClient* textChecker() { return NULL; }

    virtual bool supportsGlobalSelection() override;

	virtual void discardedComposition(Frame*) override {}
	virtual void overflowScrollPositionChanged() override {}

    bool isEditing() const;

    static bool dumpEditingCallbacks;
    static bool acceptsEditing;

private:
	EA::WebKit::WebPage* m_page;
    bool m_editing;
};

}

#endif

// vim: ts=4 sw=4 et
