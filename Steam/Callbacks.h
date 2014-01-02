#pragma once

#include <STDInc.h>

struct CallbackBase_t
{
	CCallbackBase* callback;
	uint32_t type;
};

struct ResultBase_t
{
	void* result;
	uint32_t type;
	SteamAPICall_t callID;
	uint32_t size;
};

class Callbacks
{
public:
	// Typedefs for every list
	typedef std::list<CallbackBase_t*> CallbacksList;
	typedef CallbacksList::iterator CallbacksItr;

	typedef std::list<ResultBase_t*> ResultsList;
	typedef ResultsList::iterator ResultsItr;

	typedef std::map<SteamAPICall_t, bool> CallsList;
	typedef CallsList::iterator CallsItr;

	typedef std::map<SteamAPICall_t, CallbackBase_t*> CallResultsList;
	typedef CallResultsList::iterator CallResultsItr;

	static void Init() { mCurrentCallID = 0; }
	static SteamAPICall_t RegisterCall();
	static void Register(CCallbackBase* call, uint32_t type);
	static void RegisterCallResult(CCallbackBase* call, SteamAPICall_t callID);
	static void UnregisterCall(CCallbackBase* call);
	static void Return(void* result, uint32_t type, SteamAPICall_t callID, uint32_t size);
	static void Run();

private:
	static CallbacksList mCallbacks;
	static ResultsList mResults;
	static CallsList mCalls;
	static CallResultsList mCallResults;
	static SteamAPICall_t mCurrentCallID;
};