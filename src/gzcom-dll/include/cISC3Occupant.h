/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3Occupant.h
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
class cGZResourceKey;
class sIGZRectUint32;
class cIGZString;
class cISC3City;
class cISC3CityAgentType;
class cISC3CitySpriteAttrib;
class cISC3CitySpriteInst;
class cSC3CityBounds;
class cSC3CityCoord;
class cISC3OccupantAttrib;
class cISC3OccPersistInfo;
class cISC3WinQuery;

class cISC3Occupant : public cIGZUnknown
{
public:
    virtual bool DoMessage(cGZMessage&) = 0;
    virtual bool DoQueryInfo(cGZMessage&, cIGZUnknown*) = 0;
    virtual bool Init(cISC3OccupantAttrib*) = 0;
    virtual bool Init(cGZResourceKey&) = 0;
    virtual bool Init(cISC3City*, cISC3OccPersistInfo*) = 0;
    virtual bool Shutdown(void) = 0;
    virtual bool Save(cISC3City*, cISC3OccPersistInfo&) = 0;

    virtual bool IsInCity(void) const = 0;
    virtual bool TestIsInCityFlag(uint32_t) const = 0;
    virtual uint32_t GetIsInCityFlag(void) const = 0;
    virtual void SetIsInCityFlag(uint32_t) = 0;
    virtual void ClearIsInCityFlag(uint32_t) = 0;
    virtual bool IsGeomFlag(uint32_t) = 0;
    virtual void SetGeomFlag(uint32_t) = 0;
    virtual void ClearGeomFlag(uint32_t) = 0;
    virtual uint32_t GetGeomFlag(void) = 0;
    virtual uint32_t GetOccLayerFlag(void) = 0;
    virtual void SetOccLayerFlag(uint32_t) = 0;

    virtual uint32_t MajorType(void) const = 0;
    virtual uint32_t SubTypeInfo(void) const = 0;
    virtual uint32_t GetSubTypeData(uint32_t) = 0;
    virtual uint8_t AnimType(void) const = 0;
    virtual void AnimStart(void) = 0;
    virtual void AnimStop(void) = 0;
    virtual bool CanSimRemove(void) const = 0;
    virtual void SetSimRemove(bool) = 0;
    virtual bool CanUserRemove(void) const = 0;
    virtual void SetUserRemove(bool) = 0;

    virtual bool GetName(cIGZString&) = 0;
    virtual cISC3OccupantAttrib* GetAttribData(void) = 0;
    virtual bool GetSubSystemData(uint32_t, void**) = 0;
    virtual uint32_t TypeId(void) const = 0;
    virtual cISC3CityAgentType* CityAgentType(void) = 0;
    virtual bool CreateQueryDialog(cISC3WinQuery**) = 0;

    virtual uint32_t GetSoundObjectId(int32_t) = 0;
    virtual cISC3CitySpriteAttrib* GetSpriteAttrib(uint32_t) = 0;
    virtual cISC3CitySpriteAttrib* GetSpriteAttrib(void) = 0;
    virtual cISC3CitySpriteInst* GetSpriteInst(uint32_t) = 0;
    virtual cISC3CitySpriteInst* GetSpriteInst(void) = 0;
    virtual uint32_t GetDefaultLayerFlag(void) const = 0;
    virtual void SetDefaultLayerFlag(uint32_t) = 0;

    virtual void GetOrientation(uint16_t&, uint16_t&, uint16_t&) const = 0;
    virtual bool GetRotationFlag(uint32_t&) const = 0;
    virtual void GetLocation(cSC3CityCoord&) const = 0;
    virtual void GetLocationInCellCoords(uint32_t&, uint32_t&) const = 0;
    virtual uint8_t GetAlt(void) const = 0;
    virtual void GetLocationInAnimCellCoords(uint32_t&, uint32_t&) const = 0;
    virtual uint32_t GetAltAnimCells(void) const = 0;
    virtual void GetBounds(cSC3CityBounds&) const = 0;
    virtual void GetBoundingRectInCellCoords(sIGZRectUint32&) const = 0;
    virtual uint32_t SizeInCellsX(void) const = 0;
    virtual uint32_t SizeInCellsZ(void) const = 0;
    virtual uint32_t SizeInCellsY(void) const = 0;
    virtual uint32_t SizeInAnimCellsZ(void) const = 0;
    virtual uint32_t SizeInAnimCellsX(void) const = 0;
    virtual uint32_t SizeInAnimCellsY(void) const = 0;
    virtual void SetLocation(cSC3CityCoord const&) = 0;
    virtual void SetLocationInCellCoords(uint32_t, uint32_t) = 0;
    virtual void SetAlt(uint8_t) = 0;

    virtual bool GetMarkBit(void) const = 0;
    virtual void SetMarkBit(bool) = 0;
    virtual void Tick(uint32_t) = 0;
    virtual void SetSubTypeInfo(uint8_t) = 0;
    virtual void SetOrientation(uint16_t, uint16_t, uint16_t) = 0;
    virtual void SetRotationFlag(uint32_t) = 0;
    virtual uint32_t GetMemUse(void) const = 0;
    virtual bool DebugInstanceTag(cIGZString&) = 0;
    virtual bool DebugClassTag(cIGZString&) = 0;
    virtual bool DebugTypeTag(cIGZString&) = 0;
};
