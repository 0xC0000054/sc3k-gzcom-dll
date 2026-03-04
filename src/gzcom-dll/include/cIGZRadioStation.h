/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cIGZRadioStation.h
 *
 * Copyright (C) 2024 Nicholas Hayes
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

class cIGZRadio;
class cIGZString;

class cIGZRadioStation : public cIGZUnknown
{
public:
    virtual bool Init(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual bool OnIdle(void) = 0;

    virtual bool SetRadio(cIGZRadio*) = 0;
    virtual void SetStation(void) = 0;
    virtual void UnsetStation(void) = 0;

    virtual void GetStationCallSign(char*) = 0; // Parameter is an array with a length of 4.
    virtual void GetStationDescription(cIGZString*) = 0;

    virtual bool IsOnTheAir(void) = 0;
};
