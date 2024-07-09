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
