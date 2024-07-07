#include "cIGZUnknown.h"

class cIGZLanguageUtility;
class cIGZString;

class cIGZLanguageManager : public cIGZUnknown
{
public:
    virtual bool Init(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual void AddAvailableLanguage(uint32_t) = 0;
    virtual void RemoveAvailableLanguage(uint32_t) = 0;

    virtual int32_t ConvertLanguageIDToLanguageType(char const*) = 0;
    virtual int32_t GetCurrentLanguage(void) = 0;
    virtual bool SetCurrentLanguage(int32_t) = 0;
    virtual bool CanSwitchToLanguage(int32_t) = 0;
    virtual int32_t GetCurrentSystemLanguage(void) = 0;

    virtual bool GetLanguageRuntimeLibraryName(cIGZString&, uint32_t) = 0;
    virtual bool GetNextAvailableLanguage(uint32_t&) = 0;
    virtual void GetLanguageDirectoryName(cIGZString&, uint32_t) = 0;

    virtual bool GetLanguageEnglishName(cIGZString&, uint32_t) = 0;
    virtual bool GetLanguageLocalName(cIGZString&, uint32_t) = 0;
    virtual bool GetLanguageIDFromLanguageEnglishName(cIGZString&, uint32_t&) = 0;
    virtual bool GetLanguageIDFromLanguageLocalName(cIGZString&, uint32_t&) = 0;
    virtual bool GetLanguageIDFromEitherEnglishOrLocalName(cIGZString&, uint32_t&) = 0;
    virtual bool GetLanguageEnglishNameFromLanguageID(cIGZString&, uint32_t) = 0;
    virtual bool GetLanguageLocalNameFromLanguageID(cIGZString&, uint32_t) = 0;
    virtual int32_t GetLanguageIDAlias(int32_t) = 0;

    virtual bool GetISO639LanguageCodeFromLanguageID(cIGZString&, uint32_t) = 0;
    virtual bool GetISO639LanguageIDFromLanguageCode(cIGZString&, uint32_t&) = 0;
    virtual bool GetISO3166CountryCodeFromCountryID(cIGZString&, uint32_t) = 0;
    virtual bool GetISO3166CountryIDFromCountryCode(cIGZString&, uint32_t&) = 0;

    virtual int32_t GetCurrentCountry(void) = 0;
    virtual bool SetCurrentCountry(int32_t) = 0;
    virtual uint32_t GetPrimaryLanguageForCountry(int32_t) = 0;
    virtual uint32_t GetDefaultCountryForLanguage(int32_t) = 0;
    virtual int32_t GetCurrentSystemCountry(void) = 0;
    virtual bool CanSwitchToCountry(int32_t) = 0;

    virtual bool GetCountryEnglishName(cIGZString&, uint32_t) = 0;
    virtual bool GetCountryLocalName(cIGZString&, uint32_t) = 0;
    virtual bool GetCountryIDFromCountryEnglishName(cIGZString&, uint32_t&) = 0;
    virtual bool GetCountryIDFromCountryLocalName(cIGZString&, uint32_t&) = 0;

    virtual cIGZLanguageUtility* GetLanguageUtility(uint32_t) = 0;
    virtual cIGZLanguageUtility* GetNewLanguageUtility(uint32_t) = 0;

    virtual float GetExchangeRateForLocale(uint32_t) = 0;
    virtual void SetExchangeRateForLocale(float, uint32_t) = 0;
    virtual bool ConvertMoneyFromBaseToLocale(int32_t, int32_t&, uint32_t) = 0;
    virtual bool ConvertMoneyFromBaseToLocale(int64_t, int64_t&, uint32_t) = 0;
    virtual bool ConvertMoneyFromLocaleToLocale(int32_t, uint32_t, int32_t&, uint32_t) = 0;
    virtual bool ConvertMoneyFromLocaleToLocale(int64_t, uint32_t, int64_t&, uint32_t) = 0;
};
