/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3BudgetLayer.h
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

class cISC3DepartmentBudget;

class cISC3BudgetLayer : public cIGZUnknown
{
public:
    virtual void SetTotalFunds(int64_t) = 0;
    virtual int64_t GetTotalFunds(void) = 0;

    virtual bool WithdrawFunds(uint32_t) = 0;
    virtual void DepositFunds(uint32_t) = 0;
    virtual void DepositDisasterReliefFunds(uint32_t) = 0;

    virtual int64_t GetYTDIncome(void) = 0;
    virtual int64_t GetEstIncome(void) = 0;
    virtual int64_t GetYTDExpenses(void) = 0;
    virtual int64_t GetEstExpenses(void) = 0;

    virtual bool AddDepartmentBudget(cISC3DepartmentBudget*) = 0;
    virtual void RemoveDepartmentBudget(cISC3DepartmentBudget*) = 0;
    virtual bool GetDepartmentBudget(uint32_t, cISC3DepartmentBudget*&) = 0;
    virtual void NeededFundingChanged(cISC3DepartmentBudget*) = 0;
    virtual void FundingPercentageChanged(cISC3DepartmentBudget*) = 0;

    virtual uint32_t GetFunding(cISC3DepartmentBudget*) = 0; // Verify that this is the correct return type.
    virtual uint32_t GetFunding(uint32_t) = 0;
    virtual float GetTaxRate(int32_t) = 0; // Verify that this is the correct return type.
    virtual float GetValveModifier(uint8_t) = 0;

    virtual int32_t GetCost(int32_t/*tDevelopmentCostID*/) = 0;
    virtual int32_t GetCost(uint32_t) = 0;

    virtual bool IssueBond(uint32_t) = 0;
    virtual int64_t GetTotalBorrowed(void) = 0;
    virtual int32_t GetCurrentBorrowingLimit(void) = 0;

    virtual void SetMarxism(bool) = 0;
    virtual bool MarxismIsOn(void) = 0;
};
