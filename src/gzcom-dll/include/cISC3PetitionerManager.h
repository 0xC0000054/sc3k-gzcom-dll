/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3PetitionerManager.h
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

class cISC3CityAgent;

class cISC3PetitionerManager : public cIGZUnknown
{
public:
    class tHeaderRecord;
    class tPetitionerRecord;
    class tPetitionerStringType;

    virtual cISC3CityAgent* AsISC3CityAgent(void) = 0;

    virtual bool DoAdvisorSimulation(void) = 0;
    virtual uint32_t GetPetitionerQueueSize(void) = 0;
    virtual bool GetPetitionerHeaders(cISC3PetitionerManager::tHeaderRecord**) = 0;
    virtual bool GetPetitionerStructureFromID(uint32_t, cISC3PetitionerManager::tPetitionerRecord*) = 0;
    virtual bool GetPetitionerStructure(uint32_t, cISC3PetitionerManager::tPetitionerRecord*) = 0;
    virtual bool PetitionerButtonPressed(uint32_t, uint32_t) = 0;
    virtual bool GetNeighborDealPetitioner(uint8_t, cISC3PetitionerManager::tPetitionerRecord*) = 0;
    virtual bool GetPetitionerStringGroup(cISC3PetitionerManager::tPetitionerStringType, uint32_t) = 0;
};
