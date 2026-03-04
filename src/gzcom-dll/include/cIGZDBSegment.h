/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cIGZDBSegment.h
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

class cGZResourceKey;
class cIGZDBRecord;
class cIGZResourceKeyList;
class cIGZString;

static const uint32_t GZIID_cIGZDBSegment = 0xc019963e;

class cIGZDBSegment : public cIGZUnknown
{
public:
    virtual bool Init(uint32_t, cIGZString const*, bool) = 0;
    virtual bool Shutdown(void) = 0;
    virtual uint32_t GetID(void) = 0;

    virtual bool GetResourceKeyList(cIGZResourceKeyList&) = 0;
    virtual bool OpenDBSegment(bool, bool) = 0;
    virtual bool OpenRecord(cGZResourceKey const&, cIGZDBRecord**) = 0;
    virtual bool CloseRecord(cIGZDBRecord**) = 0;
    virtual bool AbortRecord(cIGZDBRecord**) = 0;
    virtual bool TestForRecord(cGZResourceKey const&) = 0;
    virtual bool OpenRecordForWrite(cGZResourceKey const&, cIGZDBRecord**) = 0;
    virtual bool CreateNewRecord(cGZResourceKey const&, cIGZDBRecord**) = 0;
    virtual bool DeleteRecord(cGZResourceKey const&) = 0;
};
