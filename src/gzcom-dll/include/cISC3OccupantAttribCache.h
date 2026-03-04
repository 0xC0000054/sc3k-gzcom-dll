/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3OccupantAttribCache.h
 *
 * Copyright (C) 2024 Nicholas Hayes
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

class cGZResourceKey;
class cIGZResourceKeyList;
class cISC3BuildingAttrib;
class cISC3CityDefinition;
class cISC3OccupantAttrib;
class cISC3OccupantAttribCacheIterator;
class cISC3OccAttribOverRide;

class cISC3OccupantAttribCache : public cIGZUnknown
{
public:
    virtual bool Init(cISC3CityDefinition*) = 0;
    virtual bool Shutdown(void) = 0;

    virtual int32_t Count(void) = 0;

    virtual void GetOccupantAttrib(cGZResourceKey const&, cISC3OccupantAttrib**) = 0;
    virtual void GetBuildingAttrib(cGZResourceKey const&, cISC3BuildingAttrib**) = 0;
    virtual bool GetGenericAttrib(cGZResourceKey const&, uint32_t, void**) = 0;
    virtual bool GetABuildingOfType(uint32_t, uint32_t, cGZResourceKey&) = 0;
    virtual bool GetBuildingAttrib(uint32_t, cISC3BuildingAttrib**) = 0;

    virtual cISC3OccupantAttribCacheIterator* CreateNodeIterator(void) = 0;
    virtual void DeleteNodeIterator(cISC3OccupantAttribCacheIterator*) = 0;

    virtual void AddAttrib(cGZResourceKey const&) = 0;
    virtual bool AddAttribs(cIGZResourceKeyList const&) = 0;
    virtual void PostOccAttribChangedMessage(void) = 0;
    virtual intptr_t ModifyOccupantAttrib(cGZResourceKey const&, cISC3OccAttribOverRide*) = 0;
    virtual bool ResetAllModifiedAttribs(void) = 0;
};
