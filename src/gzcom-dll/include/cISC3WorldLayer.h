/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3WorldLayer.h
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

class cISC3CityAgent;
class cISC3CityLayer;

class cISC3WorldLayer : public cIGZUnknown
{
public:
    virtual cISC3CityLayer* AsISC3CityLayer(void) = 0;
    virtual cISC3CityAgent* AsISC3CityAgent(void) = 0;

    virtual uint32_t GetWorldPopulation(void) = 0;
    virtual uint32_t GetGlobalSeaLevel(void) = 0;
    virtual intptr_t GetUnemploymentHistory(void) = 0; // Returns cISC3GraphInfo*
};
