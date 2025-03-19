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
