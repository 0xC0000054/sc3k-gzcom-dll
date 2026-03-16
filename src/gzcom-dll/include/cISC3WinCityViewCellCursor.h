/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3WinCityViewCellCursor.h
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
#include "cIGZMessageTarget.h"

class cISC3City;
class cSC3CityBounds;
class cSC3CityCoord;
class cISC3EnumCityViewSelection;

class cISC3WinCityViewCellCursor : public cIGZMessageTarget
{
public:
	virtual bool Init(cISC3City*) = 0;
	virtual bool Shutdown() = 0;

	virtual uint32_t CellCountX() = 0;
	virtual uint32_t CellCountZ() = 0;
	virtual bool InBounds(cSC3CityCoord const&) const = 0;
	virtual bool InBounds(cSC3CityBounds const&) const = 0;
	virtual void SetColor(cSC3CityCoord const&, uint32_t) = 0;
	virtual void SetColor(cSC3CityBounds const&, uint32_t) = 0;
	virtual void GetColor(cSC3CityCoord const&, uint32_t&) = 0;
	virtual void SetPalette(uint32_t) = 0;
	virtual void SetDefaultColor(uint32_t palette, uint32_t color) = 0;
	virtual void GetDefaultColor(uint32_t& palette, uint32_t& color) = 0;

	virtual bool Clear(bool) = 0;
	virtual void SetCell(cSC3CityCoord const&, uint32_t) = 0;
	virtual void SetLine(cSC3CityCoord const&, cSC3CityCoord const&, uint32_t) = 0;
	virtual void SetRect(cSC3CityBounds const&, uint32_t) = 0;
	virtual bool SetEllipse(cSC3CityCoord const&, cSC3CityCoord const&, uint32_t) = 0;
	virtual void SetCellList(cISC3EnumCityViewSelection*, uint32_t, cISC3EnumCityViewSelection*, uint32_t) = 0;
	virtual bool UpdateRegion(cSC3CityBounds const&) = 0;
	virtual bool GetEnumerator(cISC3EnumCityViewSelection**) = 0;
};