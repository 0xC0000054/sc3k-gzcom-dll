/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cIGZRealtimeDebugDisplay.h
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

class cIGZRealtimeDebugDisplay : public cIGZUnknown
{
public:
	virtual void Show() = 0;
	virtual void Hide() = 0;
	virtual bool IsVisible() = 0;

	virtual bool AddLine(cIGZString* pLine) = 0;
	virtual bool RemoveLine(cIGZString* pLine) = 0;
	virtual bool AddBarGraph(float* unknown1, uint32_t unknown2, cIGZString** unknown3, uint32_t unknown4) = 0;
	virtual bool AddBarGraph(float* unknown1, uint32_t unknown2) = 0;
	virtual bool RemoveBarGraph(float* unknown1) = 0;
	virtual bool AddStripMeter(float* unknown1, uint32_t unknown2, cIGZString** unknown3, uint32_t unknown4) = 0;
	virtual bool AddStripMeter(float* unknown1, uint32_t unknown2) = 0;
	virtual bool RemoveStripMeter(float* unknown1) = 0;
};
