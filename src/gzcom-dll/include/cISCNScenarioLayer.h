#pragma once
#include "cIGZUnknown.h"

class cIGZDBSegment;
class cIGZString;
class cIGZWin;

class cISCNScenarioLayer : public cIGZUnknown
{
public:
    virtual bool CreateProgressDlgWin(cIGZWin*&, bool) = 0;
    virtual bool IsScenarioRunning(void) = 0;
    virtual bool SaveUncompressedScenarioRelatedRecords(cIGZDBSegment*) = 0;
    virtual void GetScenarioFilePath(cIGZString&) = 0;
};
