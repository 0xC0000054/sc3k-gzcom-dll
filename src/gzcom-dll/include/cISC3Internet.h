/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3Internet.h
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

class cIGZString;
class cIGZWin;
class cRZString;
class cSC3InternetPrefs;

class cISC3Internet : public cIGZUnknown
{
public:
    virtual bool Init(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual uint32_t GetConnectionState(void) = 0;
    virtual bool IsConnected(void) = 0;
    virtual bool ConnectionIsDialup(void) = 0;

    virtual bool Connect(void) = 0;
    virtual bool Disconnect(void) = 0;

    virtual bool ReadPreferences(void) = 0;
    virtual bool WritePreferences(void) = 0;

    virtual void DoIdleProcessing(void) = 0;

    virtual bool GetMainServerURL(cIGZString&) = 0;
    virtual bool SetMainServerURL(cIGZString const&) = 0;

    virtual void SetParentWindow(cIGZWin*) = 0;
    virtual intptr_t GetChatSystem(void) = 0;
    virtual intptr_t GetTransferSystem(void) = 0;

    virtual cSC3InternetPrefs* GetInternetPrefs(void) = 0;
    virtual bool GetInternetPrefsFilePath(cIGZString&) = 0;
    virtual bool SetInternetPrefs(cSC3InternetPrefs*) = 0;

    virtual bool DoUserStringCommand(cIGZString const&) = 0;

    virtual bool ViewInternalBrowser(cIGZString const&, cRZString const*, bool) = 0;
    virtual bool ViewExternalBrowser(cIGZString const&) = 0;
    virtual bool IsExternalBrowserAvailable(void) = 0;

    virtual bool GetCityExchangeUserInfo(cIGZString&, cIGZString&, cIGZString&) = 0;
    virtual bool GetCityExchangeURL(cIGZString&) = 0;

    virtual bool RegisterURLMessage(cIGZString const&, cIGZString const&, bool) = 0;
    virtual bool UnregisterURLMessage(cIGZString const&) = 0;
};
