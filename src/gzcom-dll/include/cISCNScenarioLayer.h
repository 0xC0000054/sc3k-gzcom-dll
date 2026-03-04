/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISCNScenarioLayer.h
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
class cIGZString;
class cIGZWin;

class cISCNScenarioLayer : public cIGZUnknown
{
public:
    virtual bool CreateProgressDlgWin(cIGZWin*&, bool) = 0;
    virtual bool IsScenarioRunning(void) = 0;
    virtual bool SaveUncompressedScenarioRelatedRecords(cIGZDBSegment*) = 0;
    virtual void GetScenarioFilePath(cIGZString&) = 0;
};
