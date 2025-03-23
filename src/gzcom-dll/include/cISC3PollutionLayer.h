#pragma once
#include "cIGZUnknown.h"

class cIGZDBSerialRecord;
class cISC3City;
class cISC3CityAgentType;
class cISC3CityLayerManipulator;

class cISC3PollutionLayer : public cIGZUnknown
{
public:
    virtual uint32_t CellCountX(void) const = 0;
    virtual uint32_t CellCountZ(void) const = 0;
    virtual void GetValueSint32(uint32_t, uint32_t, int32_t&) const = 0;
    virtual bool InBounds(uint32_t, uint32_t) const = 0;
    virtual bool InBounds(uint32_t, uint32_t, uint32_t, uint32_t) const = 0;
    virtual bool ValidRect(uint32_t, uint32_t, uint32_t, uint32_t) const = 0;
    virtual bool SerialRead(cIGZDBSerialRecord&) = 0;
    virtual bool SerialWrite(cIGZDBSerialRecord&) const = 0;
    virtual bool Init(cISC3City*, uint32_t const&) = 0;
    virtual bool Shutdown(void) = 0;
    virtual void GetValue(uint32_t, uint32_t, uint32_t&) const = 0;
    virtual void SetValue(uint32_t, uint32_t, uint32_t const&) = 0;
    virtual void SetAllCells(uint32_t const&) = 0;
    virtual void SetValue(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t const&) = 0;
    virtual bool Init(cISC3City*) = 0;
    virtual bool SimulationBegin(void) = 0;
    virtual bool GetManipulator(cISC3CityAgentType const&, cISC3CityLayerManipulator**, int32_t&) = 0;

    virtual bool IsSaltWater(uint32_t, uint32_t) const = 0;
    virtual bool IsRadioactive(uint32_t, uint32_t) const = 0;
    virtual void GetAirValue(uint32_t, uint32_t, uint32_t&) const = 0;
    virtual void GetWaterValue(uint32_t, uint32_t, uint32_t&) const = 0;
    virtual void GetGarbageValue(uint32_t, uint32_t, uint32_t&) const = 0;
    virtual bool IsAirPolluted(uint32_t, uint32_t) const = 0;
    virtual bool IsWaterPolluted(uint32_t, uint32_t) const = 0;
    virtual bool IsGarbageAccumulated(uint32_t, uint32_t) const = 0;
    virtual bool IsGarbageUncollected(void) = 0;
    virtual int32_t GetTotalGarbageUncollected(void) = 0;
    virtual int32_t GetAverageAirValue(void) const = 0;
    virtual int32_t GetAverageWaterValue(void) const = 0;
    virtual int16_t GetAverageGarbageValue(void) const = 0;
    virtual int32_t GetMaxExpectedAirValue(void) const = 0;
    virtual int32_t GetMaxExpectedWaterValue(void) const = 0;
    virtual int32_t GetMaxExpectedGarbageValue(void) const = 0;
    virtual void SetIsSaltWater(uint32_t, uint32_t, bool) = 0;
    virtual void SetIsRadioactive(uint32_t, uint32_t, bool) = 0;
    virtual void SetAirValue(uint32_t, uint32_t, uint32_t) = 0;
    virtual void SetWaterValue(uint32_t, uint32_t, uint32_t) = 0;
    virtual void SetGarbageValue(uint32_t, uint32_t, uint32_t) = 0;

    virtual int32_t GetTotalLandfillCapacity(void) = 0;
    virtual int32_t GetAvailableLandfillCapacity(void) = 0;
    virtual int32_t GetDailyIncineratorCapacity(void) = 0;
    virtual int32_t GetDailyWasteToEnergyCapacity(void) = 0;
    virtual int32_t GetRecyclingCenterEffect(void) = 0;
    virtual int64_t GetTotalGarbageProduced(void) = 0;
    virtual int64_t GetTotalGarbageImported(void) = 0;
    virtual int64_t GetTotalGarbageExported(void) = 0;
    virtual int64_t GetTotalGarbageRecycled(void) = 0;
    virtual int64_t GetTotalGarbageIncinerated(void) = 0;
    virtual int64_t GetTotalGarbageConvertedToEnergy(void) = 0;
    virtual int64_t GetTotalGarbageLandfilled(void) = 0;
    virtual int64_t GetTotalGarbageProducedLastMonth(void) = 0;
    virtual int64_t GetTotalGarbageImportedLastMonth(void) = 0;
    virtual int64_t GetTotalGarbageExportedLastMonth(void) = 0;
    virtual int64_t GetTotalGarbageRecycledLastMonth(void) = 0;
    virtual int64_t GetTotalGarbageIncineratedLastMonth(void) = 0;
    virtual int64_t GetTotalGarbageConvertedToEnergyLastMonth(void) = 0;
    virtual int64_t GetTotalGarbageLandfilledLastMonth(void) = 0;

    virtual int32_t GetGarbageBuildingCapacity(uint32_t) = 0;
    virtual int32_t GetAgingWaterTreatmentCount(void) = 0;
    virtual int32_t GetAgingIncineratorCount(void) = 0;
    virtual int32_t GetAgingRecyclingCenterCount(void) = 0;
    virtual float GetGarbageScalingFactor(void) = 0;

    virtual bool IsActiveLandfill(uint32_t, uint32_t) = 0;
    virtual void SetIsActiveLandfill(uint32_t, uint32_t, bool) = 0;
    virtual void GarbagePutInLandfill(uint32_t) = 0;
};
