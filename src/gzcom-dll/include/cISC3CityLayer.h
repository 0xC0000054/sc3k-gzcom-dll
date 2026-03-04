/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3CityLayer.h
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

class cGZMessage;
class cIGZDBSegment;
class cIGZString;
class cISC2Importer;
class cISC3City;
class cISC3CityAgentType;
class cISC3CityDefinition;
class cISC3CityLayerManipulator;

class cISC3CityLayer : public cIGZUnknown
{
public:
    virtual bool DoMessage(cGZMessage&) = 0;
    virtual bool DoQueryInfo(cGZMessage&, cIGZUnknown*) = 0;

    virtual bool StaticInit(cISC3CityDefinition*) = 0;
    virtual bool StaticShutdown(void) = 0;

    virtual bool Init(cISC3City*) = 0;
    virtual bool Init(cISC3City*, cISC2Importer*) = 0;
    virtual bool Init(cISC3City*, cIGZDBSegment*) = 0;
    virtual bool Save(cISC3City*, cIGZDBSegment*) = 0;
    virtual bool SimulationBegin(void) = 0;
    virtual bool SimulationEnd(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual bool GetManipulator(cISC3CityAgentType const&, cISC3CityLayerManipulator**, int32_t&) = 0;

    virtual uint32_t GetLayerType(void) = 0;

    virtual bool DebugClassTag(cIGZString&) = 0;
    virtual bool DebugTypeTag(cIGZString&) = 0;
};
