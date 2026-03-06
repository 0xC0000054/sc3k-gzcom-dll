/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3OccupantManager.h
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

class cIGZMessageTarget;
class cISC3City;
class cSC3CityCoord;
class cSC3CityBounds;
class cISC3CityChangeReceiver;
class cISC3OccManIterator;
class cISC3OccManIteratorTest;
class cISC3Occupant;

class cISC3OccupantManager : public cIGZUnknown
{
public:
    virtual bool Init(cISC3City*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) = 0;
    virtual bool Shutdown(void) = 0;

    virtual uint32_t GetCellsInX(void) = 0;
    virtual uint32_t GetCellsInZ(void) = 0;
    virtual uint32_t GetCellsInY(void) = 0;
    virtual uint32_t GetSenderId(void) const = 0;
    virtual uint32_t GetOccLayer(void) const = 0;
    virtual bool RegisterChangeReceiver(cISC3CityChangeReceiver*, uint32_t&, bool) = 0;
    virtual bool UnregisterChangeReceiver(cISC3CityChangeReceiver*) = 0;
    virtual bool UnregisterAllChangeReceivers(void) = 0;
    virtual bool PostOccupantAll(cISC3CityChangeReceiver*) = 0;
    virtual bool PostOccupantAll(cIGZMessageTarget&) = 0;

    virtual void InsertOccupant(cISC3Occupant*) = 0;
    virtual bool InsertOccupantAtCell(uint32_t, uint32_t, cISC3Occupant*) = 0;
    virtual void RemoveOccupant(cISC3Occupant*) = 0;
    virtual void RemoveOccupant(cSC3CityCoord const&) = 0;
    virtual void RemoveOccupantAtCell(uint32_t, uint32_t) = 0;
    virtual void RemoveAllOccupants(void) = 0;
    virtual bool OccupantChanged(cISC3Occupant*, uint32_t) = 0;
    virtual void ClearAnimatedOccupantList(bool) = 0;

    virtual bool IsEmpty(cSC3CityBounds const&) = 0;
    virtual bool DoesOccupantExistAtLocation(uint32_t, uint32_t) = 0;
    virtual bool IsInBounds(cSC3CityCoord const&) = 0;
    virtual bool IsInBounds(cSC3CityBounds const&) = 0;
    virtual bool IsInBoundsCell(uint32_t, uint32_t) = 0;

    virtual bool GetIterator(cISC3OccManIterator**) = 0;
    virtual bool GetOccupants(cISC3OccManIterator**, cSC3CityBounds const*, cISC3OccManIteratorTest*) = 0;
    virtual bool GetOccupant(cSC3CityCoord const&, cISC3Occupant**) = 0;
    virtual bool GetOccupantAtCell(uint32_t, uint32_t, cISC3Occupant**) = 0;
    virtual bool GetNeighbors(cISC3OccManIterator**, cISC3Occupant*, cISC3OccManIteratorTest*) = 0;
    virtual bool GetOccupantsInCell(cSC3CityBounds const&, uint32_t, cISC3Occupant**, uint32_t&, bool (*)(cISC3Occupant*)) = 0;
    virtual bool GetNeighborsOfOccupant(cISC3Occupant*, uint32_t, cISC3Occupant**, uint32_t&, bool (*)(cISC3Occupant*)) = 0;
};
