#pragma once
#include "cIGZUnknown.h"

class cRZString;

class cIBoxX : public cIGZUnknown
{
public:
    virtual bool Init(cRZString&) = 0;
    virtual bool Shutdown(void) = 0;

    virtual bool Event(int32_t eventNum, int32_t, int32_t, int32_t, int32_t) = 0;
    virtual void Update(uint32_t) = 0;
};
