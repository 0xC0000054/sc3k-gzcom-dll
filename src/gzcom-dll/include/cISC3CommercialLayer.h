#pragma once
#include "cIGZUnknown.h"

class cISC3CommercialLayer : public cIGZUnknown
{
	virtual uint8_t GetDevelopmentCap() = 0;
};
