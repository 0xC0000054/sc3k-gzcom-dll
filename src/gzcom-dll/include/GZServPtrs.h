/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * GZServPtrs.h
 *
 * Copyright (C) 2024, 2025 Nicholas Hayes
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
#include "cRZSysServPtr.h"
#include "GZServDecls.h"

typedef cRZSysServPtr<cIGZFileSystem, 3760207456ul, 544416093ul> cIGZFileSystemPtr;
typedef cRZSysServPtr<cIGZLanguageManager, 5552085ul, 1142837360ul> cIGZLanguageManagerPtr;
typedef cRZSysServPtr<cIGZMessageServer, 3238549282ul, 1678128007ul> cIGZMessageServerPtr;
typedef cRZSysServPtr<cIGZRadio, 3763405408ul, 3763405408ul> cIGZRadioPtr;
typedef cRZSysServPtr<cIGZRegistry, 2721538364ul, 621243294ul> cIGZRegistryPtr;
typedef cRZSysServPtr<cIGZWinMgr, 1444ul, 2752988254ul> cIGZWinMgrPtr;