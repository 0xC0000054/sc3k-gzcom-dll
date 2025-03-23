#pragma once
#include "cIGZUnknown.h"

class cIGZBuffer;
class cIGZString;
class cIGZWinMgr;
class cRZRect;

class cIGZCanvas : public cIGZUnknown
{
public:
    virtual bool Init(cRZRect const&) = 0;
    virtual bool Shutdown(void) = 0;
    virtual bool Uninitialize(void) = 0;
    virtual bool Restore(void) = 0;

    virtual void SetArea(int32_t, int32_t, int32_t, int32_t) = 0;
    virtual cRZRect* GetArea(void) const = 0;
    virtual void ShowWindow(void) = 0;
    virtual void HideWindow(void) = 0;
    virtual void SetCaption(cIGZString const&) = 0;

    virtual void ProcessWindowMove(void) = 0;
    virtual void ForceFullSystemRedraw(void) = 0;
    virtual bool CompleteSwitchToWindowedMode(void) = 0;
    virtual bool CompleteSwitchToFullScreenMode(void) = 0;

    virtual void PauseDrawing(void) = 0;
    virtual void ResumeDrawing(void) = 0;

    virtual void SetMainBufferSurface(cIGZBuffer*) = 0;
    virtual cIGZBuffer* GetMainBufferSurface(void) = 0;
    virtual void SetWindowManager(cIGZWinMgr*) = 0;
    virtual void SetFrameworkIsShuttingDown(bool) = 0;
    virtual int32_t LastCursorPositionX(void) const = 0;
    virtual int32_t LastCursorPositionY(void) const = 0;
};
