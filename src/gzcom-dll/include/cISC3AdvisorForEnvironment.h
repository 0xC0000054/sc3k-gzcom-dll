#pragma once
#include "cIGZUnknown.h"

class cISC3AdvisorForEnvironment : public cIGZUnknown
{
public:
    virtual bool CheckGarbageBuildingAvailibility(uint32_t) = 0;
};
