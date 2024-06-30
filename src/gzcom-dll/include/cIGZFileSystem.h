#include "cIGZUnknown.h"

class cIGZString;

class cIGZFileSystem : public cIGZUnknown
{
public:
    virtual char* AppDrive(void) = 0;
    virtual char* AppDirectory(void) = 0;
    virtual char* AppName(void) = 0;
    virtual char* AppExtension(void) = 0;

    virtual char* DataDirectory(void) = 0;
    virtual char* PlugInDirectory(void) = 0;

    virtual char* CDAppDrive(void) = 0;
    virtual char* CDAppDirectory(void) = 0;
    virtual char* CDDataDirectory(void) = 0;
    virtual char* CDPlugInDirectory(void) = 0;

    virtual bool FindCDDrive(void) = 0;
    virtual void UseCDIniFile(bool) = 0;
    virtual void SetExpectedCDName(cIGZString const&) = 0;
    virtual void SetExpectedCDAppPath(cIGZString const&) = 0;
};
