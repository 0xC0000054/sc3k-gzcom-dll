#pragma once
#include "cIGZUnknown.h"

class cIGZString;

class cISC3AppPreferences : public cIGZUnknown
{
public:
    virtual bool Load(void) = 0;
    virtual bool Save(void) = 0;
    virtual bool IsWindowVisible(int32_t, int32_t, int32_t, int32_t) = 0;

    virtual cIGZString* GetRadioCallSign(void) = 0;
    virtual void SetRadioCallSign(cIGZString const&) = 0;

    virtual cIGZString* GetLoadSavePath(void) = 0;
    virtual void SetLoadSavePath(cIGZString&) = 0;

    virtual intptr_t VideoPrefs(void) = 0;
    virtual intptr_t SoundPrefs(void) = 0;
    virtual intptr_t SimPrefs(void) = 0;
    virtual intptr_t VisibilityPrefs(void) = 0;
    virtual intptr_t TODPrefs(void) = 0;
    virtual intptr_t MiscWindowPrefs(void) = 0;
    virtual intptr_t NewCityPrefs(void) = 0;
    virtual intptr_t LoadPrefs(void) = 0;
    virtual intptr_t MapsWindowPrefs(void) = 0;
    virtual intptr_t QueryDialogPrefs(void) = 0;
    virtual intptr_t OrdinancesWindowPrefs(void) = 0;
    virtual intptr_t NeighborsDialogPrefs(void) = 0;
    virtual intptr_t BudgetDialogPrefs(void) = 0;
    virtual intptr_t AdvMgrPrefs(void) = 0;
    virtual intptr_t SelectABuildingPrefs(void) = 0;
    virtual intptr_t ChartsPrefs(void) = 0;
    virtual intptr_t GraphsPrefs(void) = 0;
    virtual intptr_t BldgReplacementPrefs(void) = 0;
    virtual intptr_t EditBATBldgListPrefs(void) = 0;

    virtual int32_t GetLanguage(void) = 0;
    virtual void SetLanguage(int32_t) = 0;

    virtual int32_t GetCountry(void) = 0;
    virtual void SetCountry(int32_t) = 0;

    virtual bool GetIntelliScroll(void) = 0;
    virtual void SetIntelliScroll(bool) = 0;

    virtual bool IsSongEnabled(uint32_t) = 0;
    virtual void EnableDisableSong(uint32_t, bool) = 0;
};
