/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3OccupantAttrib.h
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

class cGZResourceKey;
class cIGZString;
class cISC3CityAgentType;
class cISC3CitySpriteAttrib;
class cISC3OccAttribOverRide;

class cISC3OccupantAttrib : public cIGZUnknown
{
public:
    virtual bool GetOccupantGZCLSID(uint32_t&) const = 0;
    virtual bool SetOccupantGZCLSID(uint32_t) = 0;
    virtual cGZResourceKey* Key(void) const = 0;
    virtual bool IsGeomFlag(uint32_t) = 0;
    virtual bool SetGeomFlag(uint32_t) = 0;
    virtual bool ClearGeomFlag(uint32_t) = 0;
    virtual uint32_t GetGeomFlag(void) = 0;
    virtual uint8_t GetOccLayerFlag(void) = 0;
    virtual void SetOccLayerFlag(uint8_t) = 0;

    virtual uint32_t MajorType(void) const = 0;
    virtual uint32_t SubTypeInfo(void) const = 0;
    virtual uint32_t AnimType(void) const = 0;
    virtual bool GetName(cIGZString&) = 0;
    virtual uint32_t SizeInCellsX(void) = 0;
    virtual uint32_t SizeInCellsZ(void) = 0;
    virtual uint32_t SizeInCellsY(void) = 0;
    virtual cISC3CityAgentType* CityAgentType(void) = 0;
    virtual uint32_t TypeId(void) const = 0;
    virtual cISC3CitySpriteAttrib* GetSpriteAttrib(uint32_t) = 0;
    virtual cISC3CitySpriteAttrib* GetSpriteAttrib(void) = 0;
    virtual cISC3CitySpriteAttrib* GetOriginalSpriteAttrib(void) = 0; // Returns cISC3CitySpriteAttrib*
    virtual uint32_t GetDefaultLayerFlag(void) const = 0;
    virtual bool SetDefaultLayerFlag(uint32_t) = 0;
    virtual intptr_t GetPeopleProducerAttrib(void) = 0;
    virtual intptr_t GetVehicleProducerAttrib(void) = 0;
    virtual uint8_t Flammability(void) = 0;
    virtual uint32_t GetSoundObjectId(int32_t&) = 0;
    virtual void GetSoundKeyA(cGZResourceKey&) = 0;
    virtual void GetSoundKeyB(cGZResourceKey&) = 0;
    virtual void GetPlopCursorKey(cGZResourceKey&) = 0;
    virtual void GetQueryDescKey(cGZResourceKey&) = 0;
    virtual void GetQueryFormatFlags(uint32_t&) = 0;
    virtual uint32_t GetQueryDialogClass(void) = 0;
    virtual bool SetQueryDialogClass(uint32_t) = 0;

    virtual bool DebugInstanceTag(cIGZString&) = 0;
    virtual bool DebugClassTag(cIGZString&) = 0;
    virtual bool DebugTypeTag(cIGZString&) = 0;

    virtual bool GetNameKey(cGZResourceKey&) = 0;
    virtual void SetOverRideAttrib(cISC3OccAttribOverRide*) = 0;
    virtual cISC3OccAttribOverRide* GetOverRideAttrib(void) = 0;
    virtual bool GetArchitectName(cIGZString&) = 0;
};
