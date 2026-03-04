/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cIGZResourceKeyList.h
 *
 * Copyright (C) 2025 Nicholas Hayes
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

static const uint32_t GZCLSID_cIGZResourceKeyList = 0x801ed267;
static const uint32_t GZIID_cIGZResourceKeyList = 0x199656;

class cIGZResourceKeyList : public cIGZUnknown
{
public:
    virtual bool Insert(cGZResourceKey const&) = 0;
    virtual bool Insert(cIGZResourceKeyList const&) = 0;

    virtual bool Erase(cGZResourceKey const&) = 0;
    virtual bool EraseAll(void) = 0;

    virtual void EnumKeys(void (*)(cGZResourceKey const&, void*), void*) const = 0;

    virtual bool IsPresent(cGZResourceKey const&) = 0;
    virtual uint32_t Size(void) const = 0;
    virtual cGZResourceKey* GetKey(uint32_t) = 0;
};
