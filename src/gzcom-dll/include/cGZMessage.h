#pragma once
#include <stdint.h>

/**
 * @brief A type of event message
 */
class cGZMessage
{
	public:
		/**
		 * A constructor that initializes a message type and sets data to zero
		 * @param dwMessageType The type to assign initially to the message
		 */
		cGZMessage(uint32_t dwMessageType) {
			this->dwMessageType = dwMessageType;
			this->dwData1 = 0;
			this->dwData2 = 0;
			this->dwData3 = 0;
		}

		uint32_t dwMessageType;
		uint32_t dwData1;
		uint32_t dwData2;
		uint32_t dwData3;
};