#pragma once
#include "cIGZUnknown.h"

class cISC3OrdinanceLayer : public cIGZUnknown
{
public:
    struct cISC3OrdinanceStruct
    {
        uint32_t unknown1;
        uint32_t unknown2;
        uint32_t unknown3;
        uint32_t unknown4;
    };

    virtual bool QueryOrdinanceOn(uint32_t) = 0;
    virtual bool QueryOrdinanceAvailable(uint32_t) = 0;
    virtual bool QueryOrdinanceAvailableAndOff(uint32_t) = 0;

    virtual uint32_t TotalOrdinancesOn(void) = 0;
    virtual bool SetOrdinance(uint32_t, bool) = 0;
    virtual bool MakeOrdinanceAvailable(uint32_t) = 0;

    virtual uint32_t GetOrdinanceListSize(uint32_t) = 0;
    virtual uint32_t GetOridnanceListSize(int32_t) = 0;
    virtual uint32_t GetOrdinanceList(cISC3OrdinanceLayer::cISC3OrdinanceStruct**, uint32_t) = 0;

    virtual uint32_t GetOrdinanceCost(uint32_t) = 0;
    virtual uint32_t GetTotalMonthlyOrdinanceExpense(void) = 0;
    virtual uint32_t GetTotalMonthlyOrdinanceIncome(void) = 0;
};
