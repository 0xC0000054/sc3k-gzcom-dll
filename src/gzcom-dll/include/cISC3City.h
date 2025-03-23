#pragma once
#include "cIGZUnknown.h"

class cGZMessage;
class cGZResourceKey;
class cIGZClock;
class cIGZDBSegment;
class cIGZString;
class cICSCitySimulator;
class cISC2Importer;
class cISC3AdvisorForBudget;
class cISC3AdvisorForCityPlanning;
class cISC3AdvisorForDemographics;
class cISC3AdvisorForEnvironment;
class cISC3AdvisorForPublicSafety;
class cISC3AdvisorForTransportation;
class cISC3AdvisorForUtilities;
class cISC3BaseAdvisor;
class cISC3BuildingLayer;
class cISC3BudgetLayer;
class cISC3CityDefinition;
class cISC3CityEnumerator;
class cISC3CityLayer;
class cISC3CommercialLayer;
class cISC3DisasterLayer;
class cISC3IndustrialLayer;
class cISC3LandValueLayer;
class cISC3NewCityInfo;
class cISC3OccupantAttrib;
class cISC3OrdinanceLayer;
class cISC3PetitionerManager;
class cISC3PollutionLayer;
class cISC3ResidentialLayer;
class cISCNScenarioLayer;
class cISSStrtSimLayer;
class cISC3WorldLayer;
class cISC3ZoneLayer;

class cISC3City : public cIGZUnknown
{
public:
    virtual bool DoMessage(cGZMessage&) = 0;
    virtual bool DoQueryInfo(cGZMessage&, cIGZUnknown*) = 0;

    virtual bool Init(cISC3NewCityInfo&) = 0;
    virtual bool Init(cISC2Importer*) = 0;
    virtual bool Init(cIGZDBSegment*) = 0;
    virtual bool Save(cIGZDBSegment*) = 0;
    virtual bool Shutdown(void) = 0;

    virtual int32_t GetEditMode(void) = 0;
    virtual void SetEditMode(int32_t) = 0;

    virtual bool IsDisasterActive(void) = 0;
    virtual bool IsScenarioActive(void) = 0;
    virtual bool IsTutorialActive(void) = 0;
    virtual bool IsDemoActive(void) = 0;
    virtual bool AreHolidayFeaturesEnabled(void) = 0;

    virtual void SetDisasterActive(bool) = 0;
    virtual void SetTutorialActive(bool) = 0;
    virtual void SetDemoActive(bool) = 0;
    virtual void EnableHolidayFeatures(bool) = 0;

    virtual bool IsModeFlagActive(uint32_t) = 0;
    virtual void SetCityModeFlag(uint32_t) = 0;
    virtual void ClearCityModeFlag(uint32_t) = 0;

    virtual uint32_t GetSerialNumber(void) = 0;
    virtual void SetSerialNumber(uint32_t) = 0;

    virtual bool GetOriginalLanguageAndCountry(int32_t&, int32_t&) = 0;
    virtual bool GetLastLanguageAndCountry(int32_t&, int32_t&) = 0;

    virtual uint32_t GetCityType(void) = 0;
    virtual uint32_t GetCityID(void) = 0;

    virtual cIGZString* GetCityName(void) = 0;
    virtual void SetCityName(cIGZString const&) = 0;
    virtual cIGZString* GetCityDescription(void) = 0;
    virtual void SetCityDescription(cIGZString const&) = 0;
    virtual cIGZString* GetMayorName(void) = 0;
    virtual void SetMayorName(cIGZString const&) = 0;

    virtual bool IsAutoBudgetEnabled(void) const = 0;
    virtual void SetAutoBudgetEnabled(bool) = 0;
    virtual bool AreDisastersEnabled(void) const = 0;
    virtual void SetDisastersEnabled(bool) = 0;
    virtual bool CanPlayerPauseUnpause(void) const = 0;
    virtual bool CanPlayerChangeSpeed(void) const = 0;
    virtual bool CanPlayerLoadSave(void) const = 0;
    virtual void SetPlayerLoadSaveEnabled(bool) = 0;

    virtual int32_t GetDifficulty(void) = 0;
    virtual void SetDifficulty(int32_t) = 0;

    virtual intptr_t DirtGenerator(void) = 0;
    virtual bool DoNewCity(bool) = 0;
    virtual bool DoLoadCity(bool) = 0;
    virtual bool DoSaveCity(bool) = 0;
    virtual void DoQuitGame(bool) = 0;

    virtual uint32_t CellCountX(void) const = 0;
    virtual uint32_t CellCountZ(void) const = 0;
    virtual uint32_t CellCountY(void) const = 0;
    virtual uint32_t AnimCellCountX(void) const = 0;
    virtual uint32_t AnimCellCountZ(void) const = 0;
    virtual uint32_t AnimCellCountY(void) const = 0;
    virtual uint32_t CellSizeInAnimUnitsX(void) const = 0;
    virtual uint32_t CellSizeInAnimUnitsZ(void) const = 0;
    virtual uint32_t CellSizeInAnimUnitsY(void) const = 0;

    virtual int64_t GetTileSize(void) = 0;
    virtual float CellSizeInWorldUnitsX(void) const = 0;
    virtual float CellSizeInWorldUnitsZ(void) const = 0;
    virtual float CellSizeInWorldUnitsY(void) const = 0;
    virtual float SizeX(void) = 0;
    virtual float SizeY(void) = 0;
    virtual float SizeZ(void) = 0;
    virtual float WorldToMeter(float) const = 0;
    virtual float WorldToFeet(float) const = 0;
    virtual float MeterToWorld(float) const = 0;
    virtual float FeetToWorld(float) const = 0;

    virtual intptr_t SurfaceOccupantManager(void) = 0;
    virtual intptr_t UndergroundOccupantManagerLevelOne(void) = 0;
    virtual intptr_t UndergroundOccupantManagerLevelTwo(void) = 0;
    virtual intptr_t AnimOccupantManager(void) = 0;
    virtual bool CreateOccupant(cGZResourceKey&, uint32_t, void**) = 0;
    virtual bool CreateOccupant(cISC3OccupantAttrib*, uint32_t, void**) = 0;
    virtual bool RemoveAllOccupants(void) = 0;

    virtual cISC3BuildingLayer* BuildingLayer(void) = 0;
    virtual intptr_t DirtBag(void) = 0;
    virtual intptr_t TransitLayer(void) = 0;
    virtual intptr_t TrafficLayer(void) = 0;
    virtual intptr_t FloraLayer(void) = 0;
    virtual cISC3ZoneLayer* ZoneLayer(void) = 0;
    virtual intptr_t PowerLayer(void) = 0;
    virtual intptr_t PlumbingLayer(void) = 0;
    virtual cISC3OrdinanceLayer* OrdinanceLayer(void) = 0;
    virtual cISC3BudgetLayer* BudgetLayer(void) = 0;
    virtual cISC3WorldLayer* WorldLayer(void) = 0;
    virtual cISSStrtSimLayer* StrtSimLayer(void) = 0;
    virtual cISC3DisasterLayer* DisasterLayer(void) = 0;
    virtual cISC3PollutionLayer* PollutionLayer(void) = 0;
    virtual intptr_t CrimeLayer(void) = 0;
    virtual intptr_t PoliceLayer(void) = 0;
    virtual intptr_t FireLayer(void) = 0;
    virtual cISC3ResidentialLayer* ResidentialLayer(void) = 0;
    virtual cISC3CommercialLayer* CommercialLayer(void) = 0;
    virtual cISC3IndustrialLayer* IndustrialLayer(void) = 0;
    virtual cISC3LandValueLayer* LandValueLayer(void) = 0;
    virtual intptr_t NeighborsLayer(void) = 0;
    virtual intptr_t WeatherLayer(void) = 0;
    virtual intptr_t DemolitionLayer(void) = 0;

    virtual cISC3AdvisorForUtilities* GetUtilityAdvisor(void) = 0;
    virtual cISC3AdvisorForDemographics* GetDemographicsAdvisor(void) = 0;
    virtual cISC3AdvisorForPublicSafety* GetPublicSafetyAdvisor(void) = 0;
    virtual cISC3AdvisorForEnvironment* GetEnvironmentAdvisor(void) = 0;
    virtual cISC3AdvisorForCityPlanning* GetCityPlanningAdvisor(void) = 0;
    virtual cISC3AdvisorForTransportation* GetTransportationAdvisor(void) = 0;
    virtual cISC3AdvisorForBudget* GetBudgetAdvisor(void) = 0;
    virtual cISC3PetitionerManager* GetPetitionerManager(void) = 0;

    virtual cISC3CityLayer* GetSpecificLayer(uint32_t) = 0;
    virtual bool GetLayer(uint32_t, uint32_t, void**) = 0;
    virtual uint32_t NumberOfLayers(void) = 0;
    virtual bool GetLayerByIndex(uint32_t, uint32_t, void**) = 0;

    virtual uint32_t GetAdvisorListLength(void) = 0;
    virtual uint32_t GetAdvisorList(uint32_t, cISC3BaseAdvisor**) = 0;
    virtual uint32_t GetLayerList(uint32_t, cISC3CityLayer**) = 0;
    virtual bool DoEnumLayers(cGZMessage&, cISC3CityEnumerator&) = 0;

    virtual cICSCitySimulator* CitySimulator(void) = 0;
    virtual bool StartCitySimulation(void) = 0;
    virtual bool EndCitySimulation(void) = 0;

    virtual void GetDate(uint32_t& dayOfYear, uint32_t& year) = 0;
    virtual void GetDate(uint32_t& month, uint32_t& day, uint32_t& year) = 0;
    virtual bool SetDate(uint32_t dayOfYear, uint32_t year) = 0;
    virtual bool SetDate(uint32_t month, uint32_t day, uint32_t year) = 0;
    virtual uint32_t GetYearBorn(void) = 0;
    virtual bool SetYearBorn(uint32_t) = 0;
    virtual void SimCalendarNotification(int32_t) = 0;

    virtual cIGZClock* GetSimulationClock(void) = 0;
    virtual bool SetGameSpeed(int32_t) = 0;
    virtual int32_t GetGameSpeed(void) = 0;

    virtual uint32_t Pause(void) = 0;
    virtual uint32_t Unpause(void) = 0;
    virtual bool IsPaused(void) = 0;
    virtual uint32_t PauseCount(void) = 0;

    virtual uint32_t SimHiddenPause(void) = 0;
    virtual uint32_t SimHiddenUnpause(void) = 0;
    virtual uint32_t SimHiddenPauseCount(void) = 0;

    virtual uint32_t TotalPauseCount(void) = 0;
    virtual uint32_t HiddenClockPause(void) = 0;
    virtual uint32_t HiddenClockUnpause(void) = 0;

    virtual void Lock(void) = 0;
    virtual void Unlock(void) = 0;
    virtual intptr_t GetCriticalSection(void) = 0; // Returns cRZCriticalSection*
    virtual void LockGraphics(void) = 0;
    virtual void UnlockGraphics(void) = 0;
    virtual intptr_t GetGraphicsCriticalSection(void) = 0; // Returns cRZCriticalSection*

    virtual void OnIdle(void) = 0;

    virtual bool CanCitySave(void) const = 0;
    virtual cIGZString* GetFilePath(void) = 0;
    virtual void SetFilePath(cIGZString const&) = 0;

    virtual uint32_t GetVersionComponent(uint8_t) const = 0;
    virtual uint32_t GetVersionComponentFromSaveFile(uint8_t) const = 0;
    virtual bool IsWriteCitySaveFileDebug(void) const = 0;
    virtual bool IsReadCitySaveFileDebug(void) const = 0;

    virtual bool StaticInit(cISC3CityDefinition*) = 0;
    virtual bool StaticShutdown(void) = 0;

    virtual cISCNScenarioLayer* ScenarioLayer(void) = 0;
    virtual bool GetAdvisor(uint32_t, cISC3BaseAdvisor*&) = 0;

    virtual void SetTipOfTheDayNeeded(bool) = 0;
    virtual bool IsTipOfTheDayNeeded(void) = 0;
    virtual bool IsFileVersionMoreRecentThan(int32_t, int32_t, int32_t) = 0;
};
