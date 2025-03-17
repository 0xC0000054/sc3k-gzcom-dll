#pragma once
#include "cIGZUnknown.h"

class cISC3CityAgent;
class cISC3CityLayer;

class cISC3WorldLayer : public cIGZUnknown
{
public:
    virtual cISC3CityLayer* AsISC3CityLayer(void) = 0;
    virtual cISC3CityAgent* AsISC3CityAgent(void) = 0;

    virtual uint32_t GetWorldPopulation(void) = 0;
    virtual uint32_t GetGlobalSeaLevel(void) = 0;
    virtual intptr_t GetUnemploymentHistory(void) = 0; // Returns cISC3GraphInfo*
};
