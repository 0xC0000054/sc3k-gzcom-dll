#pragma once
#include "cIGZUnknown.h"

static const uint32_t GZIID_cIGZString = 105;

class cIGZString : public cIGZUnknown
{
public:
    virtual uint32_t FromChar(char const* data) = 0;
    virtual uint32_t FromChar(char const* data, uint32_t length) = 0;

    virtual char const* ToChar(void) const = 0;
    virtual char const* Data(void) const = 0;

    virtual uint32_t Strlen(void) const = 0;
    virtual bool IsEqual(cIGZString const*) const = 0;
    virtual int32_t Copy(cIGZString const&) = 0;
};
