#include "../include/cRZBaseString.h"
#include <algorithm>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const uint32_t kRZBaseStringIID = 0xab13a836;

cRZBaseString::cRZBaseString(cIGZString const& szSource)
    : mnRefCount(0), szData(szSource.ToChar()) {
    // Empty
}

cRZBaseString::cRZBaseString(cIGZString const& szSource, size_t dwStart, size_t dwEnd)
    : mnRefCount(0) {
    std::string szNewSource = std::string(szSource.ToChar());
    szData = std::string(szNewSource, dwStart, dwEnd);
}

cRZBaseString::cRZBaseString(char const* pszSource)
    : mnRefCount(0), szData(pszSource) {
    // Empty
}

cRZBaseString::cRZBaseString(char const* pszSource, size_t dwLen)
    : mnRefCount(0), szData(pszSource, dwLen) {
    // Empty
}

cRZBaseString::cRZBaseString(char cChar, size_t dwRepetitions)
    : mnRefCount(0), szData(dwRepetitions, cChar) {
    // Empty
}

cRZBaseString::cRZBaseString(std::string const& szSource)
    : mnRefCount(0), szData(szSource) {
    // Empty
}

cRZBaseString::cRZBaseString(size_t dwStartSize)
    : mnRefCount(0), szData(dwStartSize, '\0') {
    // Empty
}

cRZBaseString::cRZBaseString(void)
    : mnRefCount(0), szData() {
    // Empty
}

cRZBaseString::cRZBaseString(const cRZBaseString& other)
    : mnRefCount(0), szData(other.szData)
{
}

cRZBaseString::cRZBaseString(cRZBaseString&& other) noexcept
    : mnRefCount(other.mnRefCount), szData(std::move(other.szData))
{
}

cRZBaseString& cRZBaseString::operator=(const cRZBaseString& other)
{
    if (this == &other)
    {
        return *this;
    }

    szData = other.szData;

    return *this;
}

cRZBaseString& cRZBaseString::operator=(cRZBaseString&& other) noexcept
{
    if (this == &other)
    {
        return *this;
    }

    mnRefCount = other.mnRefCount;
    szData = std::move(other.szData);

    return *this;
}

bool cRZBaseString::QueryInterface(uint32_t riid, void** ppvObj) {
    switch (riid) {
        case kRZBaseStringIID:
            *ppvObj = static_cast<cRZBaseString*>(this);
            break;

        case GZIID_cIGZString:
            *ppvObj = static_cast<cIGZString*>(this);
            break;

        case GZIID_cIGZUnknown:
            *ppvObj = static_cast<cIGZUnknown*>(static_cast<cRZBaseString*>(this));
            break;

        default:
            return false;
    }

    AddRef();
    return true;
}

uint32_t cRZBaseString::AddRef(void) {
    return ++mnRefCount;
}

uint32_t cRZBaseString::Release(void) {
    if (mnRefCount > 0) {
        --mnRefCount;
    }

    return mnRefCount;
}

uint32_t cRZBaseString::FromChar(char const* pszSource) {
    if (pszSource == nullptr) {
        szData.erase();
    }
    else {
        szData.assign(pszSource);
    }

    return true;
}

uint32_t cRZBaseString::FromChar(char const* pszSource, uint32_t dwLength) {
    if (pszSource == nullptr) {
        szData.erase();
    }
    else {
        szData.assign(pszSource, dwLength);
    }

    return true;
}

char const* cRZBaseString::ToChar(void) const {
    return szData.c_str();
}

char const* cRZBaseString::Data(void) const {
    return szData.c_str();
}

uint32_t cRZBaseString::Strlen(void) const {
    return (uint32_t)szData.length();
}

bool cRZBaseString::IsEqual(cIGZString const* szOther) const
{


    return szData.compare(szOther->ToChar()) == 0;
}


int32_t cRZBaseString::Copy(cIGZString const& szOther) {
    szData = std::string(szOther.ToChar());
    return true;
}
