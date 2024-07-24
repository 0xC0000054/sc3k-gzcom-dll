#pragma once
#include "cIGZUnknown.h"

class cGZResourceKey;
class cIGZDBSegment;
class cIGZDBRecord;
class cIGZResource;
class cIGZResourceFactory;
class cIGZResourceKeyList;

class cIGZResourceManager : public cIGZUnknown
{
public:
    virtual bool Init(void) = 0;
    virtual bool Shutdown(void) = 0;

    virtual bool GetResource(cGZResourceKey const&, uint32_t, void**) = 0;
    virtual bool GetPrivateResource(cGZResourceKey const&, uint32_t, void**) = 0;
    virtual bool GetNewResource(cGZResourceKey const&, uint32_t, void**) = 0;
    virtual bool GetNewResource(uint32_t, uint32_t, void**) = 0;
    virtual bool RemoveResource(cGZResourceKey const&) = 0;

    virtual bool Save(cGZResourceKey const&, cIGZDBSegment&) = 0;
    virtual bool Save(cIGZResourceKeyList&, cIGZDBSegment&) = 0;

    virtual bool TestForKey(cGZResourceKey&) = 0;
    virtual bool GetResourceList(cIGZResourceKeyList**) = 0;
    virtual bool GetResourceListForType(cIGZResourceKeyList**, uint32_t) = 0;
    virtual bool GetAvailableResourceListForType(cIGZResourceKeyList**, uint32_t) = 0;

    virtual bool RegisterObjectFactory(uint32_t, uint32_t) = 0;
    virtual bool UnregisterObjectFactory(uint32_t) = 0;
    virtual bool FindObjectFactory(cIGZResource const&, cIGZResourceFactory**) = 0;
    virtual bool FindObjectFactory(cGZResourceKey const&, cIGZResourceFactory**) = 0;
    virtual bool FindObjectFactory(uint32_t, cIGZResourceFactory**) = 0;
    virtual uint32_t GetFactoryCount(void) = 0;
    virtual cIGZResourceFactory* GetFactoryByIndex(uint32_t) = 0;

    virtual bool RegisterDBSegment(cIGZDBSegment&) = 0;
    virtual bool RegisterDBSegmentFront(cIGZDBSegment&) = 0;
    virtual bool RegisterDBSegmentBack(cIGZDBSegment&) = 0;
    virtual bool UnregisterDBSegment(cIGZDBSegment&) = 0;
    virtual bool TestDBSegment(cIGZDBSegment&) = 0;
    virtual bool FindDBSegment(cGZResourceKey const&, cIGZDBSegment**) = 0;
    virtual bool FindDBSegment(uint32_t, cIGZDBSegment**) = 0;
    virtual uint32_t GetSegmentCount(void) = 0;
    virtual cIGZDBSegment* GetSegmentByIndex(uint32_t) = 0;

    virtual bool OpenDBRecord(cGZResourceKey const&, cIGZDBRecord**, bool) = 0;
    virtual bool CloseDBRecord(cGZResourceKey const&, cIGZDBRecord**) = 0;
    virtual bool IsGarbageCollectionActive(void) = 0;
    virtual void SetGarbageCollectionActive(bool) = 0;
    virtual void ForceGarbageCollection(void) = 0;
};
