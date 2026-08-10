/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cGZWndProcHookData.h
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
#include <cstdint>
#include <Windows.h>

// The framework's Win32 window procedure hook is implemented using a
// cGZMessage where the data1 field is a pointer to the following structure.
// Callers must subscribe to the message using cIGZMessageServer.
//
// Because Maxis did not include a LRESULT field in the structure, this hook
// can only be used for window messages that return zero when the application
// handles the message.
// You will need to check the Microsoft documentation for the window messages
// you intend to capture with this hook to ensure that returning zero when
// the message is handled is the correct behavior.
// If the message you want to handle expects another return value you will
// need to use a different method of intercepting window messages.

static const uint32_t kGZMessageWndProcHook = 0x5a4fc3d5;

struct cGZWndProcHookData
{
	HWND hWnd;
	UINT msg;
	WPARAM wParam;
	LPARAM lParam;
	/**
	 * @brief Should be set to a non-zero value if the hook wants to
	 * prevent the game from processing the message; otherwise, zero.
	 */
	BOOL handled;
};