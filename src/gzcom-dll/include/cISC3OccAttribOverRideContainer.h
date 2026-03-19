/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3OccAttribOverRideContainer.h
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
class cISC3OccAttribOverRide;

class cISC3OccAttribOverRideContainer : public cIGZUnknown
{
public:
	virtual bool Clear() = 0;
	virtual bool GetObject(uint32_t index, cISC3OccAttribOverRide**) const = 0;
	virtual bool GetObject(cGZResourceKey const&, cISC3OccAttribOverRide**) = 0;
	virtual bool PutObject(cISC3OccAttribOverRide*) = 0;
	virtual uint32_t Size() = 0;
	// Returns 0xffffffff if the item was not found
	virtual uint32_t GetIndexForObject(cISC3OccAttribOverRide const*) = 0;
};