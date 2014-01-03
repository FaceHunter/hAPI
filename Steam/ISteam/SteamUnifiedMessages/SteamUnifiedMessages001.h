#pragma once

#include <OSW\ISteamUnifiedMessages001.h>

class SteamUnifiedMessages001 : ISteamUnifiedMessages001
{
public:
	uint64 SendMethod(const char *, const void *, uint32, uint64);
	bool GetMethodResponseInfo(uint64, uint32 *, EResult *);
	bool GetMethodResponseData(uint64, void *, uint32, bool);
	bool ReleaseMethod(uint64);
	bool SendNotification(const char *, const void *, uint32);
};