#pragma once
#include "cIGZUnknown.h"

class cIGZString;
class cISC3CityAgent;

class cISC3CityLayerManipulator : public cIGZUnknown
{
public:
    virtual bool Apply(cISC3CityAgent&) = 0;
    virtual bool IsLockingCity(void) = 0;

    virtual bool DebugInstanceTag(cIGZString&) = 0;
    virtual bool DebugClassTag(cIGZString&) = 0;
    virtual bool DebugTypeTag(cIGZString&) = 0;
};
