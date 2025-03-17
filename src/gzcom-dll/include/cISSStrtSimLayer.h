#pragma once
#include "cIGZUnknown.h"

class cIGZDBSegment;
class cIGZString;
class cGZMessage;
class cISC2Importer;
class cISC3City;
class cISC3CityAgentType;
class cISC3CityDefinition;
class cISC3CityLayerManipulator;
class cISC3Occupant;

class cISSStrtSimLayer : public cIGZUnknown
{
public:
    virtual bool DoMessage(cGZMessage&) = 0;
    virtual bool DoQueryInfo(cGZMessage&, cIGZUnknown*) = 0;

    virtual bool StaticInit(cISC3CityDefinition*) = 0;
    virtual bool StaticShutdown(void) = 0;
    virtual bool Init(cISC3City*) = 0;
    virtual bool Init(cISC3City*, cISC2Importer*) = 0;
    virtual bool Init(cISC3City*, cIGZDBSegment*) = 0;
    virtual bool Save(cISC3City*, cIGZDBSegment*) = 0;
    virtual bool SimulationBegin(void) = 0;
    virtual bool SimulationEnd(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual bool GetManipulator(cISC3CityAgentType const&, cISC3CityLayerManipulator**, int32_t&) = 0;
    virtual uint32_t GetLayerType(void) = 0;

    virtual bool DebugClassTag(cIGZString&) = 0;
    virtual bool DebugTypeTag(cIGZString&) = 0;
    virtual bool Init(void) = 0;

    virtual bool SetNumZoomLevelsPeopleAreVisible(int32_t) = 0;
    virtual bool SetNumZoomLevelsTrafficVisible(int32_t) = 0;

    virtual intptr_t DispatchAirplane(uint32_t, uint32_t) = 0; // Returns cSSAeroplane*
    virtual bool RedirectAirplane(cISC3Occupant*, uint32_t, uint32_t) = 0;
    virtual void RevokeDispatchedAirplane(cISC3Occupant*) = 0;
    virtual intptr_t DispatchHelicopter(uint32_t, uint32_t, uint32_t, uint32_t) = 0; // Returns cSSHelicopter*
    virtual void RevokeDispatchedHelicopter(cISC3Occupant*) = 0;

    virtual intptr_t CreateRiotCrowd(void) = 0; // Returns cSSRiotCloud*
    virtual intptr_t CreateParadeBlock(uint32_t) = 0; // Returns cSSParadeBlock*
    virtual void CreateParadeSpectators(uint32_t, uint32_t, uint32_t) = 0;
};
