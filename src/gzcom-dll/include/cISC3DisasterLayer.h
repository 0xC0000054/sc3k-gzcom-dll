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
