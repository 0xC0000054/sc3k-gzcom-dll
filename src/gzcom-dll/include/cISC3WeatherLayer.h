/*
 * sc3k-gzcom-dll - an open-source DLL Plugin SDK for SimCity 3000
 *
 * cISC3WeatherLayer.h
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

class cGZMessage;
class cIGZString;
class cIGZDBSegment;
class cISC2Importer;
class cISC3City;
class cISC3CityAgentType;
class cISC3CityDefinition;
class cISC3CityLayerManipulator;
class cRZDate;

class cISC3WeatherLayer : public cIGZUnknown
{
public:
    enum class Hemisphere : int32_t
    {
        Northern = 0,
        Southern = 1
    };

    typedef int32_t Season;
    typedef int32_t WeatherType;

    virtual bool DoMessage(cGZMessage&) = 0;
    virtual bool DoQueryInfo(cGZMessage&, cIGZUnknown*) = 0;
    virtual bool StaticInit(cISC3CityDefinition*) = 0;
    virtual bool StaticShutdown(void) = 0;
    virtual bool Init(cISC3City*) = 0;
    virtual bool Init(cISC3City*, cISC2Importer*) = 0;
    virtual bool Init(cISC3City*, cIGZDBSegment*) = 0;
    virtual bool Save(cISC3City*, cIGZDBSegment*) = 0;
    virtual bool SimulationBegin(void) = 0;
    virtual bool SimulationEnd(void) = 0;
    virtual bool Shutdown(void) = 0;
    virtual bool GetManipulator(cISC3CityAgentType const&, cISC3CityLayerManipulator**, int32_t&) = 0;
    virtual uint32_t GetLayerType(void) = 0;
    virtual bool DebugClassTag(cIGZString&) = 0;
    virtual bool DebugTypeTag(cIGZString&) = 0;

    virtual void GetPosition(int32_t& longitude, int32_t& latitude) = 0;
    virtual void SetPosition(int32_t longitude, int32_t latitude) = 0;
    virtual Hemisphere GetHemisphere() = 0;
    virtual Season GetCurrentSeason() = 0;
    virtual int32_t GetCurrentSeasonMonth() = 0;
    virtual void GetWeather(WeatherType& type, int32_t& unknown2, cRZDate* unknown3) = 0;
    virtual void SetWeather(WeatherType type, int32_t unknown2) = 0;

    virtual float FarenheitToCelsius(float farenheit) = 0;
    virtual float CelsiusToFarenheit(float celsius) = 0;
    virtual float CelsiusToKelvin(float celsius) = 0;
    virtual float KelvinToCelsius(float kelvin) = 0;

    virtual float GetAverageTemperature(bool farenheit, cRZDate* unknown2) = 0;
    virtual float GetAverageHighTemperature(bool farenheit, cRZDate* unknown2) = 0;
    virtual float GetAverageLowTemperature(bool farenheit, cRZDate* unknown2) = 0;
    virtual void GetAverageTemperaturePerSeasonPerLocation(float& unknown1, float& unknown2, float& unknown3, float& unknown4, float& unknown5, float& unknown6, float& unknown7, float& unknown8, float& unknown9, Season unknown10, int32_t unknown11, int32_t unknown12, bool unknown13) = 0;

    virtual float GetHumidity(cRZDate* unknown1) = 0;
    virtual float GetWindyness(cRZDate* unknown1) = 0;
};