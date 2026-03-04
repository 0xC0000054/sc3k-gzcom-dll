/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3ResidentialLayer.h
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

class cISC3Occupant;

class cISC3ResidentialLayer : public cIGZUnknown
{
public:
    virtual bool SchoolIsOnStrike(void) = 0;
    virtual bool CollegeIsOnStrike(void) = 0;
    virtual bool HealthIsOnStrike(void) = 0;

    virtual int32_t ChanceOfSchoolStrike(void) = 0;
    virtual int32_t ChanceOfCollegeStrike(void) = 0;
    virtual int32_t ChanceOfHealthStrike(void) = 0;
    virtual bool GetStrikingSchoolBuildings(cISC3Occupant**, uint32_t, uint32_t&) = 0;
    virtual bool GetStrikingCollegeBuildings(cISC3Occupant**, uint32_t, uint32_t&) = 0;
    virtual bool GetStrikingHealthBuildings(cISC3Occupant**, uint32_t, uint32_t&) = 0;
    virtual void EndSchoolStrike(void) = 0;
    virtual void EndCollegeStrike(void) = 0;
    virtual void EndHealthStrike(void) = 0;

    virtual uint8_t GetHealthSystemRating(void) = 0;
    virtual uint8_t GetSchoolSystemRating(void) = 0;
    virtual uint8_t GetCollegeSystemRating(void) = 0;

    virtual int32_t GetPatientCount(void) = 0;
    virtual int32_t GetDoctorCount(void) = 0;
    virtual int32_t GetSchoolStudentCount(void) = 0;
    virtual int32_t GetTeacherCount(void) = 0;
    virtual int32_t GetCollegeStudentCount(void) = 0;
    virtual int32_t GetProfessorCount(void) = 0;

    virtual int32_t GetHealthSystemCapacity(void) = 0;
    virtual int32_t GetSchoolSystemCapacity(void) = 0;
    virtual int32_t GetCollegeSystemCapacity(void) = 0;
    virtual int32_t GetLibrarySystemCapacity(void) = 0;
    virtual int32_t GetMuseumSystemCapacity(void) = 0;

    virtual uint8_t GetDevelopmentCap(void) = 0;
    virtual int32_t GetPopulation(void) = 0;
    virtual float GetWorkforcePopPct(void) = 0;
    virtual float GetAgeCohortPopPct(uint8_t, uint8_t) = 0;
    virtual uint8_t GetWorkforceEQ(void) = 0;
    virtual uint8_t GetAgeCohortEQ(uint8_t, uint8_t) = 0;
    virtual uint8_t GetWorkforceLE(void) = 0;
    virtual uint8_t GetAgeCohortLE(uint8_t, uint8_t) = 0;
    virtual int32_t GetTotalCityEducationUpkeep(void) = 0;
    virtual int32_t GetTotalCityHealthUpkeep(void) = 0;
    virtual void SetEducationFundingPercentage(uint8_t) = 0;
    virtual void SetHealthFundingPercentage(uint8_t) = 0;
};
