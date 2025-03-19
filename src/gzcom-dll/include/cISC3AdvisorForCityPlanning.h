#pragma once
#include "cIGZUnknown.h"

class cISC3BaseAdvisor;
class cISC3CityAgent;

class cISC3AdvisorForCityPlanning : public cIGZUnknown
{
public:
    virtual cISC3CityAgent* AsISC3CityAgent(void) = 0;
    virtual cISC3BaseAdvisor* AsISC3BaseAdvisor(void) = 0;

    virtual bool AddBusinessDealBuildingToRewardList(uint32_t) = 0;
    virtual bool IsBusinessDealBuildingInRewardList(uint32_t) = 0;
    virtual bool RemoveBusinessDealBuildingFromRewardList(uint32_t) = 0;
};
