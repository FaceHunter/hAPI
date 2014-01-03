#include <STDInc.h>

uint64 SteamUnifiedMessages001::SendMethod(const char *, const void *, uint32, uint64)
{
	HHSDBG();
	return NULL;
}
bool SteamUnifiedMessages001::GetMethodResponseInfo(uint64, uint32 *, EResult *)
{
	HHSDBG();
	return true;
}
bool SteamUnifiedMessages001::GetMethodResponseData(uint64, void *, uint32, bool)
{
	HHSDBG();
	return true;
}
bool SteamUnifiedMessages001::ReleaseMethod(uint64)
{
	HHSDBG();
	return true;
}
bool SteamUnifiedMessages001::SendNotification(const char *, const void *, uint32)
{
	HHSDBG();
	return true;
}