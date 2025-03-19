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
