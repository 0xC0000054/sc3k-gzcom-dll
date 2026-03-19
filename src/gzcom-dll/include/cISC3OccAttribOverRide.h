/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3OccAttribOverRide.h
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

class cGZResourceKey;
class cIGZString;
class cISC3CitySpriteAttrib;

class cISC3OccAttribOverRide : public cIGZUnknown
{
public:
	virtual cGZResourceKey* Key() const = 0;

	virtual void SetName(cIGZString const&) = 0;
	virtual void SetArchitectName(cIGZString const&) = 0;
	virtual void SetDescription(cIGZString const&) = 0;
	virtual void SetLotSize(uint8_t) = 0;
	virtual void SetSpriteAttribKey(cGZResourceKey const&) = 0;
	virtual bool GetName(cIGZString&) = 0;
	virtual bool GetArchitectName(cIGZString&) = 0;
	virtual uint8_t GetLotSize() = 0;
	virtual cISC3CitySpriteAttrib* GetSpriteAttrib(uint32_t) = 0;
	virtual cISC3CitySpriteAttrib* GetSpriteAttrib() = 0;
	virtual void SetAuthorSerialNumber(cIGZString*) = 0;
	virtual bool GetAuthorSerialNumber(cIGZString**) = 0;
	virtual void SetGUID(uint32_t) = 0;
	virtual bool GetGUID(uint32_t&) = 0;
};