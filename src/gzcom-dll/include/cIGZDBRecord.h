#pragma once
#include "cIGZUnknown.h"

class cGZResourceKey;

static const uint32_t GZIID_cIGZDBRecord = 0x4019960a;

class cIGZDBRecord : public cIGZUnknown
{
public:
	virtual cGZResourceKey* GetKey() = 0;
};