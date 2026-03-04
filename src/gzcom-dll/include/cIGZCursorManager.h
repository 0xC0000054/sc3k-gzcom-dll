/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cIGZCursorManager.h
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

class cIGZCursor;
class cIGZString;

class cIGZCursorManager : public cIGZUnknown
{
public:
    virtual bool Init(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual bool SetCursor(uint32_t) = 0;
    virtual bool PushAutoCursor(uint32_t) = 0;
    virtual bool PopAutoCursor(void) = 0;
    virtual bool AddCursor(cIGZCursor*, uint32_t) = 0;
    virtual bool AddCursor(cIGZString const&, uint32_t) = 0;

    virtual cIGZCursor* GetIGZCursor(uint32_t) = 0;
    virtual bool RemoveCursor(uint32_t) = 0;
    virtual bool SetCursor(cIGZCursor*) = 0;
};
