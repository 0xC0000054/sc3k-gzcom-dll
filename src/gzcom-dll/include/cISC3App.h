#pragma once
#include "cIGZUnknown.h"

class cIBoxX;
class cIGZCheatCodeManager;
class cIGZRadio;
class cIGZResourceManager;
class cIGZString;
class cISC3AgentTypeTree;
class cISC3AppPreferences;
class cISC3AppStateManager;
class cISC3City;
class cISC3CityDefinition;
class cISC3CitySchemeMgr;
class cISC3Internet;
class cISC3OccupantAttribCache;
class cISC3WinCityView;
class cISC3WinMain;

static const uint32_t GZIID_cISC3App = 0xfa2;

class cISC3App : public cIGZUnknown
{
public:
    virtual void SetInputFileName(cIGZString const&) = 0;
    virtual cIGZString* GetInputFileName(void) = 0;
    virtual void SetRestartOnExit(bool) = 0;

    virtual cISC3City* GetCity(void) = 0;
    virtual bool CreateCity(void) = 0;
    virtual bool PostCityInit(int32_t, int32_t, cIGZString*) = 0;
    virtual bool ShutdownCity(void) = 0;
    virtual bool PreCityLoad(void) = 0;

    virtual cIGZCheatCodeManager* GetCheatCodeManager(void) = 0;
    virtual cIGZRadio* GetRadio(void) = 0;
    virtual cIBoxX* GetBoxX(void) = 0;
    virtual intptr_t GetSoundRenderServer(void) = 0;
    virtual cISC3AppStateManager* GetAppStateManager(void) = 0;
    virtual cISC3AgentTypeTree* GetAppAgentTypeTree(void) = 0;
    virtual cISC3OccupantAttribCache* GetAppOccupantAttribCache(void) = 0;
    virtual cISC3CityDefinition* GetAppCityDefinition(void) = 0;

    virtual void GetAppIniFileName(cIGZString&) = 0;
    virtual void GetAppDataDirectory(cIGZString&) = 0;
    virtual void GetAppDirectory(cIGZString&) = 0;

    virtual cIGZResourceManager* GetResourceManager(void) = 0;
    virtual intptr_t GetBufferResourceFactory(void) = 0;
    virtual cISC3AppPreferences* GetAppPreferences(void) = 0;
    virtual intptr_t GetSystemPerformanceInfo(void) = 0;

    virtual void FixStartupResolutionValuesIfNeeded(uint32_t&, uint32_t&) = 0;
    virtual bool IsStartupResolutionOK(uint32_t, uint32_t) = 0;

    virtual cISC3WinMain* GetSC3MainWindow(void) = 0;
    virtual cISC3WinCityView* GetISC3WinCityView(void) = 0;
    virtual void SetWinCityView(cISC3WinCityView*) = 0;
    virtual cISC3Internet* GetSC3Internet(void) = 0;
    virtual cISC3CitySchemeMgr* CitySchemeManager(void) = 0;

    virtual bool Quit(bool, bool) = 0;
    virtual void ShowProgressBar(uint32_t, cIGZString&) = 0;
    virtual void UpdateProgressBar(uint32_t) = 0;
    virtual void HideProgressBar(void) = 0;
};
