/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3CityChangeReceiver.h
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

class cISC3Occupant;
class cSC3CityCoord;

static const uint32_t GZIID_cISC3CityChangeReceiver = 0x215b29c5;

class cISC3CityChangeReceiver : public cIGZUnknown
{
public:
    virtual bool OccupantInserted(uint32_t, cISC3Occupant*) = 0;
    virtual bool OccupantRemoved(uint32_t, cISC3Occupant*) = 0;
    virtual bool OccupantMoved(uint32_t, cISC3Occupant*, cSC3CityCoord const&) = 0;
    virtual bool OccupantChanged(uint32_t, cISC3Occupant*, int32_t, void*) = 0;
    virtual bool CellChangedAll(uint32_t) = 0;
    virtual bool CellChanged(uint32_t, uint32_t, uint32_t) = 0;
    virtual bool CellChanged(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) = 0;
};
