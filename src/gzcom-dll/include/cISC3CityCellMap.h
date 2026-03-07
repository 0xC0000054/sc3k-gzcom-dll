/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3CityCellMap.h
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
#include "cISC3CityCellMapBase.h"

class cISC3City;

static const uint32_t GZIID_cISC3CityCellMap_Sint8 = 0x40ace11f;
static const uint32_t GZIID_cISC3CityCellMap_Sint16 = 0xa0ace0fb;
static const uint32_t GZIID_cISC3CityCellMap_Sint32 = 0x40ace0d5;
static const uint32_t GZIID_cISC3CityCellMap_Uint8 = 0xa0ace10a;

template <typename T> class cISC3CityCellMap : public cISC3CityCellMapBase
{
public:
    virtual bool Init(cISC3City*, T const&) = 0;
    virtual bool Shutdown(void) = 0;
    virtual void GetValue(uint32_t, uint32_t, T&) const = 0;
    virtual void SetValue(uint32_t, uint32_t, T const&) = 0;
    virtual void SetAllCells(T const&) = 0;
    virtual void SetValue(uint32_t, uint32_t, uint32_t, uint32_t, T const&) = 0;
};