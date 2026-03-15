/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3WinCityView.h
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

class cIGZDBSegment;
class cIGZWin;
class cRZRect;
class cISC3City;
class cISC3CitySpriteManager;
class cISC3CityView;
class cISC3CityViewIso;
class cISLCityViewHandler;

class cISC3WinCityView : public cIGZUnknown
{
public:
    virtual cIGZWin* AsIGZWin(void) = 0;

    virtual bool Init(void) = 0;
    virtual bool Init(cISC3City*, cIGZDBSegment*) = 0;
    virtual bool Save(cISC3City*, cIGZDBSegment*) = 0;
    virtual bool Shutdown(void) = 0;

    virtual void FocusCameraOn(uint32_t, uint32_t, bool) = 0;
    virtual void ZoomIn(bool) = 0;
    virtual void ZoomOut(bool) = 0;
    virtual void RotateCameraCW(bool) = 0;
    virtual void RotateCameraCCW(bool) = 0;

    virtual void Translate(float, float, bool) = 0;
    virtual void SetEdgeScroll(bool) = 0;
    virtual void SetMouseScroll(int16_t, int16_t, bool) = 0;
    virtual void UpdateScroll(int16_t, int16_t) = 0;

    virtual void SetCellCursorSize(uint32_t, uint32_t) = 0;
    virtual bool CellCursorVisible(void) = 0;
    virtual void SetCellCursorVisible(bool) = 0;
    virtual void SetCostDisplay(bool, int32_t, int32_t) = 0;
    virtual void EnableCostDisplay(bool) = 0;
    virtual void SetActiveHandler(cISLCityViewHandler*) = 0;
    virtual void SetActiveCursor(uint32_t) = 0;

    virtual bool DefActiveCursor(uint32_t&) = 0;
    virtual bool DefOnKeyDown(uint32_t, uint32_t) = 0;
    virtual bool DefOnKeyUp(uint32_t, uint32_t) = 0;
    virtual bool DefOnMouseDownL(int32_t, int32_t, uint32_t) = 0;
    virtual bool DefOnMouseDownR(int32_t, int32_t, uint32_t) = 0;
    virtual bool DefOnMouseUpL(int32_t, int32_t, uint32_t) = 0;
    virtual bool DefOnMouseUpR(int32_t, int32_t, uint32_t) = 0;
    virtual bool DefOnMouseMove(int32_t, int32_t, uint32_t) = 0;
    virtual bool DefOnHotKey(uint32_t, uint32_t, uint32_t) = 0;

    virtual void CameraGoHome(void) = 0;
    virtual cISC3CitySpriteManager* GetViewManager(void) = 0;
    virtual intptr_t GetCellCursorMap(void) const = 0;
    virtual void AnimationPause(bool) = 0;
    virtual cISC3CityView* GetCurrentView(void) = 0;
    virtual cISC3CityViewIso* GetIsoView(void) = 0;
    virtual bool SetCurrentView(cISC3CityView*) = 0;
    virtual bool SwitchHandler(int32_t, cISLCityViewHandler*) = 0;
};
