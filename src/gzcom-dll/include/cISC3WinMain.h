/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3WinMain.h
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

class cGZMessage;
class cIGZString;
class cIGZWin;
class cISC3App;

class cISC3WinMain : public cIGZUnknown
{
public:
    virtual cIGZWin* AsIGZWin(void) = 0;

    virtual bool PreInit(cISC3App&) = 0;
    virtual bool DoDancingBear(void) = 0;
    virtual bool DoCopyRightScreen(bool) = 0;
    virtual bool DoTitleBackgroundScreen(void) = 0;
    virtual void ReleaseTitleBackgroundBuffer(void) = 0;

    virtual bool DoMainMenu(void) = 0;
    virtual bool ActivateMainMenu(void) = 0;
    virtual bool DoLoadCity(cIGZString&) = 0;
    virtual bool DoShowWinCityView(void) = 0;

    virtual bool dbgDoDebugWindow(cGZMessage&) = 0; // No-op that returns false
    virtual bool dbgDoDebugWindow(uint32_t, uint32_t, uint32_t, uint32_t) = 0;
};
