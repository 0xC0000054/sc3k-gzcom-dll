/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3Valve.h
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

class cIGZDBSerialRecord;
class cISC3City;
class cISC3CityLayer;

static const uint32_t GZIID_cIS3DValve = 0xf1ec30;

class cISC3Valve : public cIGZUnknown
{
public:
    virtual bool Init(cISC3City*, uint32_t, cISC3CityLayer*) = 0;
    virtual bool Shutdown(void) = 0;

    virtual bool SimulationBegin(void) = 0;
    virtual bool SerialRead(cISC3City*, cIGZDBSerialRecord&) = 0;
    virtual void SerialWrite(cISC3City*, cIGZDBSerialRecord&) const = 0;

    virtual uint32_t GetId(void) = 0;
    virtual void SetId(uint32_t) = 0;

    virtual int32_t QuerySupplyValue(void) = 0;
    virtual int32_t QueryDemandValue(void) = 0;
    virtual int32_t QueryValveValue(void) = 0;
    virtual float QueryEconomyModifier(void) = 0;
    virtual int32_t QueryValveMax(void) = 0;
    virtual int32_t QueryValveMin(void) = 0;

    virtual bool AddToSupplyValue(int32_t) = 0;
    virtual bool AddToDemandValue(int32_t) = 0;
    virtual bool SetSupplyValue(int32_t) = 0;
    virtual bool SetDemandValue(int32_t) = 0;
    virtual void SetValveMax(int32_t) = 0;
    virtual void SetValveMin(int32_t) = 0;
    virtual void SetInitialSupplyValue(int32_t) = 0;
    virtual void SetInitialDemandValue(int32_t) = 0;

    virtual float GetEconomyModifier(void) = 0;
    virtual void SetEconomyModifier(float) = 0;

    virtual float GetTaxModifier(void) = 0;
    virtual void SetTaxModifier(float) = 0;

    virtual uint8_t GetDemandCap(void) = 0;
    virtual void SetDemandCap(uint8_t) = 0;

    virtual bool EndOfMonth(void) = 0;

    virtual void DebugLockValue(int32_t) = 0;
    virtual void DebugUnlockValue(void) = 0;
    virtual bool DebugIsValueLocked(void) = 0;
};
