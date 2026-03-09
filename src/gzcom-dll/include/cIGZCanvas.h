/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cIGZCanvas.h
 *
 * Copyright (C) 2025, 2026 Nicholas Hayes
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

class cIGZBuffer;
class cIGZString;
class cIGZWinMgr;
class cRZRect;

class cIGZCanvas : public cIGZUnknown
{
public:
    virtual bool Init(cRZRect const&) = 0;
    virtual bool Shutdown(void) = 0;
    virtual bool Uninitialize(void) = 0;
    virtual bool Restore(void) = 0;

    virtual void SetArea(int32_t, int32_t, int32_t, int32_t) = 0;
    virtual void GetArea(cRZRect&) const = 0;
    virtual void ShowWindow(void) = 0;
    virtual void HideWindow(void) = 0;
    virtual void SetCaption(cIGZString const&) = 0;

    virtual void ProcessWindowMove(void) = 0;
    virtual void ForceFullSystemRedraw(void) = 0;
    virtual bool CompleteSwitchToWindowedMode(void) = 0;
    virtual bool CompleteSwitchToFullScreenMode(void) = 0;

    virtual void PauseDrawing(void) = 0;
    virtual void ResumeDrawing(void) = 0;

    virtual void SetMainBufferSurface(cIGZBuffer*) = 0;
    virtual cIGZBuffer* GetMainBufferSurface(void) = 0;
    virtual void SetWindowManager(cIGZWinMgr*) = 0;
    virtual void SetFrameworkIsShuttingDown(bool) = 0;
    virtual int32_t LastCursorPositionX(void) const = 0;
    virtual int32_t LastCursorPositionY(void) const = 0;
};
