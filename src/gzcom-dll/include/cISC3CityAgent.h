#pragma once
#include "cIGZUnknown.h"

class cIGZString;
class cISC3CityAgentType;

class cISC3CityAgent : public cIGZUnknown
{
public:
    virtual bool Simulate(int32_t) = 0;
    virtual int32_t MinimumExecutionInterval(void) = 0;
    virtual bool IsAgentLocking(void) = 0;
    virtual uint32_t TypeId(void) const = 0;

    virtual cISC3CityAgentType* AgentType(void) = 0;
    virtual bool SetAgentType(cISC3CityAgentType*) = 0;

    virtual bool DebugInstanceTag(cIGZString&) = 0;
    virtual bool DebugClassTag(cIGZString&) = 0;
    virtual bool DebugTypeTag(cIGZString&) = 0;
};
