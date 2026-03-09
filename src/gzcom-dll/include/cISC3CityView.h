/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3CityView.h
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

class cIGZDBSegment;
class cISC3App;
class cISC3City;
class cSC3CityBounds;
class cSC3CityCoord;
class cISC3Occupant;
class cISC3OccupantManager;
class cRZRect;

class cISC3CityView : public cIGZUnknown
{
public:
	virtual bool Init(cISC3App*, cISC3City*) = 0;
	virtual bool Init(cISC3City*, cIGZDBSegment*) = 0;
	virtual bool Save(cISC3City*, cIGZDBSegment*) = 0;
	virtual bool Shutdown() = 0;

	virtual uint32_t EnablePlot(bool) = 0;
	virtual void Plot() = 0;
	virtual uint32_t GetViewID() const = 0;
	virtual void SetCityViewID(int32_t, bool) = 0;
	virtual int32_t GetCityViewID() const = 0;
	virtual bool GetCityViewFlag(uint32_t) const = 0;
	virtual void SetCityViewFlag(uint32_t, bool, bool) = 0;
	virtual uint32_t GetCityViewFlags() const = 0;
	virtual void SetCityViewFlags(uint32_t, bool) = 0;
	virtual bool TestCityViewFlags(uint32_t) const = 0;
	virtual void ClearCityViewFlags() = 0;

	virtual bool GetScreenClipRect(cRZRect&) const = 0;
	virtual bool SetScreenClipRect(cRZRect const&) = 0;
	virtual void CameraGoHome(bool) = 0;
	virtual void FocusCameraOn(uint32_t, uint32_t, bool) = 0;
	virtual void GetFocusCell(uint32_t&, uint32_t&) = 0;
	virtual void GetCameraHint(cRZRect*, cRZRect*) = 0;
	virtual void ZoomIn(bool) = 0;
	virtual void ZoomOut(bool) = 0;
	virtual void GetZoomAndRotation(int32_t& zoom, int32_t& rotation) = 0;
	virtual void SetZoomAndRotation(int32_t, int32_t, bool) = 0;
	virtual void RotateCameraCW(bool) = 0;
	virtual void RotateCameraCCW(bool) = 0;
	virtual void Translate(float, float, bool) = 0;

	virtual void SetAnimFrequency(float const&) = 0;
	virtual void GetAnimFrequency(float&) = 0;
	virtual intptr_t GetAnimTickManager() = 0; // Returns cISC3AnimationTickManager*
	virtual cISC3OccupantManager* CurrentOccupantManager() = 0;
	virtual bool PerformPick(int32_t, int32_t, cSC3CityCoord&, bool) = 0;
	virtual bool GetOccupantsInVolume(cSC3CityBounds const&, cISC3Occupant**, uint32_t&, bool, bool unaligned) = 0;
};