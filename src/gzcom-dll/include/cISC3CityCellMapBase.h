/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3CityCellMapBase.h
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

class cIGZDBSerialRecord;

static const uint32_t GZIID_cISC3CityCellMapBase = 0x817ab319;

class cISC3CityCellMapBase : public cIGZUnknown
{
public:
    virtual uint32_t CellCountX(void) const = 0;
    virtual uint32_t CellCountZ(void) const = 0;
    virtual void GetValueSint32(uint32_t, uint32_t, int32_t&) const = 0;
    virtual bool InBounds(uint32_t, uint32_t) const = 0;
    virtual bool InBounds(uint32_t, uint32_t, uint32_t, uint32_t) const = 0;
    virtual bool ValidRect(uint32_t, uint32_t, uint32_t, uint32_t) const = 0;
    virtual bool SerialRead(cIGZDBSerialRecord&) = 0;
    virtual bool SerialWrite(cIGZDBSerialRecord&) const = 0;
};