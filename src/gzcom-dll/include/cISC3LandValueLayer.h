#pragma once
#include "cIGZUnknown.h"

class cIGZDBSerialRecord;
class cISC3City;

class cISC3LandValueLayer : public cIGZUnknown
{
public:
    virtual uint32_t CellCountX(void) const = 0;
    virtual uint32_t CellCountZ(void) const = 0;

    virtual void GetValueSint32(uint32_t, uint32_t, int32_t&) const = 0;
    virtual bool InBounds(uint32_t, uint32_t) const = 0;
    virtual bool InBounds(uint32_t, uint32_t, uint32_t, uint32_t) const = 0;
    virtual bool ValidRect(uint32_t, uint32_t, uint32_t, uint32_t) const = 0;

    virtual bool SerialRead(cIGZDBSerialRecord&) = 0;
    virtual bool SerialWrite(cIGZDBSerialRecord&) const = 0;
    virtual bool Init(cISC3City*, uint8_t const&) = 0;
    virtual bool Shutdown(void) = 0;

    virtual void GetValue(uint32_t, uint32_t, uint8_t&) const = 0;
    virtual void SetValue(uint32_t, uint32_t, uint8_t const&) = 0;
    virtual void SetAllCells(uint8_t const&) = 0;
    virtual void SetValue(uint32_t, uint32_t, uint32_t, uint32_t, uint8_t const&) = 0;
    virtual uint8_t GetAverageValue(void) = 0;
};
