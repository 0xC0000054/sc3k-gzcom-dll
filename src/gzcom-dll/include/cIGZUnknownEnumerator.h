#pragma once
#include "cIGZUnknown.h"

class cIGZUnknownEnumerator : public cIGZUnknown
{
public:
	virtual void DoEnumObject(cIGZUnknown* pObject, cIGZUnknown* pCallbackUnknown, uint32_t callbackUnknownRIID) = 0;
};