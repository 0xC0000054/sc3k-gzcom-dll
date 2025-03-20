#pragma once
#include <cstdint>

class cIGZMessageTarget;

class cISC3AppStateManager
{
public:
    virtual bool SetCurrentUIState(uint32_t) = 0;
    virtual cIGZMessageTarget* GetCurrentStateTarget(void) = 0;

    virtual bool RegisterUIState(uint32_t, cIGZMessageTarget*) = 0;
    virtual bool UnregisterUIState(uint32_t) = 0;
    virtual bool UnregisterAllUIStates(void) = 0;
    virtual bool EnumerateUIStates(cIGZMessageTarget*) = 0;

    virtual bool GetFlag(uint32_t) = 0;
    virtual void SetFlag(uint32_t) = 0;
    virtual void ClearAllFlags(void) = 0;
};
