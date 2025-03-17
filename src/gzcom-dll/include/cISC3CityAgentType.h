#pragma once
#include "cIGZUnknown.h"

class cGZResourceKey;
class cIGZString;
class cISC3CityAgent;
class cISC3CityLayerManipulator;

class cISC3CityAgentType : public cIGZUnknown
{
public:
    virtual intptr_t AsIGZTreeNode(void) = 0; // Returns cIGZTreeNode*
    virtual uint32_t Id(void) const = 0;

    virtual bool AttachManipulator(cISC3CityLayerManipulator*, int32_t) = 0;
    virtual bool ReleaseManipulator(cISC3CityLayerManipulator*, int32_t) = 0;
    virtual void ReleaseAllManipulators(void) = 0;

    virtual bool Simulate(cISC3CityAgent&, int32_t) = 0;
    virtual int32_t MinimumExecutionInterval(void) = 0;

    virtual cISC3CityAgentType* Parent(void) const = 0;
    virtual cISC3CityAgentType* FirstChild(void) const = 0;
    virtual cISC3CityAgentType* Sibling(void) const = 0;
    virtual void GetName(cGZResourceKey&) = 0;
    virtual bool SetId(uint32_t) = 0;
    virtual bool SetName(cGZResourceKey const&) = 0;
    virtual bool SetParent(cISC3CityAgentType*) = 0;
    virtual bool SetFirstChild(cISC3CityAgentType*) = 0;
    virtual bool SetSibling(cISC3CityAgentType*) = 0;

    virtual bool DebugInstanceTag(cIGZString&) = 0;
    virtual void DebugSetInstanceTag(cIGZString&) = 0;
    virtual bool DebugClassTag(cIGZString&) = 0;
    virtual bool DebugTypeTag(cIGZString&) = 0;
};
