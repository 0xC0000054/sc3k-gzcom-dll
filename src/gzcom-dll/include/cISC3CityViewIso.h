/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3CityViewIso.h
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
#include "cISC3CityView.h"

class cISC3CitySpriteManager;

class cISC3CityViewIso : public cISC3CityView
{
public:
	virtual cISC3CitySpriteManager* GetCitySpriteManager() = 0;
	virtual intptr_t GetCitySpriteCellMap() = 0; // Returns cISC3CitySpriteCellMap*
	virtual bool DoScreenShake(int32_t, int32_t, int32_t, int32_t, bool, int32_t) = 0;
	virtual bool IsScreenShaking() = 0;
};