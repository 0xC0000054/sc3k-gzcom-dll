/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cIGZRegistry.h
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

class cIGZString;

class cIGZRegistry : public cIGZUnknown
{
public:
    virtual bool Register(cIGZString const&) = 0;
    virtual bool Unregister(cIGZString const&) = 0;

    virtual bool Lookup(const char* category, cIGZString const& key, cIGZString& result) = 0;

    virtual bool MakeRegistryName(const char* category, cIGZString const& key, cIGZString const& value, cIGZString& result) = 0;

    typedef void (*EnumCategoryCallback)(cIGZString const&, cIGZString const&, void*);

    virtual bool EnumCategory(const char* category, EnumCategoryCallback pCallback, void* pContext) = 0;
};
