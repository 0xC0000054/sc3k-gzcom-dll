#include "cIGZUnknown.h"

class cIGZString;

class cIGZCmdLine : public cIGZUnknown
{
public:
    virtual int32_t argc(void) const = 0;
    virtual const char* const argv(int32_t index) const = 0;

    virtual int32_t Find(cIGZString const& value, bool caseSensitive) const = 0;
    virtual int32_t FindSubString(cIGZString const& value, bool caseSensitive) const = 0;

    virtual bool IsSwitchPresent(char argument, cIGZString& value, bool) const = 0;
    virtual bool IsSwitchPresent(cIGZString const& argument, cIGZString& value, bool) const = 0;

    virtual int32_t GetIndexOfSwitch(char argument, int32_t startIndex) const = 0;
    virtual int32_t GetIndexOfSwitch(cIGZString const& argument, int32_t startIndex) const = 0;

    virtual bool InsertArgument(cIGZString const& arg, int32_t index) = 0;
    virtual bool EraseArgument(int32_t index) = 0;

    virtual bool GetCommandLineText(cIGZString& text) const = 0;
};
