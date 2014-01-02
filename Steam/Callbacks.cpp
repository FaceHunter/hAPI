#include <STDInc.h>

SteamAPICall_t Callbacks::RegisterCall()
{
	// Add to the list and return the ID, this is the best line I can come with (probably not as fast as we would need)
	return (*mCalls.insert(mCalls.end(), std::make_pair(mCurrentCallID++, false))).first;
}

void Callbacks::Register(CCallbackBase* call, uint32_t type)
{
	CallbackBase_t* callback = new CallbackBase_t;

	callback->callback = call;
	callback->type = type;

	mCallbacks.push_back(callback);
}

void Callbacks::RegisterCallResult(CCallbackBase* call, SteamAPICall_t callID)
{
	CallbackBase_t* callback = new CallbackBase_t;

	callback->callback = call;

	mCallResults.insert(std::make_pair(callID, callback));
}

void Callbacks::UnregisterCall(CCallbackBase* call)
{
	CallbacksItr cur, end, prev;

	cur = mCallbacks.begin();
	end = mCallbacks.end();

	while (cur != end)
	{
		if ((*cur)->callback == call)
		{
			prev = cur++;

			mCallbacks.erase(prev);
		}
		else
		{
			cur++;
		}
	}
}

void Callbacks::Return(void* result, uint32_t type, SteamAPICall_t callID, uint32_t size)
{
	CallsItr itr = mCalls.find(callID);

	// Error here, we have to return to prevent crashes
	if (itr == mCalls.end()) return;

	// Create the result value
	ResultBase_t* base = new ResultBase_t;

	base->result = result;
	base->type = type;
	base->callID = callID;
	base->size = size;

	// Add it to the results list
	mResults.push_back(base);

	// Set returned to true
	(*itr).second = true;
}

void Callbacks::Run()
{
	ResultsItr cur, end, prev;

	cur = mResults.begin();
	end = mResults.end();

	while (cur != end)
	{
		CallResultsItr itr = mCallResults.find((*cur)->callID);

		if (itr != mCallResults.end())
		{
			// Call the callback
			(*itr).second->callback->Run((*cur)->result, false, (*cur)->callID);
		}

		// Increment real iterator
		prev = cur++;

		// Erase the result from the list
		mResults.erase(prev);
	}

	// Free all the memory we are able to
	mResults.clear();
}

// Declare vars
Callbacks::CallbacksList Callbacks::mCallbacks;
Callbacks::CallResultsList Callbacks::mCallResults;
Callbacks::CallsList Callbacks::mCalls;
Callbacks::ResultsList Callbacks::mResults;
SteamAPICall_t Callbacks::mCurrentCallID;