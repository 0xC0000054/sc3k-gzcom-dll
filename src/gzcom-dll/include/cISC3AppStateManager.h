/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3AppStateManager.h
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
#include <cstdint>

class cIGZMessageTarget;

class cISC3AppStateManager
{
public:
    virtual bool SetCurrentUIState(uint32_t) = 0;
    virtual cIGZMessageTarget* GetCurrentStateTarget(void) = 0;

    virtual bool RegisterUIState(uint32_t, cIGZMessageTarget*) = 0;
    virtual bool UnregisterUIState(uint32_t) = 0;
    virtual bool UnregisterAllUIStates(void) = 0;
    virtual bool EnumerateUIStates(cIGZMessageTarget*) = 0;

    virtual bool GetFlag(uint32_t) = 0;
    virtual void SetFlag(uint32_t) = 0;
    virtual void ClearAllFlags(void) = 0;
};
