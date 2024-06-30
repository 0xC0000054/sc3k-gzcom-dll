#include "cGZMessage.h"
#include "cIGZApp.h"
#include "cIGZCheatCodeManager.h"
#include "cIGZCOM.h"
#include "cIGZFileSystem.h"
#include "cIGZFrameWork.h"
#include "cIGZMessageServer.h"
#include "cIGZRegistry.h"
#include "cIGZString.h"
#include "cRZAutoRefCount.h"
#include "cRZMessageCOMDirector.h"
#include "cISC3App.h"
#include "GZServPtrs.h"

#if _WIN32
#include <Windows.h>
#endif

#include <iostream>
#include <memory>
#include <vector>

// This must be unique for every plugin. Generate a 32-bit random number and use it.
// DO NOT REUSE DIRECTOR IDS EVER.
static const uint32_t kDumpCheatCodeDirectorID = 0x015C10DE;

static const uint32_t kSC3MessagePostCityInit = 0x511FDAE5;

namespace
{
	void PrintLineToDebugOutput(const char* const line)
	{
#if _WIN32
		OutputDebugStringA(line);
		OutputDebugStringA("\n");
#else
		std::cout << line << std::endl;
#endif // _WIN32
	}

	void PrintLineToDebugOutputFormatted(const char* const format, ...)
	{
		va_list args;
		va_start(args, format);

		va_list argsCopy;
		va_copy(argsCopy, args);

		int formattedStringLength = std::vsnprintf(nullptr, 0, format, argsCopy);

		va_end(argsCopy);

		if (formattedStringLength > 0)
		{
			size_t formattedStringLengthWithNull = static_cast<size_t>(formattedStringLength) + 1;

			constexpr size_t stackBufferSize = 1024;

			if (formattedStringLengthWithNull >= stackBufferSize)
			{
				std::unique_ptr<char[]> buffer = std::make_unique_for_overwrite<char[]>(formattedStringLengthWithNull);

				std::vsnprintf(buffer.get(), formattedStringLengthWithNull, format, args);

				PrintLineToDebugOutput(buffer.get());
			}
			else
			{
				char buffer[stackBufferSize]{};

				std::vsnprintf(buffer, stackBufferSize, format, args);

				PrintLineToDebugOutput(buffer);
			}
		}

		va_end(args);
	}
}

// This example director dumps a list of the registered cheat codes to the debugger console.

class DumpCheatCodeDllDirector : public cRZMessageCOMDirector
{
	uint32_t GetDirectorID() const
	{
		return kDumpCheatCodeDirectorID;
	}

	void PostCityInit()
	{
		PrintLineToDebugOutput("PostCityInit");

		cIGZApp* const pApp = mpFrameWork->Application();
		cRZAutoRefCount<cISC3App> pSC3App;

		if (pApp->QueryInterface(GZIID_cISC3App, pSC3App.AsPPVoid()))
		{
			cIGZCheatCodeManager* pCheatMgr = pSC3App->GetCheatCodeManager();

			if (pCheatMgr)
			{
				// We have to estimate how large a cheat code buffer to use.
				// Unlike SimCity 4, the SimCity 3000 cIGZCheatCodeManager implementation doesn't allow passing
				// a null pointer with an array size of 0 to get the actual number of cheat strings.

				uint32_t cheatArraySize = 256;

				std::vector<cIGZString*> cheatStrings(cheatArraySize);

				uint32_t returnedCount = pCheatMgr->GetListOfAllCheatStrings(cheatStrings.data(), cheatArraySize);

				if (returnedCount > 0)
				{
					for (uint32_t i = 0; i < cheatArraySize; i++)
					{
						cIGZString* str = cheatStrings[i];
						uint32_t cheatID = 0;

						pCheatMgr->DoesCheatCodeMatch(*str, cheatID);

						// Print the cheat string and its unique id to the debugger console.
						PrintLineToDebugOutputFormatted("%s = 0x%08X", str->ToChar(), cheatID);
					}
				}
			}
		}
	}

	bool DoMessage(cGZMessage& message)
	{
		switch (message.dwMessageType)
		{
		case kSC3MessagePostCityInit:
			PostCityInit();
			break;
		}

		return true;
	}

	bool OnStart(cIGZCOM* pCOM)
	{
		cIGZFrameWork* const pFramework = pCOM->FrameWork();

		pFramework->AddHook(this);

		return true;
	}

	bool PostAppInit()
	{
		cIGZMessageServerPtr pMessageServ;

		if (pMessageServ)
		{
			pMessageServ->AddNotification(this, kSC3MessagePostCityInit);
		}

		return true;
	}
};

cRZCOMDllDirector* RZGetCOMDllDirector()
{
	static DumpCheatCodeDllDirector instance;

	return &instance;
}