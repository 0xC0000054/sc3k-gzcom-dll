#pragma once
#include "cIGZUnknown.h"

class cGZResourceKey;
class cIGZDBSegment;
class cIGZString;
class cISC3OccupantAttrib;
class cISC3OccAttribOverRide;
class cISC3OccAttribOverRideContainer;
class cISC3PluginBuildingMgr;

class cISC3CitySchemeMgr : public cIGZUnknown
{
public:
    virtual bool Init(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual cISC3PluginBuildingMgr* GetPluginBuildingMgr(void) = 0;
    virtual bool SetCityScheme(uint32_t, uint32_t, uint32_t, bool) = 0;
    virtual void SetDefaultCityScheme(void) = 0;

    virtual bool GetCurrentLandScape(uint32_t&) const = 0;
    virtual uint32_t GetDefaultLandScape(void) const = 0;
    virtual uint32_t GetNumLandScapes(void) const = 0;
    virtual void GetLandScapeIds(uint32_t*, uint32_t, uint32_t&) = 0;
    virtual bool GetLandScapeIconKey(uint32_t, cGZResourceKey&) = 0;
    virtual bool GetLandScapePalette(uint32_t, uint32_t&, uint32_t&) = 0;
    virtual bool GetUiImageForLandScape(uint32_t, uint32_t&, uint32_t&) = 0;
    virtual bool GetSoundIdForCurrentLandScape(uint32_t&) = 0;
    virtual void GetNavViewTerrainPaletteForCurrentLandScape(uint32_t&) = 0;
    virtual void GetDataMapsTerrainPaletteForCurrentLandScape(uint32_t&) = 0;

    virtual bool GetCurrentFloraSet(uint32_t&) const = 0;
    virtual uint32_t GetDefaultFloraSet(void) const = 0;
    virtual uint32_t GetNumFloraSets(void) const = 0;
    virtual void GetFloraSetIds(uint32_t*, uint32_t, uint32_t&) = 0;
    virtual bool GetFloraSetIconKey(uint32_t, cGZResourceKey&) = 0;
    virtual bool GetUiImageForFloraSet(uint32_t, uint32_t&, uint32_t&, uint32_t&, uint32_t&) = 0;
    virtual bool GetSoundIdForCurrentFloraSet(uint32_t&) = 0;

    virtual bool GetCurrentBuildingSet(uint32_t&) const = 0;
    virtual uint32_t GetDefaultBuildingSet(void) const = 0;
    virtual uint32_t GetNumBuildingSets(void) const = 0;
    virtual void GetBuildingSetIds(uint32_t*, uint32_t, uint32_t&) = 0;
    virtual bool GetBuildingSetIconKey(uint32_t, cGZResourceKey&) = 0;
    virtual bool GetUiImageForBuildingSet(uint32_t, uint32_t&, uint32_t&, uint32_t&, uint32_t&) = 0;
    virtual bool GetSoundIdForCurrentBuildingSet(uint32_t&) = 0;

    virtual void LoadBATSegment(void) = 0;
    virtual void UnloadBATSegment(void) = 0;
    virtual uint32_t GetNumBATBuildings(void) = 0;
    virtual void GetBATBuildingKeys(cGZResourceKey*, uint32_t, uint32_t&) = 0;
    virtual void UpdateBATSegment(uint32_t, cIGZString**, uint32_t, cGZResourceKey*) = 0;

    virtual bool IsRewardBuilding(uint32_t) = 0;
    virtual bool IsReplaceableBuilding(cISC3OccupantAttrib const*) = 0;

    virtual void GetBATBuildings(cISC3OccAttribOverRideContainer&, uint32_t) = 0;
    virtual intptr_t GetBATBuildings(void) = 0;

    virtual bool MakeBATReplacement(cGZResourceKey const&, cGZResourceKey const&) = 0;
    virtual bool MakeBATReplacement(cGZResourceKey const&, cISC3OccAttribOverRide*) = 0;
    virtual bool ClearBATReplacement(cGZResourceKey const&) = 0;

    virtual bool LoadBATReplacementSet(cIGZDBSegment*, bool) = 0;
    virtual bool SaveBATReplacementSet(cIGZDBSegment*) = 0;
    virtual bool ImportReplacementSet(cIGZString&) = 0;
    virtual void ClearReplacementSet(void) = 0;
};
