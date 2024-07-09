#pragma once
#include "cIGZUnknown.h"

class cIGZString;

class cISC3PluginBuildingMgr : public cIGZUnknown
{
public:
    virtual bool Init(cIGZString const&) = 0;
    virtual bool Shutdown(void) = 0;

    virtual void CheckForPluginBuildings(bool) = 0;
};
