/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3AgentTypeTree.h
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

class cISC3AgentTypeTreeIterator;
class cISC3CityAgentType;

class cISC3AgentTypeTree : public cIGZUnknown
{
public:
    virtual bool Init(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual uint32_t Count(void) = 0;

    virtual intptr_t GetRootNode(void) = 0;
    virtual intptr_t GetNode(uint32_t) = 0;

    virtual bool IsAncestor(uint32_t, uint32_t) = 0;
    virtual bool IsAncestor(uint32_t, uint32_t, uint32_t&) = 0;
    virtual bool CreateNodeIterator(cISC3AgentTypeTreeIterator**) = 0;
    virtual void DebugDumpTree(cISC3CityAgentType*) = 0;
};
