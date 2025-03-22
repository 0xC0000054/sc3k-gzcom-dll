#pragma once
#include "cIGZUnknown.h"

class cGZMessage;
class cIGZCursor;
class cIGZKeyboard;
class cIGZString;
class cIGZVariant;
class cIGZWinKeyAccelerator;
class cIGZWinMgr;
class cRZRect;

static const uint32_t GZIID_cIGZWin = 0x22ba0121;

class cIGZWin : public cIGZUnknown
{
public:
    typedef uint32_t tWinFlag;

    virtual bool DoMessage(cGZMessage&) = 0;
    virtual cIGZWinMgr* GetWindowManager(void) = 0;
    virtual bool SetWindowManager(cIGZWinMgr*) = 0;
    virtual cIGZKeyboard* GetKeyboard(void) = 0;
    virtual bool SetKeyboard(cIGZKeyboard*) = 0;
    virtual cIGZWin* GetMainWindow(void) = 0;

    virtual bool Init(void) = 0;
    virtual bool Shutdown(void) = 0;
    virtual cIGZWin* GetParentWin(void) const = 0;
    virtual bool SetParentWin(cIGZWin*) = 0;

    virtual bool ChildAdd(cIGZWin*) = 0;
    virtual bool ChildRemove(cIGZWin*) = 0;
    virtual bool ChildDelete(cIGZWin*) = 0;
    virtual bool ChildDeleteAbsolute(cIGZWin*) = 0;
    virtual bool ChildDeleteAll(void) = 0;
    virtual bool ChildExists(cIGZWin*) = 0;
    virtual bool ChildExists(uint32_t) = 0;
    virtual bool PullToFront(void) = 0;
    virtual bool SendToBack(void) = 0;
    virtual bool ChildToFront(cIGZWin*) = 0;
    virtual bool ChildToFront(uint32_t) = 0;
    virtual bool ChildToBack(cIGZWin*) = 0;
    virtual bool IsWinInParentChain(cIGZWin*) = 0;
    virtual bool IsWinInChildChain(cIGZWin*) = 0;

    virtual uint32_t GetChildCount(void) const = 0;
    virtual bool EnumChildren(uint32_t, bool (*)(cIGZWin*, uint32_t, void*, void*), void*) = 0;
    virtual bool SortChildren(bool (*)(cIGZWin*, cIGZWin*, void*), void*, bool) = 0;
    virtual cIGZWin* GetChildWindowFromID(uint32_t) = 0;
    virtual cIGZWin* GetChildWindowFromIDRecursive(uint32_t) = 0;
    virtual bool GetChildAs(uint32_t, uint32_t, void**) = 0;
    virtual bool GetChildAsRecursive(uint32_t, uint32_t, void**) = 0;
    virtual cIGZWin* GetWindowFromPoint(int, int32_t) = 0;
    virtual cIGZWin* GetChildWindowFromPoint(int, int32_t) = 0;

    virtual int32_t GetW(void) const = 0;
    virtual int32_t GetH(void) const = 0;
    virtual int32_t GetL(void) const = 0;
    virtual int32_t GetT(void) const = 0;
    virtual int32_t GetR(void) const = 0;
    virtual int32_t GetB(void) const = 0;
    virtual cRZRect* GetArea(void) const = 0;
    virtual void GetArea(cRZRect&) const = 0;
    virtual cRZRect* GetAreaAbsolute(void) const = 0;
    virtual void GetAreaAbsolute(cRZRect&) const = 0;

    virtual void SetW(int32_t) = 0;
    virtual void SetH(int32_t) = 0;
    virtual void SetSize(int32_t, int32_t) = 0;
    virtual void SetArea(int32_t, int32_t, int32_t, int32_t) = 0;
    virtual void SetArea(cRZRect const&) = 0;
    virtual void GZWinMoveTo(int32_t, int32_t) = 0;
    virtual void GZWinOffset(int32_t, int32_t) = 0;
    virtual bool FitRectToWindow(cRZRect&, int32_t) = 0;
    virtual void ScreenToWindowCoordinates(int32_t&, int32_t&) const = 0;
    virtual void WindowToScreenCoordinates(int32_t&, int32_t&) const = 0;
    virtual bool WindowToWindowCoordinates(cIGZWin*, int32_t&, int32_t&) const = 0;
    virtual bool IsPointInWindowScreenCoordinates(int32_t, int32_t) const = 0;

    virtual uint32_t GetID(void) const = 0;
    virtual void SetID(uint32_t) = 0;
    virtual bool GetFlag(cIGZWin::tWinFlag) const = 0;
    virtual tWinFlag SetFlag(cIGZWin::tWinFlag, bool) = 0;

    virtual bool ShowWindow(void) = 0;
    virtual bool HideWindow(void) = 0;
    virtual bool IsVisible(void) const = 0;
    virtual bool IsEnabled(void) const = 0;
    virtual cIGZString* GetCaption(void) const = 0;
    virtual void SetCaption(cIGZString const&) = 0;
    virtual cIGZWinKeyAccelerator* GetKeyboardAccelerator(void) const = 0;
    virtual bool SetKeyboardAccelerator(cIGZWinKeyAccelerator*) = 0;
    virtual bool AccelerateKeyboardMsg(cGZMessage&) = 0;
    virtual uint32_t GetKeyEquivalent(void) = 0;
    virtual void SetKeyEquivalent(uint32_t) = 0;
    virtual bool CheckKeyEquivalent(uint32_t, uint32_t) = 0;
    virtual uint32_t MakeKeyEquivalent(uint32_t, uint32_t) = 0;
    virtual bool IsChildKeyEquivalent(uint32_t, uint32_t) = 0;
    virtual bool ProcessCursorMessage(cGZMessage&) = 0;
    virtual bool UpdateCursor(void) = 0;
    virtual bool SetCursor(cIGZCursor*, bool) = 0;
    virtual bool SetNotificationTarget(cIGZWin*) = 0;
    virtual cIGZWin* GetNotificationTarget(void) const = 0;

    virtual bool GZPaint(void) = 0;
    virtual bool Plot(void) = 0;
    virtual void CalcAbsoluteArea(void) = 0;
    virtual void InvalidateSelf(void) = 0;
    virtual void InvalidateSelfAndParents(void) = 0;
    virtual void GetBufferToDrawTo(void) = 0;
    virtual void SetBufferToDrawTo(void) = 0;
    virtual void SetBufferToDrawToRecursive(void) = 0;
    virtual void SetAreaToDrawTo(void) = 0;
    virtual void SetAreaToDrawToRecursive(void) = 0;
    virtual intptr_t GetPrivateBuffer(void) = 0; // cIGZBuffer*
    virtual intptr_t PrivateBuffer(bool) = 0; // cIGZBuffer*

    virtual void SetFillColor(uint32_t) = 0;
    virtual uint32_t GetFillColor(void) const = 0;
    virtual uint32_t MakeFillColor(uint8_t, uint8_t, uint8_t) = 0;
    virtual void SetFillColor(uint8_t, uint8_t, uint8_t) = 0;
    virtual void GetFillColor(uint8_t&, uint8_t&, uint8_t&) const = 0;

    virtual bool SetParam(uint32_t, cIGZVariant*) = 0;
    virtual bool GetParam(uint32_t, cIGZVariant**) const = 0;
    virtual bool EnumParams(bool (*)(cIGZWin*, uint32_t, cIGZVariant*, void*)) = 0;
};
