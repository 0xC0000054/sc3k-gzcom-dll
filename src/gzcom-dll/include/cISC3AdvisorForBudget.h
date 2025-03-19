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
