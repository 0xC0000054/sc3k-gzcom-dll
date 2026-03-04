/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3Building.h
 *
 * Copyright (C) 2025 Nicholas Hayes
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, under
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <https://www.gnu.org/licenses/>.
 */

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
