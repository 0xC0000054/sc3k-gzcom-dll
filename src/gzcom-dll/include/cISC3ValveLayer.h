/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3ValveLayer.h
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
