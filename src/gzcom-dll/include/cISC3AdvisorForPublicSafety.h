#pragma once
#include "cIGZUnknown.h"

class cISC3DisasterInstance;

class cISC3AdvisorForPublicSafety : public cIGZUnknown
{
public:
    virtual void DisasterStarted(cISC3DisasterInstance*) = 0;
    virtual void DisasterEnded(cISC3DisasterInstance*) = 0;
};
