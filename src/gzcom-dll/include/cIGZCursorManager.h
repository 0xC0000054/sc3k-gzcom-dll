#pragma once
#include "cIGZUnknown.h"

class cIGZCursor;
class cIGZString;

class cIGZCursorManager : public cIGZUnknown
{
public:
    virtual bool Init(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual bool SetCursor(uint32_t) = 0;
    virtual bool PushAutoCursor(uint32_t) = 0;
    virtual bool PopAutoCursor(void) = 0;
    virtual bool AddCursor(cIGZCursor*, uint32_t) = 0;
    virtual bool AddCursor(cIGZString const&, uint32_t) = 0;

    virtual cIGZCursor* GetIGZCursor(uint32_t) = 0;
    virtual bool RemoveCursor(uint32_t) = 0;
    virtual bool SetCursor(cIGZCursor*) = 0;
};
