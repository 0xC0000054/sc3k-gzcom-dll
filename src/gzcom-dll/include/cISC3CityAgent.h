/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3CityAgent.h
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

class cIGZString;
class cISC3CityAgentType;

class cISC3CityAgent : public cIGZUnknown
{
public:
    virtual bool Simulate(int32_t) = 0;
    virtual int32_t MinimumExecutionInterval(void) = 0;
    virtual bool IsAgentLocking(void) = 0;
    virtual uint32_t TypeId(void) const = 0;

    virtual cISC3CityAgentType* AgentType(void) = 0;
    virtual bool SetAgentType(cISC3CityAgentType*) = 0;

    virtual bool DebugInstanceTag(cIGZString&) = 0;
    virtual bool DebugClassTag(cIGZString&) = 0;
    virtual bool DebugTypeTag(cIGZString&) = 0;
};
