#pragma once
#include "cIGZUnknown.h"

class cIGZDBSegment;
class cISC3City;
class cISC3DisasterLayer;
class cISC3DisasterInstance;

class cISC3DisasterManager : public cIGZUnknown
{
public:
    virtual bool Init(cISC3DisasterLayer*, cISC3City*) = 0;
    virtual bool Shutdown(void) = 0;
    virtual bool Init(cISC3City*, cIGZDBSegment*) = 0;
    virtual bool Save(cISC3City*, cIGZDBSegment*) = 0;
    virtual bool StaticInit(void) = 0;
    virtual bool StaticShutdown(void) = 0;

    virtual bool StopInstance(cISC3DisasterInstance*) = 0;
    virtual bool AttemptDisasterStart(void) = 0;
};
