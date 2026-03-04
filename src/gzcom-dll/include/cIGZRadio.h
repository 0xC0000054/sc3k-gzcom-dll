/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cIGZRadio.h
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

class cIGZRadioStation;
class cIGZString;

class cIGZRadio : public cIGZUnknown
{
public:
    class RadioSettings
    {
        int32_t volume;
        uint32_t isOn;
        uint32_t currentStationIndex;
        uint32_t unknown3;
        uint32_t unknown4;
        uint32_t unknown5;
    };

    virtual bool Init(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual bool OnIdle(uint32_t) = 0;

    virtual intptr_t GetRadioSound(void) = 0;

    virtual bool GetCurrentStation(uint32_t&) = 0;
    virtual bool GetCurrentStation(char*) = 0;

    virtual cIGZRadioStation* GetStation(uint32_t) = 0;
    virtual bool SetStation(uint32_t) = 0;
    virtual cIGZRadioStation* GetStation(char const*) = 0;
    virtual bool SetStation(char const*) = 0;

    virtual int32_t GetVolume(void) = 0;
    virtual bool SetVolume(int32_t) = 0;

    virtual uint32_t GetStationCount(void) = 0;
    virtual bool IsStationAvailable(char const*) = 0;
    virtual bool AddStation(cIGZRadioStation*) = 0;
    virtual bool RemoveStation(cIGZRadioStation*, bool) = 0;
    virtual bool RemoveStation(char const*, bool) = 0;
    virtual bool RemoveAllStations(bool) = 0;

    virtual bool TurnOn(void) = 0;
    virtual bool TurnOff(void) = 0;
    virtual bool IsOn(void) = 0;

    virtual void Mute(void) = 0;
    virtual void UnMute(void) = 0;

    virtual bool GetOption(int32_t radioOption) = 0;
    virtual void SetOption(bool, int32_t radioOption) = 0;

    virtual bool GetRadioDirectory(cIGZString&) = 0;
    virtual void SetRadioDirectory(cIGZString const&) = 0;

    virtual void ReadSettings(cIGZRadio::RadioSettings*) = 0;
    virtual void WriteSettings(cIGZRadio::RadioSettings*) = 0;
};
