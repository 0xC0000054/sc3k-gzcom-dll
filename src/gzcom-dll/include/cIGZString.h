/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cIGZString.h
 *
 * Copyright (C) 2024 Nicholas Hayes
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

static const uint32_t GZIID_cIGZString = 105;

class cIGZString : public cIGZUnknown
{
public:
    virtual uint32_t FromChar(char const* data) = 0;
    virtual uint32_t FromChar(char const* data, uint32_t length) = 0;

    virtual char const* ToChar(void) const = 0;
    virtual char const* Data(void) const = 0;

    virtual uint32_t Strlen(void) const = 0;
    virtual bool IsEqual(cIGZString const*) const = 0;
    virtual int32_t Copy(cIGZString const&) = 0;
};
