/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3CitySpriteManager.h
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

class cISC3City;
class cSC3CityBounds;
class cSC3CityCoord;
class cISC3CitySpriteCellMap;
class cISC3CitySpriteInst;
class cISC3Occupant;
class cISC3OccupantManager;

class cISC3CitySpriteManager : public cIGZUnknown
{
public:
	virtual bool Init(cISC3City*, cISC3CitySpriteCellMap*) = 0;
	virtual bool Shutdown() = 0;

	virtual void GetViewID(int&) const = 0;
	virtual void SetViewID(int, bool) = 0;
	virtual void SetCityViewFlag(uint32_t, bool, bool) = 0;
	virtual bool GetCityViewFlag(uint32_t) const = 0;
	virtual void SetCityViewFlags(uint32_t, bool) = 0;
	virtual uint32_t GetCityViewFlags() const = 0;
	virtual bool TestCityViewFlags(uint32_t) const = 0;
	virtual void ClearCityViewFlags() = 0;

	virtual bool OccupantInserted(uint32_t, cISC3Occupant*) = 0;
	virtual bool OccupantRemoved(uint32_t, cISC3Occupant*) = 0;
	virtual bool OccupantMoved(uint32_t, cISC3Occupant*, cSC3CityCoord const&) = 0;
	virtual bool OccupantChanged(uint32_t, cISC3Occupant*, int) = 0;
	virtual bool OccupantChanged(uint32_t, cISC3Occupant*, int, void*) = 0;

	virtual bool GetUnalignedOccupantsInVolume(cSC3CityBounds const&, cISC3Occupant**, uint32_t&) = 0;
	virtual bool InsertCellAlignedSprite(cISC3Occupant*, bool) const = 0;
	virtual bool RemoveCellAlignedSprite(cISC3Occupant*) const = 0;
	virtual bool RemoveAndInsertCellAlignedSprites(cISC3Occupant* pSpriteToRemove, cISC3Occupant* pSpriteToInsert) const = 0;
	virtual bool ChangeCellAlignedSprite(cISC3Occupant*, uint32_t, void*, uint32_t) const = 0;
	virtual bool ChangeCellAlignedSpriteInst(cSC3CityCoord const&, uint32_t, void*) const = 0;
	virtual bool InsertUnalignedSprite(cISC3Occupant*, int, uint32_t) const = 0;
	virtual bool InsertUnalignedSprite(cISC3Occupant*, int, int, int, int, uint32_t) const = 0;
	virtual bool RemoveUnalignedSprite(cISC3Occupant*) const = 0;
	virtual bool RemoveUnalignedSprite(int, int, int) const = 0;
	virtual bool MoveUnalignedSprite(cISC3Occupant*, cSC3CityCoord const&) const = 0;
	virtual bool MoveUnalignedSprite(cISC3Occupant*, int, int, int, int, int, int) const = 0;
	virtual bool ChangeUnalignedSprite(cISC3Occupant*, uint32_t, void*) const = 0;
	virtual bool ChangeUnalignedSprite(cISC3Occupant*, cSC3CityCoord const&, uint32_t, void*) const = 0;
	virtual bool ChangeUnalignedSprite(cISC3Occupant*, int, int, uint32_t, void*) const = 0;
	virtual bool InsertUnalignedSpriteInst(cISC3CitySpriteInst*, cSC3CityCoord const&, int, uint32_t) const = 0;
	virtual bool RemoveUnalignedSpriteInst(cISC3CitySpriteInst*, cSC3CityCoord const&) const = 0;
	virtual bool MoveUnalignedSpriteInst(cISC3CitySpriteInst*, cSC3CityCoord const&, cSC3CityCoord const&) const = 0;
	virtual bool ChangeUnalignedSpriteInst(cISC3CitySpriteInst*, cSC3CityCoord const&, uint32_t, void*) const = 0;

	virtual cISC3OccupantManager* GetCurrentOccupantManager() = 0;
};