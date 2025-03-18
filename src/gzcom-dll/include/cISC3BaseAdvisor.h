#pragma once
#include "cIGZUnknown.h"

class cGZMessage;
class cGZResourceKey;
class cIGZString;
class cISC3AdvisorHeaderRecord;
class cISC3AdvisorMessageRecord;
class cISC3CityAgent;

static const uint32_t GZIID_cISC3BaseAdvisor = 0x13dee82;

class cISC3BaseAdvisor : public cIGZUnknown
{
public:
    virtual cISC3CityAgent* AsISC3CityAgent(void) = 0;

    virtual void GetName(cIGZString&) = 0;
    virtual void SetName(cIGZString&) = 0;
    virtual bool GetNameAdvice(cIGZString&) = 0;
    virtual bool SetNameAdvice(cIGZString&) = 0;
    virtual bool GetNameOrdinance(cIGZString&) = 0;
    virtual bool SetNameOrdinance(cIGZString&) = 0;
    virtual bool GetNameBriefings(cIGZString&) = 0;
    virtual bool SetNameBriefings(cIGZString&) = 0;
    virtual bool GetPersonalName(cIGZString&) = 0;
    virtual bool SetPersonalName(cIGZString&) = 0;

    virtual cGZResourceKey* GetSmallAdvisorPicture(void) = 0;
    virtual cGZResourceKey* GetLargeAdvisorPicture(void) = 0;
    virtual bool SetSmallAdvisorPicture(cGZResourceKey const&) = 0;
    virtual bool SetLargeAdvisorPicture(cGZResourceKey const&) = 0;

    virtual bool DoAdvisorSimulation(void) = 0;
    virtual uint32_t GetAdvisorID(void) = 0;
    virtual uint32_t GetAdvisorAverageMood(void) = 0;
    virtual uint32_t GetOutdatedResponseID(void) = 0;

    virtual uint32_t GetAdviceQueueSize(void) = 0;
    virtual bool GetAdviceHeaders(uint32_t&, cISC3AdvisorHeaderRecord**) = 0;
    virtual bool GetAdviceMessageFromID(uint32_t, cIGZString&) = 0;
    virtual bool GetAdviceStructureFromID(uint32_t, cISC3AdvisorMessageRecord**) = 0;

    virtual uint32_t GetHelpQueueSize(void) = 0;
    virtual bool GetHelpHeaders(uint32_t&, cISC3AdvisorHeaderRecord**) = 0;
    virtual bool GetHelpTitleFromID(uint32_t, cIGZString&) = 0;
    virtual bool GetHelpMessageFromID(uint32_t, cIGZString&) = 0;

    virtual uint32_t GetOrdinanceQueueSize(void) = 0;
    virtual bool GetOrdinanceHeaders(uint32_t&, cISC3AdvisorHeaderRecord**) = 0;
    virtual bool GetOrdinanceTitleFromID(uint32_t, cIGZString&) = 0;
    virtual bool GetOrdinanceMessageFromID(uint32_t, cIGZString&) = 0;

    virtual bool DoMessage(cGZMessage&) = 0;
    virtual bool DoQueryInfo(cGZMessage&, cIGZUnknown*) = 0;
    virtual void GetSimulationData(void) = 0;
    virtual bool CheckOnAdvice(void) = 0;
};
