#pragma once
#include "cIGZUnknown.h"

class cGZResourceKey;

static const uint32_t GZCLSID_cIGZResourceKeyList = 0x801ed267;
static const uint32_t GZIID_cIGZResourceKeyList = 0x199656;

class cIGZResourceKeyList : public cIGZUnknown
{
public:
    virtual bool Insert(cGZResourceKey const&) = 0;
    virtual bool Insert(cIGZResourceKeyList const&) = 0;

    virtual bool Erase(cGZResourceKey const&) = 0;
    virtual bool EraseAll(void) = 0;

    virtual void EnumKeys(void (*)(cGZResourceKey const&, void*), void*) const = 0;

    virtual bool IsPresent(cGZResourceKey const&) = 0;
    virtual uint32_t Size(void) const = 0;
    virtual cGZResourceKey* GetKey(uint32_t) = 0;
};
