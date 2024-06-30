#include "cIGZUnknown.h"

class cIGZString;

class cIGZRegistry : public cIGZUnknown
{
public:
    virtual bool Register(cIGZString const&) = 0;
    virtual bool Unregister(cIGZString const&) = 0;

    virtual bool Lookup(const char* category, cIGZString const& key, cIGZString& result) = 0;

    virtual bool MakeRegistryName(const char* category, cIGZString const& key, cIGZString const& value, cIGZString& result) = 0;

    typedef void (*EnumCategoryCallback)(cIGZString const&, cIGZString const&, void*);

    virtual bool EnumCategory(const char* category, EnumCategoryCallback pCallback, void* pContext) = 0;
};
