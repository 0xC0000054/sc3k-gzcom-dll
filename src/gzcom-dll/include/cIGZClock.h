/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cIGZClock.h
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

class cIGZMessageQueue;
class cRZDate;
class cRZTime;

class cIGZClock : public cIGZUnknown
{
public:
    enum ClockNotificationType
    {
        ClockNotificationType_Unknown1 = 1,
        ClockNotificationType_Unknown2,
        ClockNotificationType_Unknown3,
        ClockNotificationType_Unknown4,
        ClockNotificationType_Unknown5,
        ClockNotificationType_Unknown6
    };

    virtual bool Init(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual bool GetCurrentClockDate(cRZDate*) = 0;
    virtual bool SetCurrentClockDate(cRZDate*) = 0;
    virtual bool GetCurrentClockTime(cRZTime*) = 0;
    virtual bool SetCurrentClockTime(cRZTime*) = 0;

    virtual bool GetClockRate(uint32_t*) = 0;
    virtual bool SetClockRate(uint32_t) = 0;

    virtual bool PauseClock(void) = 0;
    virtual bool UnpauseClock(void) = 0;

    virtual uint32_t GetPauseCount(void) = 0;
    virtual bool SetPauseCount(uint32_t) = 0;

    virtual bool AddNotification(void (*)(void*), void*, cRZDate*) = 0;
    virtual bool RemoveNotification(void (*)(void*), cRZDate*) = 0;

    virtual bool AddNotification(void (*)(void*), void*, cIGZClock::ClockNotificationType) = 0;
    virtual bool RemoveNotification(void (*)(void*), cIGZClock::ClockNotificationType) = 0;

    virtual bool AddNotification(cIGZMessageQueue*, cRZDate*, uint32_t) = 0;
    virtual bool RemoveNotification(cIGZMessageQueue*, cRZDate*) = 0;

    virtual bool AddNotification(cIGZMessageQueue*, cIGZClock::ClockNotificationType, uint32_t) = 0;
    virtual bool RemoveNotification(cIGZMessageQueue*, cIGZClock::ClockNotificationType) = 0;
};
