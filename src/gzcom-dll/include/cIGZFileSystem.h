/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cIGZFileSystem.h
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

#include "cIGZUnknown.h"

class cIGZString;

class cIGZFileSystem : public cIGZUnknown
{
public:
    virtual char* AppDrive(void) = 0;
    virtual char* AppDirectory(void) = 0;
    virtual char* AppName(void) = 0;
    virtual char* AppExtension(void) = 0;

    virtual char* DataDirectory(void) = 0;
    virtual char* PlugInDirectory(void) = 0;

    virtual char* CDAppDrive(void) = 0;
    virtual char* CDAppDirectory(void) = 0;
    virtual char* CDDataDirectory(void) = 0;
    virtual char* CDPlugInDirectory(void) = 0;

    virtual bool FindCDDrive(void) = 0;
    virtual void UseCDIniFile(bool) = 0;
    virtual void SetExpectedCDName(cIGZString const&) = 0;
    virtual void SetExpectedCDAppPath(cIGZString const&) = 0;
};
