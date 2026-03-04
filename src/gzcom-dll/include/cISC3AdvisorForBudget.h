/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3AdvisorForBudget.h
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

class cISC3Building;

class cISC3AdvisorForBudget : public cIGZUnknown
{
public:
    virtual uint32_t GetTotalMonthlyBusinessDealIncome(void) = 0;
    virtual uint32_t GetBusinessDealIncomeForBuildingType(uint32_t) = 0;

    virtual bool ActivateBusinessDeal(uint32_t, cISC3Building*) = 0;
    virtual bool RemoveBusinessDeal(uint32_t) = 0;
    virtual void OfferBusinessDeal(uint32_t) = 0;
    virtual bool IsBusinessDealActive(uint32_t) = 0;

    virtual void SetDealEnabled(uint32_t, bool) = 0;
};
