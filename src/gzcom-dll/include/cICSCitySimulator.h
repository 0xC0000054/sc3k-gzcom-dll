#pragma once
#include "cIGZUnknown.h"

class cGZMessage;
class cISC3City;
class cISC3CityAgent;

class cICSCitySimulator : public cIGZUnknown
{
public:
    virtual bool Init(cISC3City*) = 0;
    virtual bool Shutdown(void) = 0;
    virtual void OnIdle(void) = 0;

    virtual intptr_t MessageQueue(void) = 0; // Returns cIGZMessageQueue*
    virtual bool ProcessMessage(cGZMessage*) = 0;
    virtual bool CommandStart(cGZMessage*) = 0;
    virtual bool CommandStop(cGZMessage*) = 0;

    virtual bool AddAgent(cISC3CityAgent*) = 0;
    virtual bool RemoveAgent(cISC3CityAgent*) = 0;

    virtual uint32_t GetLayerType(void) = 0;

    virtual bool DoSimImmediatePause(void) = 0;
};
