#pragma once
#include "cIGZUnknown.h"

class cIGZString;

class cIGZCursor : public cIGZUnknown
{
public:
    virtual bool LoadCursor(cIGZString&) = 0;
    virtual void SetCursor(void) = 0;
    virtual void GetHotSpot(int32_t&, int32_t&) = 0;
};
