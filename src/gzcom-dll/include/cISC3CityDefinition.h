#include "cIGZUnknown.h"

class cIGZString;
class cISC3AgentTypeTree;
class cISC3OccupantAttribCache;

class cISC3CityDefinition : public cIGZUnknown
{
public:
    virtual bool Init(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual cISC3AgentTypeTree* GetAgentTypeTree(void) = 0;
    virtual cISC3OccupantAttribCache* GetOccupantAttribCache(void) = 0;
    virtual bool RegisterLayer(uint32_t, uint32_t, uint32_t) = 0; // No-op, always returns false

    virtual uint32_t GetFileType(cIGZString const&) = 0;
    virtual bool ValidateSC2File(cIGZString const&) = 0;
    virtual bool ValidateSCXFile(cIGZString const&) = 0;
    virtual bool ValidateSC3File(cIGZString const&) = 0;
    virtual bool ValidateSNRFile(cIGZString const&) = 0;
};
