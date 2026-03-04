/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3CityDefinition.h
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
class cISC3AgentTypeTree;
class cISC3OccupantAttribCache;

class cISC3CityDefinition : public cIGZUnknown
{
public:
    virtual bool Init(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual cISC3AgentTypeTree* GetAgentTypeTree(void) = 0;
    virtual cISC3OccupantAttribCache* GetOccupantAttribCache(void) = 0;
    virtual bool RegisterLayer(uint32_t, uint32_t, uint32_t) = 0; // No-op, always returns false

    virtual uint32_t GetFileType(cIGZString const&) = 0;
    virtual bool ValidateSC2File(cIGZString const&) = 0;
    virtual bool ValidateSCXFile(cIGZString const&) = 0;
    virtual bool ValidateSC3File(cIGZString const&) = 0;
    virtual bool ValidateSNRFile(cIGZString const&) = 0;
};
