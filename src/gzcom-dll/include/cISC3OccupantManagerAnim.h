/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3OccupantManagerAnim.h
 *
 * Copyright (C) 2026 Nicholas Hayes
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
#include "cIGZUnknown.h"

class cISC3City;
class cISC3CityChangeReceiver;
class cSC3CityBounds;
class cSC3CityCoord;
class cISC3Occupant;
class cISC3OccManIteratorTest;
class cISC3OccManIterator;

class cISC3OccupantManagerAnim : public cIGZUnknown
{
public:
	virtual bool Init(cISC3City*, uint32_t) = 0;
	virtual bool Shutdown() = 0;

	virtual uint32_t GetCellsInX() = 0;
	virtual uint32_t GetAnimCellsInX() = 0;
	virtual float GetWorldUnitsInX() = 0;
	virtual uint32_t GetCellsInZ() = 0;
	virtual uint32_t GetAnimCellsInZ() = 0;
	virtual float GetWorldUnitsInZ() = 0;
	virtual uint32_t GetCellsInY() = 0;
	virtual uint32_t GetAnimCellsInY() = 0;
	virtual float GetWorldUnitsInY() = 0;
	virtual uint32_t GetSenderId() = 0;

	virtual bool RegisterChangeReceiver(cISC3CityChangeReceiver* pChangeReciever, uint32_t& senderId, bool post) = 0;
	virtual bool UnregisterChangeReceiver(cISC3CityChangeReceiver* pChangeReciever) = 0;
	virtual bool UnregisterAllChangeReceivers() = 0;

	virtual bool InsertOccupant(cISC3Occupant*, int32_t, int32_t, int32_t, int32_t, uint32_t, bool) = 0;
	virtual bool InsertOccupant(cISC3Occupant*, int32_t, uint32_t, bool) = 0;
	virtual void RemoveOccupant(cISC3Occupant*, int32_t, int32_t, int32_t) = 0;
	virtual void RemoveOccupant(cISC3Occupant*) = 0;
	virtual bool RemoveOccupants(cSC3CityBounds const&, cISC3OccManIteratorTest*) = 0;
	virtual void RemoveAllOccupants() = 0;
	virtual bool MoveOccupant(cISC3Occupant*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) = 0;
	virtual bool MoveOccupant(cISC3Occupant*, cSC3CityCoord const&) = 0;
	virtual bool RefreshOccupant(cISC3Occupant*, int32_t, int32_t, int32_t, int32_t, void*) = 0;
	virtual bool RefreshOccupant(cISC3Occupant*, int32_t, void*) = 0;
	virtual bool SetTest(cISC3OccManIteratorTest*, bool) = 0;

	virtual void ShowOrHideOccupants(cISC3OccManIteratorTest*) = 0;
	virtual bool ShowOccupant(cISC3Occupant*, int32_t, int32_t, int32_t, bool) = 0;
	virtual bool ShowOccupant(cISC3Occupant*, bool) = 0;
	virtual bool IsOccupantVisible(cISC3Occupant*, bool) = 0;
	virtual bool IsOccupantVisible(cISC3Occupant*) = 0;

	virtual void SetShouldTick(cISC3Occupant*, bool) = 0;
	virtual bool GetShouldTick(cISC3Occupant*) = 0;

	virtual bool IsInBoundsCell(uint32_t, uint32_t) = 0;
	virtual bool IsInBoundsAnimCell(uint32_t, uint32_t) = 0;
	virtual bool IsInBoundsWorld(float, float) = 0;
	virtual bool IsInBounds(int32_t, int32_t, int32_t) = 0;
	virtual bool IsInBounds(cSC3CityCoord const&) = 0;
	virtual bool GetIterator(cISC3OccManIterator**) = 0;
	virtual bool GetOccupants(cISC3OccManIterator**, cSC3CityBounds const*, cISC3OccManIteratorTest*) = 0;
	virtual bool GetOccupantsInVolume(cSC3CityBounds const&, cISC3Occupant**, uint32_t*) = 0;
};