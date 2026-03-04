/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3OrdinanceLayer.h
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

class cISC3OrdinanceLayer : public cIGZUnknown
{
public:
    struct cISC3OrdinanceStruct
    {
        uint32_t unknown1;
        uint32_t unknown2;
        uint32_t unknown3;
        uint32_t unknown4;
    };

    virtual bool QueryOrdinanceOn(uint32_t) = 0;
    virtual bool QueryOrdinanceAvailable(uint32_t) = 0;
    virtual bool QueryOrdinanceAvailableAndOff(uint32_t) = 0;

    virtual uint32_t TotalOrdinancesOn(void) = 0;
    virtual bool SetOrdinance(uint32_t, bool) = 0;
    virtual bool MakeOrdinanceAvailable(uint32_t) = 0;

    virtual uint32_t GetOrdinanceListSize(uint32_t) = 0;
    virtual uint32_t GetOridnanceListSize(int32_t) = 0;
    virtual uint32_t GetOrdinanceList(cISC3OrdinanceLayer::cISC3OrdinanceStruct**, uint32_t) = 0;

    virtual uint32_t GetOrdinanceCost(uint32_t) = 0;
    virtual uint32_t GetTotalMonthlyOrdinanceExpense(void) = 0;
    virtual uint32_t GetTotalMonthlyOrdinanceIncome(void) = 0;
};
