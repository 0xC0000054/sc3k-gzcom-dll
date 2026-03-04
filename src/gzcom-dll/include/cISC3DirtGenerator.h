/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3DirtGenerator.h
 *
 * Copyright (C) 2026 Nicholas Hayes
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
class cISC3DirtBag;

class cISC3DirtGenerator : public cIGZUnknown
{
public:
    virtual bool Init(uint32_t, uint32_t) = 0;
    virtual bool Shutdown(void) = 0;

    virtual void SetDifficulty(int32_t) = 0;
    virtual bool IsReady(void) const = 0;
    virtual bool GenerateRandom(int32_t, uint8_t, uint8_t, uint8_t, uint8_t) = 0;

    virtual bool GenerateAltFromBMP8(cIGZString const*, uint8_t) = 0;
    virtual bool GenerateAltFromBMP24(cIGZString const*) = 0;
    virtual bool ReflectMap(cISC3DirtBag*) = 0;
};
