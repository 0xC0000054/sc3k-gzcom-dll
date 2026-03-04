/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3DisasterLayer.h
 *
 * Copyright (C) 2025 Nicholas Hayes
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

struct sIGZRectUint32;
class cISC3DisasterInstance;
class cISC3DisasterListIterator;
class cISC3DisasterManager;
class cISC3Occupant;

class cISC3DisasterLayer : public cIGZUnknown
{
public:
    virtual void DisasterInstanceChange(cISC3DisasterInstance*, int32_t disasterChangeType) = 0;

    virtual cISC3DisasterListIterator* CreateActiveDisasterIterator(void) = 0;
    virtual void DeleteActiveDisasterIterator(cISC3DisasterListIterator*) = 0;
    virtual cISC3DisasterListIterator* CreateDisasterListIterator(void) = 0;
    virtual void DeleteDisasterListIterator(cISC3DisasterListIterator*) = 0;

    virtual void EnableDisasters(bool) = 0;
    virtual bool DisastersEnabled(void) = 0;
    virtual int32_t GetActiveDisasterCount(void) = 0;

    typedef void (*DisasterChangeCallback)(cISC3DisasterInstance*, int32_t disasterChangeType, void*);

    virtual bool NotifyOnChange(DisasterChangeCallback, void*) = 0;
    virtual bool StopNotifyingOnChange(DisasterChangeCallback, void*) = 0;

    virtual cISC3DisasterManager* GetDisasterManager(uint32_t) = 0;
    virtual uint32_t GetDemolitionCost(cISC3Occupant*) = 0;
    virtual bool DestroyOccupant(cISC3Occupant*, int32_t, uint32_t&) = 0;
    virtual bool IsSimulationRunning(void) = 0;
    virtual void ComputeSurroundRect(sIGZRectUint32 const&, sIGZRectUint32&, uint32_t) = 0;
};
