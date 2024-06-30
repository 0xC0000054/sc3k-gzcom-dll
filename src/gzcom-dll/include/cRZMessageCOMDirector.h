#pragma once
#include "cIGZMessageTarget.h"
#include "cRZCOMDllDirector.h"

class cRZMessageCOMDirector : public cRZCOMDllDirector, public cIGZMessageTarget
{
	public:
		bool QueryInterface(uint32_t riid, void** ppvObj) {
			if (riid == GZIID_cIGZMessageTarget) {
				*ppvObj = static_cast<cIGZMessageTarget*>(this);
				AddRef();
				return true;
			}
			else {
				return cRZMessageCOMDirector::QueryInterface(riid, ppvObj);
			}
		}

		uint32_t AddRef(void) {
			return cRZCOMDllDirector::AddRef();
		}

		uint32_t Release(void) {
			return cRZCOMDllDirector::Release();
		}
};