#pragma once
#include "cIGZUnknown.h"

class cGZMessage;
class cIGZKeyboard;
class cIGZString;
class cIGZWin;

static const uint32_t GZSERVID_cIGZWinMgr = 0xa417445e;
static const uint32_t GIID_cIGZWinMgr = 0x5a4;

class cIGZWinMgr : public cIGZUnknown
{
public:
    virtual cIGZWin* GetMainWindow(void) = 0;
    virtual bool SetMainWin(cIGZWin*) = 0;
    virtual bool GetMainWinAs(uint32_t, void**) const = 0;

    virtual intptr_t GetCanvas(void) = 0; // Returns cIGZCanvas*
    virtual bool AddWindowToValidList(cIGZWin*) = 0;
    virtual bool RemoveWindowFromValidList(cIGZWin*) = 0;
    virtual void CleanUpWindowReferences(cIGZWin*) = 0;
    virtual bool DestroyWindow(cIGZWin*) = 0;
    virtual bool IsWindowValid(cIGZWin*) = 0;
    virtual cIGZWin* GetWindowFromPoint(int, int32_t) = 0;

    virtual void InvalidateAllWindows(void) = 0;
    virtual void Plot(void) = 0;
    virtual uint32_t PauseDrawing(void) = 0;
    virtual uint32_t ResumeDrawing(void) = 0;

    virtual bool GZWinMsgPost(uint32_t, uint32_t, uint32_t) = 0;
    virtual bool GZWinMsgPost_Mouse(uint32_t, int32_t, int32_t, uint32_t) = 0;
    virtual bool GZWinMsgPost_Keyboard(uint32_t, uint32_t, uint32_t) = 0;
    virtual bool SendMessageToTarget(cIGZWin*, cGZMessage&) = 0;
    virtual bool SendMessageToTarget(cIGZWin*, uint32_t, uint32_t, uint32_t, uint32_t) = 0;
    virtual void PostMessageToTarget(cIGZWin*, cGZMessage const&) = 0;
    virtual void PostMessageToTarget(cIGZWin*, uint32_t, uint32_t, uint32_t, uint32_t) = 0;
    virtual void ProcessPostedMessages(void) = 0;
    virtual bool ProcessMouseMessage(cGZMessage&) = 0;
    virtual bool ProcessKeyboardMessage(cGZMessage&) = 0;
    virtual uint32_t FlushInputMessageQueue(void) = 0;

    virtual cIGZWin* GZGetCapture(void) = 0;
    virtual bool GZSetCapture(cIGZWin*) = 0;
    virtual bool GZReleaseCapture(cIGZWin*) = 0;
    virtual void GZShowCursor(bool) = 0;
    virtual intptr_t GetCursorManager(void) = 0; // Returns cIGZCursorManager*
    virtual void GetCursorScreenPosition(int32_t&, int32_t&) = 0;
    virtual void GetCursorRelativePosition(cIGZWin*, int32_t&, int32_t&) = 0;
    virtual bool SetCurrentMouseWin(cIGZWin*) = 0;
    virtual cIGZWin* GZGetFocus(void) = 0;
    virtual bool GZSetFocus(cIGZWin*) = 0;
    virtual cIGZKeyboard* GetKeyboard(void) = 0;

    virtual int32_t DoModalWin(cIGZWin*) = 0;
    virtual bool IsModal(void) const = 0;
    virtual uint32_t GetModalNestCount(void) const = 0;

    virtual int32_t GZMsgBox(cIGZString const&, cIGZString const&, uint32_t, bool, uint32_t) = 0;
    virtual bool SetGZMsgBoxCMDID(uint32_t, uint32_t, bool) = 0;
    virtual bool GetGZMsgBoxCMDID(uint32_t&, uint32_t&, bool&) const = 0;

    virtual bool EnumRegWins(void (*)(uint32_t, uint32_t, uint32_t, uint32_t, bool)) = 0;
    virtual bool AddRegWin(uint32_t, uint32_t, uint32_t, uint32_t, bool) = 0;
    virtual bool RemoveRegWin(uint32_t) = 0;
    virtual bool RemoveAllRegWins(void) = 0;
    virtual bool GetRegWinInfo(uint32_t, uint32_t&, uint32_t&, uint32_t&, bool&) const = 0;
    virtual bool CreateRegWins(void) = 0;

    virtual bool DebugIsFocusGadgetVisible(void) const = 0;
    virtual void DebugSetFocusGadgetVisible(bool) = 0;
    virtual bool DebugIsCaptureGadgetVisible(void) const = 0;
    virtual void DebugSetCaptureGadgetVisible(bool) = 0;
    virtual bool DebugIsInvalidateGadgetVisible(void) const = 0;
    virtual void DebugSetInvalidateGadgetVisible(bool) = 0;
    virtual void DebugDumpWindowList(void) = 0;
    virtual bool DoModalWin(cIGZWin*, cIGZWin*) = 0;
};
