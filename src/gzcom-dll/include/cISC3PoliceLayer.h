/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3PoliceLayer.h
 *
 * Copyright (C) 2026 Nicholas Hayes
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
#include "cISC3CityCellMap.h"

class cISC3Occupant;

class cISC3PoliceLayer : public cISC3CityCellMap<uint8_t>
{
public:
	virtual bool DispatchCrew(uint32_t, uint32_t) = 0;
	virtual bool RevokeDispatch(uint32_t, uint32_t) = 0;
	virtual bool RevokeAllDispatches() = 0;

	virtual uint32_t GetTotalCityPoliceUpkeep() = 0;
	virtual void SetFundingPercentage(uint8_t) = 0;
	virtual bool IsOnStrike() = 0;
	virtual uint32_t ChanceOfStrike() = 0;
	virtual void EndStrike() = 0;
	virtual bool GetStrikingBuildings(cISC3Occupant**, uint32_t, uint32_t&) = 0;

	virtual uint32_t GetAverageCoverage() = 0;
	virtual uint32_t GetPercentCoverage() = 0;
	virtual uint32_t GetTotalJailCapacity() = 0;
	virtual uint32_t GetInmatePopulation() = 0;
	virtual uint32_t GetCriminalsAtLarge() = 0;
};