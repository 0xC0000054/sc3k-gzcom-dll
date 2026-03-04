/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3DirtBag.h
 *
 * Copyright (C) 2026 Nicholas Hayes
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

class cGZMessage;
class cIGZDBSegment;
class cIGZString;
class cISC2Importer;
class cISC3City;
class cISC3CityAgentType;
class cSC3CityBounds;
class cISC3CityDefinition;
class cISC3EnumCityViewSelection;
class cISC3CityLayerManipulator;
class cISC3CitySpriteInst;
class cRZRect;
class sIGZPointXZUint32;

class cISC3DirtBag : public cIGZUnknown
{
public:
    virtual bool DoMessage(cGZMessage&) = 0;
    virtual bool DoQueryInfo(cGZMessage&, cIGZUnknown*) = 0;
    virtual bool StaticInit(cISC3CityDefinition*) = 0;
    virtual bool StaticShutdown(void) = 0;
    virtual bool Init(cISC3City*) = 0;
    virtual bool Init(cISC3City*, cISC2Importer*) = 0;
    virtual bool Init(cISC3City*, cIGZDBSegment*) = 0;
    virtual bool Save(cISC3City*, cIGZDBSegment*) = 0;
    virtual bool SimulationBegin(void) = 0;
    virtual bool SimulationEnd(void) = 0;
    virtual bool Shutdown(void) = 0;
    virtual bool GetManipulator(cISC3CityAgentType const&, cISC3CityLayerManipulator**, int32_t&) = 0;
    virtual uint32_t GetLayerType(void) = 0;
    virtual bool DebugClassTag(cIGZString&) = 0;
    virtual bool DebugTypeTag(cIGZString&) = 0;

    virtual void GetVertexAltitude(uint32_t, uint32_t, uint8_t&) const = 0;
    virtual void GetVertexAltitudeDirt(uint32_t, uint32_t, uint8_t&) const = 0;
    virtual void GetVertexAltitudeWater(uint32_t, uint32_t, uint8_t&) const = 0;
    virtual bool IsWater(uint32_t, uint32_t) const = 0;
    virtual uint8_t CellWaterVertCount(uint32_t, uint32_t) const = 0;
    virtual bool IsRealWater(uint32_t, uint32_t) const = 0;
    virtual uint8_t GetGlobalSeaLevel(void) const = 0;
    virtual void SetGlobalSeaLevel(uint8_t) = 0;
    virtual void GetVertexLight(uint32_t, uint32_t, uint8_t&) const = 0;
    virtual void GetDirtClod(uint8_t, uint32_t, uint32_t, bool, cISC3CitySpriteInst**, uint8_t&, uint8_t) const = 0;
    virtual void GetDirtClodSingle(uint8_t, uint16_t, uint32_t, uint32_t, bool, cISC3CitySpriteInst**, uint8_t&) const = 0;
    virtual void GetDirtClodEdge(uint32_t, uint32_t, bool, bool, cISC3CitySpriteInst**, uint8_t&) const = 0;
    virtual void RegenPalette(uint8_t) = 0;

    virtual bool GetQueryString(uint32_t, uint32_t) const = 0;
    virtual bool SetVertexAltitude(uint32_t, uint32_t, uint8_t) = 0;
    virtual bool SetVertexAltitude(uint32_t, uint32_t, uint32_t, uint32_t, uint8_t) = 0;
    virtual bool SetWaterTable(uint32_t, uint32_t, uint8_t, bool) = 0;
    virtual bool SetWaterTable(uint32_t, uint32_t, uint32_t, uint32_t, uint8_t) = 0;
    virtual bool InitFloraLevel(uint32_t, uint32_t, uint8_t) = 0;
    virtual bool GetGrid(void) const = 0;
    virtual void SetGrid(bool) = 0;

    virtual void Tick(int32_t, int32_t, cRZRect const&, uint32_t) = 0;
    virtual bool GenerateAltFromBMP(cIGZString&) = 0;
    virtual bool RecalcSaltWater(void) = 0;
    virtual uint32_t CellCountX(void) const = 0;
    virtual uint32_t CellCountZ(void) const = 0;
    virtual uint32_t VertexCountX(void) const = 0;
    virtual uint32_t VertexCountZ(void) const = 0;
    virtual uint32_t MinAltitudeAllowed(void) const = 0;
    virtual uint32_t MaxAltitudeAllowed(void) const = 0;
    virtual uint32_t MaxAltitudeDeltaAllowed(void) const = 0;
    virtual uint32_t GetAverageAltitude(void) const = 0;
    virtual float AltitudeScale(void) const = 0;
    virtual bool InCellBounds(uint32_t, uint32_t) const = 0;
    virtual bool InCellBounds(uint32_t, uint32_t, uint32_t, uint32_t) const = 0;
    virtual bool InVertexBounds(uint32_t, uint32_t) const = 0;
    virtual bool InVertexBounds(uint32_t, uint32_t, uint32_t, uint32_t) const = 0;
    virtual bool IsValidVertexAltitude(uint8_t) const = 0;
    virtual bool IsValidVertexLight(uint8_t) const = 0;
    virtual uint8_t AltitudeMax(void) const = 0;
    virtual uint8_t AltitudeMin(void) const = 0;
    virtual uint8_t MaxAltitudeDelta(void) const = 0;

    virtual bool InstallFunctionFilter(bool (*)(cSC3CityBounds const&, uint32_t, int32_t, void*), void*, bool) = 0;
    virtual bool CanRaiseTerrain(cSC3CityBounds const&, cSC3CityBounds&, uint32_t&) const = 0;
    virtual bool CanLowerTerrain(cSC3CityBounds const&, cSC3CityBounds&, uint32_t&) const = 0;
    virtual bool CanLevelTerrain(cSC3CityBounds const&, uint8_t, cSC3CityBounds&, uint32_t&) const = 0;
    virtual bool GetOptimalLevel(cSC3CityBounds const&, uint8_t&, cSC3CityBounds&, uint32_t&) const = 0;
    virtual bool CanPrepareForRoad(cISC3EnumCityViewSelection*, cSC3CityBounds&, uint32_t&) const = 0;
    virtual bool CanPrepareForHighway(cISC3EnumCityViewSelection*, cSC3CityBounds&, uint32_t&) const = 0;
    virtual bool CanPlaceWater(cSC3CityBounds const&, cSC3CityBounds&, uint32_t&) const = 0;
    virtual bool CanPlaceWater(cISC3EnumCityViewSelection*, cSC3CityBounds&, uint32_t&) const = 0;
    virtual bool CanSetupZone(cSC3CityBounds const&, uint32_t&, bool) const = 0;
    virtual bool RaiseTerrain(cSC3CityBounds const&, cSC3CityBounds&, uint32_t&, bool) = 0;
    virtual bool LowerTerrain(cSC3CityBounds const&, cSC3CityBounds&, uint32_t&, bool) = 0;
    virtual bool LevelTerrain(cSC3CityBounds const&, uint8_t, cSC3CityBounds&, uint32_t&, bool) = 0;
    virtual bool PrepareForRoad(cISC3EnumCityViewSelection*, cSC3CityBounds&, uint32_t&, bool) = 0;
    virtual bool PrepareForHighway(cISC3EnumCityViewSelection*, cSC3CityBounds&, uint32_t&, bool) = 0;
    virtual bool PlaceWater(cSC3CityBounds const&, cSC3CityBounds&, uint32_t&, bool) = 0;
    virtual bool PlaceWater(cISC3EnumCityViewSelection*, cSC3CityBounds&, uint32_t&, bool) = 0;
    virtual bool SetupZone(cSC3CityBounds const&, uint32_t&, bool, bool) = 0;
    virtual void ResetChanges(void) const = 0;
    virtual void MarkVertexChanged(uint32_t, uint32_t) const = 0;
    virtual void MarkCellChanged(uint32_t, uint32_t) const = 0;
    virtual bool ChangedByLastOperation(uint32_t, uint32_t) const = 0;
    virtual void LockUpdates(bool) = 0;
    virtual void RecomputeSeaportMap(void) = 0;
    virtual bool Distance(uint32_t, uint32_t, uint32_t&) const = 0;
    virtual bool GetWaterPath(uint32_t, uint32_t, uint32_t, sIGZPointXZUint32*, uint32_t&) const = 0;
    virtual bool GetPathGranularity(void) const = 0; // No-op
    virtual void BlockCell(uint32_t, uint32_t, bool) = 0;
    virtual bool IsCellBlocked(uint32_t, uint32_t) const = 0;
    virtual bool IsDeepWaterPresent(void) = 0;
    virtual bool IsNeighborPresent(uint8_t) const = 0;
};
