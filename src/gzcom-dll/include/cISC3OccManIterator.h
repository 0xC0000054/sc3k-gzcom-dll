/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3OccManIterator.h
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

class cISC3OccManIteratorTest;
class cISC3Occupant;
class cSC3CityBounds;

static const uint32_t GZIID_cISC3OccManIterator = 0x41bdf76b;

class cISC3OccManIterator : public cIGZUnknown
{
public:
    virtual bool Init(cSC3CityBounds const*, cISC3OccManIteratorTest*) = 0;
    virtual bool Shutdown(void) = 0;

    virtual cISC3Occupant* Reset(void) = 0;
    virtual cISC3Occupant* Current(void) = 0;
    virtual cISC3Occupant* Next(void) = 0;
};
