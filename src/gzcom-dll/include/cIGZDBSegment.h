#pragma once
#include "cIGZUnknown.h"

class cGZResourceKey;
class cIGZDBRecord;
class cIGZResourceKeyList;
class cIGZString;

static const uint32_t GZIID_cIGZDBSegment = 0xc019963e;

class cIGZDBSegment : public cIGZUnknown
{
public:
    virtual bool Init(uint32_t, cIGZString const*, bool) = 0;
    virtual bool Shutdown(void) = 0;
    virtual uint32_t GetID(void) = 0;

    virtual bool GetResourceKeyList(cIGZResourceKeyList&) = 0;
    virtual bool OpenDBSegment(bool, bool) = 0;
    virtual bool OpenRecord(cGZResourceKey const&, cIGZDBRecord**) = 0;
    virtual bool CloseRecord(cIGZDBRecord**) = 0;
    virtual bool AbortRecord(cIGZDBRecord**) = 0;
    virtual bool TestForRecord(cGZResourceKey const&) = 0;
    virtual bool OpenRecordForWrite(cGZResourceKey const&, cIGZDBRecord**) = 0;
    virtual bool CreateNewRecord(cGZResourceKey const&, cIGZDBRecord**) = 0;
    virtual bool DeleteRecord(cGZResourceKey const&) = 0;
};
