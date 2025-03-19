#pragma once
#include "cIGZUnknown.h"
#include "cISC3BuildingLayer.h"

class cIGZDate;
class cIGZString;
class cISC3City;
class cISC3CityAgent;
class cISC3CityAgentType;
class cISC3Occupant;
class cISC3OccPersistInfo;

class cISC3Building : public cIGZUnknown
{
public:
    virtual cISC3Occupant* AsISC3Occupant(void) = 0;
    virtual cISC3CityAgent* AsISC3CityAgent(void) = 0;

    virtual bool Init(cGZResourceKey&) = 0;
    virtual bool Init(cISC3OccupantAttrib*) = 0;
    virtual bool Init(cISC3City*, cISC3OccPersistInfo*) = 0;
    virtual void Shutdown(void) = 0;
    virtual bool Save(cISC3City*, cISC3OccPersistInfo&) = 0;
    virtual void Simulate(int32_t) = 0;

    virtual cISC3CityAgentType* AgentType(void) = 0;
    virtual void SetAgentType(cISC3CityAgentType*) = 0;

    virtual bool SetName(cIGZString const&) = 0;
    virtual bool IsNameChangeable(void) = 0;
    virtual bool HasBirthdate(void) const = 0;
    virtual bool GetBirthdate(cIGZDate&) const = 0;
    virtual bool SetBirthdate(cIGZDate const&) = 0;

    virtual void SetOccupancyState(uint32_t) = 0;
    virtual uint32_t GetOccupancyState(void) = 0;
    virtual void SetOccupancyStateFlag(cISC3BuildingLayer::tOccupancyStateFlag) = 0;
    virtual bool GetOccupancyStateFlag(cISC3BuildingLayer::tOccupancyStateFlag) = 0;
    virtual void ClearOccupancyStateFlag(cISC3BuildingLayer::tOccupancyStateFlag) = 0;

    virtual bool PowerRequired(void) = 0;
    virtual cISC3OccupantAttrib* GetBaseAttribData(void) = 0;
};
