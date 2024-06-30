#include "cIGZUnknown.h"

class cISC3AgentTypeTreeIterator;
class cISC3CityAgentType;

class cISC3AgentTypeTree : public cIGZUnknown
{
public:
    virtual bool Init(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual uint32_t Count(void) = 0;

    virtual intptr_t GetRootNode(void) = 0;
    virtual intptr_t GetNode(uint32_t) = 0;

    virtual bool IsAncestor(uint32_t, uint32_t) = 0;
    virtual bool IsAncestor(uint32_t, uint32_t, uint32_t&) = 0;
    virtual bool CreateNodeIterator(cISC3AgentTypeTreeIterator**) = 0;
    virtual void DebugDumpTree(cISC3CityAgentType*) = 0;
};
