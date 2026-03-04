/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cGZMessage.h
 *
 * Copyright (C) 2016 Nelson Gomez
 * Copyright (C) 2024 Nicholas Hayes
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, under
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <https://www.gnu.org/licenses/>.
 */

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

		/**
		 * A constructor that initializes a message type and data
		 * @param dwMessageType The type to assign to the message
		 * @param dwData1 The data to assign to the message
		 * @param dwData2 The data to assign to the message
		 * @param dwData3 The data to assign to the message
		 */
		cGZMessage(
			uint32_t dwMessageType,
			uint32_t dwData1,
			uint32_t dwData2,
			uint32_t dwData3) {
			this->dwMessageType = dwMessageType;
			this->dwData1 = dwData1;
			this->dwData2 = dwData2;
			this->dwData3 = dwData3;
		}

		uint32_t dwMessageType;
		uint32_t dwData1;
		uint32_t dwData2;
		uint32_t dwData3;
};