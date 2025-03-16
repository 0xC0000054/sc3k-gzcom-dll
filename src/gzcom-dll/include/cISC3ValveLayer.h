#pragma once
#include "cIGZUnknown.h"

class cIGZString;
class cISC3Valve;

static const uint32_t GZIID_cISC3ValveLayer = 0x40a42f1c;
static const uint32_t LayerType_cISC3ValveLayer = 0x80f1e6d3;

class cISC3ValveLayer : public cIGZUnknown
{
public:
    virtual bool EndOfMonth(void) = 0;

    virtual bool CreateNewValve(uint32_t, uint32_t, void**) = 0;
    virtual bool GetValvePointer(uint32_t, uint32_t, void**) = 0;
    virtual bool AddValveToLayer(cISC3Valve*) = 0;

    virtual int16_t GetAgentSupplyEffect(uint32_t, uint32_t) = 0;
    virtual int16_t GetAgentDemandEffect(uint32_t, uint32_t) = 0;
    virtual void GetDensity(uint32_t, uint32_t, uint8_t&) = 0;

    virtual uint32_t GetTaxableResidentialDensity(void) = 0;
    virtual uint32_t GetTaxableCommercialDensity(void) = 0;
    virtual uint32_t GetTaxableIndustrialDensity(void) = 0;

    virtual void DebugSetValve(cIGZString*, cIGZString*, cIGZString*) = 0;
};
