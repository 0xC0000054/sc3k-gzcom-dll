#include "cIGZUnknown.h"

class cIGZString;

class cIGZLanguageUtility : public cIGZUnknown
{
public:
    virtual bool Init(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual bool GetDayName(uint8_t, cIGZString&) = 0;
    virtual bool GetAbbrDayName(uint8_t, cIGZString&) = 0;
    virtual bool GetMonthName(uint8_t, cIGZString&) = 0;
    virtual bool GetAbbrMonthName(uint8_t, cIGZString&) = 0;

    virtual bool MakeTimeString(int32_t, int32_t, int32_t, cIGZString&) = 0;
    virtual bool MakeDateString(int32_t, int32_t, uint32_t, cIGZString&, uint32_t) = 0;

    virtual bool GetCurrencySymbol(cIGZString&) = 0;
    virtual bool DoesCurrencySymbolPrecedeAmount(void) = 0;
    virtual bool IsSpaceBetweenCurrencySymbolAndAmount(void) = 0;
    virtual bool GetThousandSeparator(cIGZString&) = 0;

    virtual bool MakeMoneyString(int64_t, cIGZString&) = 0;
    virtual bool MakeNumberString(int64_t, cIGZString&) = 0;

    virtual void ConvertToLowerCase(cIGZString&) = 0;
    virtual void ConvertToUpperCase(cIGZString&) = 0;
    virtual void ConvertToLowerCase(char&) = 0;
    virtual void ConvertToUpperCase(char&) = 0;

    virtual bool IsCharLower(char) = 0;
    virtual bool IsCharUpper(char) = 0;
    virtual bool IsCharAlpha(char) = 0;
    virtual bool IsCharNumeric(char) = 0;
    virtual bool IsCharAlphaNumeric(char) = 0;
    virtual bool IsCharPrintable(char) = 0;
    virtual bool CanCharEndLine(char) = 0;
    virtual bool CanCharStartLine(char) = 0;
    virtual bool IsCharPunct(char) = 0;

    virtual int32_t GetCharacterSetFromLanguage(void) = 0;
    virtual bool DoesLanguageUseCharacterSet(int32_t) = 0;

    virtual int32_t GetLanguageRoadDrivingSide(void) = 0;
    virtual uint32_t GetMeasurementSystem(void) = 0;

    virtual bool AreFirstAndLastNamesReversed(void) = 0;
    virtual bool DoesLanguageUseInputMethodEditing(void) = 0;
    virtual bool DoesLanguageUseMultiByteCharacters(void) = 0;
};
