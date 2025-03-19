#pragma once
#include "cIGZUnknown.h"

class cISC3AdvisorForTransportation : public cIGZUnknown
{
public:
    virtual bool InventionAvailable(uint32_t) const = 0;
};
