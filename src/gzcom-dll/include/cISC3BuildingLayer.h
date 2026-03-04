/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3BuildingLayer.h
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

class cGZResourceKey;
class cSC3CityBounds;
class cSC3CityCoord;
class cISC3Building;
class cISC3OccupantAttrib;
struct sIGZRectUint32;

class cISC3BuildingLayer : public cIGZUnknown
{
public:
    typedef uint32_t tOccupancyStateFlag;

    virtual void GetCityCenter(uint32_t&, uint32_t&) = 0;
    virtual uint32_t GetTotalAreaOfBuildings(void) const = 0;
    virtual bool IsBuildable(sIGZRectUint32 const&, bool) const = 0;

    virtual bool CreateBuilding(cGZResourceKey const&, uint32_t, void**) = 0;
    virtual bool CreateBuilding(cISC3OccupantAttrib*, uint32_t, void**) = 0;
    virtual bool CreateBuilding(uint32_t, uint32_t, uint32_t, void**) = 0;

    virtual bool CanPlaceBuilding(cSC3CityCoord const&, cGZResourceKey const&, cSC3CityBounds&, uint32_t&) = 0;
    virtual bool CanPlaceShorelineBuilding(cSC3CityCoord const&, cGZResourceKey const&, cSC3CityBounds&, uint32_t&) = 0;
    virtual bool CanPlacePlumbingBuilding(cSC3CityCoord const&, cGZResourceKey const&, cSC3CityBounds&, uint32_t&) = 0;
    virtual bool CanPlaceSubwayBuilding(cSC3CityCoord const&, cGZResourceKey const&, cSC3CityBounds&, uint32_t&) = 0;
    virtual bool CanPlaceMultiBuilding(cSC3CityCoord const&, cGZResourceKey const&, cGZResourceKey const&, cGZResourceKey const&, cGZResourceKey const&, cSC3CityBounds&, uint32_t&) = 0;

    virtual bool PlaceBuilding(cSC3CityCoord const&, cGZResourceKey const&, cSC3CityBounds&, uint32_t&, bool) = 0;
    virtual bool PlaceShorlineBuilding(cSC3CityCoord const&, cGZResourceKey const&, cSC3CityBounds&, uint32_t&, bool) = 0;
    virtual bool PlacePlumbingBuilding(cSC3CityCoord const&, cGZResourceKey const&, cSC3CityBounds&, uint32_t&, bool) = 0;
    virtual bool PlaceSubwayBuilding(cSC3CityCoord const&, cGZResourceKey const&, cSC3CityBounds&, uint32_t&, bool) = 0;
    virtual bool PlaceMultiBuilding(cSC3CityCoord const&, cGZResourceKey const&, cGZResourceKey const&, cGZResourceKey const&, cGZResourceKey const&, cSC3CityBounds&, uint32_t&, bool) = 0;

    virtual bool DoPlaceBuildingTool(cGZResourceKey const&, bool, bool) = 0;
    virtual bool DoPlaceBuildingTool(cISC3OccupantAttrib*, bool, bool) = 0;
    virtual bool DoPlaceBuildingTool(uint32_t, uint32_t, bool, bool) = 0;
    virtual bool InsertBuilding(cISC3Building*) = 0;
    virtual bool RemoveBuilding(cISC3Building*) = 0;
    virtual bool CheckOccupantTracking(uint32_t) = 0;

    virtual intptr_t GetDefaultAttribData(cISC3Building*) = 0;
    virtual intptr_t GetDefaultSpriteData(cISC3Building*) = 0;
    virtual bool StartTrackingOccupantCount(uint32_t) = 0;
    virtual bool CreatePlacementTool(cGZResourceKey const&, bool, bool, uint32_t, void**) = 0;
};
