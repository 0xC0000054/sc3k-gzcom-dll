#pragma once
#include "cIGZUnknown.h"

class cGZMessage;

static const uint32_t GZIID_cIGZMessageTarget = 0x58D;

/**
* @brief A message target that accepts cGZMessage messages
* @see cIGZMessageServer::AddNotification(cIGZMessageTarget* pTarget, uint32_t dwMessageID)
*/
class cIGZMessageTarget : public cIGZUnknown
{
	public:
		virtual bool DoMessage(cGZMessage& sMessage) = 0;
};