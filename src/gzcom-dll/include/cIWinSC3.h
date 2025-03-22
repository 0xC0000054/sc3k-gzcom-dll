#pragma once
#include "cIGZUnknown.h"

class cGZMessage;
class cIGZString;
class cIGZWin;
class cISC3App;

class cIWinSC3 : public cIGZUnknown
{
public:
    virtual cIGZWin* AsIGZWin(void) = 0;

    virtual bool PreInit(cISC3App&) = 0;
    virtual bool DoDancingBear(void) = 0;
    virtual bool DoCopyRightScreen(bool) = 0;
    virtual bool DoTitleBackgroundScreen(void) = 0;
    virtual void ReleaseTitleBackgroundBuffer(void) = 0;

    virtual bool DoMainMenu(void) = 0;
    virtual bool ActivateMainMenu(void) = 0;
    virtual bool DoLoadCity(cIGZString&) = 0;
    virtual bool DoShowWinCityView(void) = 0;

    virtual bool dbgDoDebugWindow(cGZMessage&) = 0; // No-op that returns false
    virtual bool dbgDoDebugWindow(uint32_t, uint32_t, uint32_t, uint32_t) = 0;
};
