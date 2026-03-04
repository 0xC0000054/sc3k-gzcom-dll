/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3AdvisorForUtilities.h
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

class cISC3BaseAdvisor;
class cISC3CityAgent;

class cISC3AdvisorForUtilities : public cIGZUnknown
{
public:
    virtual cISC3BaseAdvisor* AsISC3BaseAdvisor(void) = 0;
    virtual cISC3CityAgent* AsISC3CityAgent(void) = 0;

    virtual bool CheckPowerBuildingAvailibility(uint32_t) = 0;
    virtual bool CheckWaterBuildingAvailibility(uint32_t) = 0;

    virtual float GetPowerFundingPercentage(void) = 0;

    virtual bool DisableNewDealsOfType(int32_t) = 0;
    virtual bool EnableNewDealsOfType(int32_t) = 0;
};
