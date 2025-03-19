#pragma once
#include "cIGZUnknown.h"

class cIGZString;

class cISC3DepartmentBudget : public cIGZUnknown
{
public:
    virtual uint32_t GetDepartmentID(void) = 0;
    virtual int64_t GetLastYearSurplus(void) = 0;
    virtual int64_t GetTotalFundingNeeded(void) = 0;
    virtual void SetTotalFundingNeeded(int64_t) = 0;
    virtual cIGZString* GetDepartmentName(void) = 0;

    virtual void SetFundingPercentage(uint8_t) = 0;
    virtual uint8_t GetFundingPercentage(void) = 0;

    virtual uint32_t GetAdvisorID(void) = 0;
    virtual uint32_t GetAdvisorGroupID(void) = 0;
};
