/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3AnimationTickManager.h
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

class cISC3AnimationTickable;

class cISC3AnimationTickManager : public cIGZUnknown
{
	virtual bool AddTickableObject(cISC3AnimationTickable*) = 0;
	virtual bool RemoveTickableObject(cISC3AnimationTickable*) = 0;

	virtual uint8_t GetAnimationSystemLoad() = 0;
	virtual void DoAnimationTick() = 0;
	virtual uint32_t PauseAnimationSystem(bool pause) = 0;
	virtual bool IsAnimationSystemPaused() = 0;
	virtual void StepAnimationSystem() = 0;
	virtual uint32_t GetCurrentTickTime() = 0;

	virtual void SetNewPriority(cISC3AnimationTickable* unknown1, uint8_t unknown2, int32_t unknown3) = 0;
	virtual void SetCriticalExecutionPriority(bool unknown1) = 0;
};