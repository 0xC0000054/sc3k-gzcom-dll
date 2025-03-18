#pragma once
#include "cIGZUnknown.h"

class cGZResourceKey;
class cIGZDBSerialRecord;
class cISC3City;
class cISC3BuildingAttrib;
class cISC3ZoneDeveloper;
class cSC3CityBounds;
struct sIGZPointXZUint32;
struct sIGZRectUint32;

class cISC3ZoneLayer : public cIGZUnknown
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
    virtual bool Init(cISC3City*, uint8_t const&) = 0;
    virtual bool Shutdown(void) = 0;

    virtual void GetValue(uint32_t, uint32_t, uint8_t&) const = 0;
    virtual void SetValue(uint32_t, uint32_t, uint8_t const&) = 0;
    virtual void SetAllCells(uint8_t const&) = 0;
    virtual void SetValue(uint32_t, uint32_t, uint32_t, uint32_t, uint8_t const&) = 0;

    virtual uint32_t GetZoneCount(uint8_t) = 0;
    virtual uint32_t GetUndevelopedTileCount(void) = 0;
    virtual uint32_t GetUndevelopedTileCount(uint8_t) = 0;
    virtual uint32_t GetDevelopmentFailureCount(uint8_t, int32_t /*cISC3ZoneLayer::tDevResult*/) = 0;
    virtual uint32_t GetAbandonedTileCount(void) = 0;

    virtual bool RegisterZoneDeveloper(uint8_t, cISC3ZoneDeveloper*, uint32_t) = 0;
    virtual bool UnregisterZoneDeveloper(uint8_t) = 0;
    virtual cISC3ZoneDeveloper* GetZoneDeveloper(uint8_t) = 0;

    virtual bool PlaceBuilding(cISC3BuildingAttrib*, sIGZPointXZUint32 const&, int32_t /*cISC3BuildingLayer::tOccupancyStateFlag*/, uint16_t, bool) = 0;
    virtual bool PlaceBuilding(cGZResourceKey const&, sIGZPointXZUint32 const&, int32_t /*cISC3BuildingLayer::tOccupancyStateFlag*/, uint16_t, bool) = 0;
    virtual bool IsNearTransport(sIGZPointXZUint32 const&, uint32_t) = 0;
    virtual uint32_t GetRoadCount(sIGZPointXZUint32 const&, sIGZPointXZUint32 const&) = 0;
    virtual void FindBuildableRect(sIGZRectUint32&, uint32_t, uint32_t, uint32_t, uint8_t, uint32_t, bool) = 0;

    virtual uint32_t GetFilledDemand(uint32_t) = 0;
    virtual void AddToFilledDemand(uint32_t, int32_t) = 0;

    virtual bool GetZoneColor(uint32_t, uint32_t, uint8_t&, uint16_t&) = 0;
    virtual bool CanZone(int32_t, cSC3CityBounds const&, int32_t&) = 0;
    virtual bool PlaceZone(int32_t, cSC3CityBounds const&, int32_t&, bool) = 0;
    virtual bool NerdsRule(void) = 0;
    virtual void ReadZoneDeveloperDescriptions(bool) = 0;
};
