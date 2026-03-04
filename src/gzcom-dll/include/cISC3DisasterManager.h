/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3DisasterManager.h
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

class cIGZDBSegment;
class cISC3City;
class cISC3DisasterLayer;
class cISC3DisasterInstance;

class cISC3DisasterManager : public cIGZUnknown
{
public:
    virtual bool Init(cISC3DisasterLayer*, cISC3City*) = 0;
    virtual bool Shutdown(void) = 0;
    virtual bool Init(cISC3City*, cIGZDBSegment*) = 0;
    virtual bool Save(cISC3City*, cIGZDBSegment*) = 0;
    virtual bool StaticInit(void) = 0;
    virtual bool StaticShutdown(void) = 0;

    virtual bool StopInstance(cISC3DisasterInstance*) = 0;
    virtual bool AttemptDisasterStart(void) = 0;
};
