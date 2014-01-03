#include <STDInc.h>

bool SteamContentServer002::LogOn(uint32 uContentServerID)
{
	// Should probably connect to a server..
	HHSDBG();
	return true;
}
bool SteamContentServer002::LogOff()
{
	HHSDBG();
	return true;
}

bool SteamContentServer002::BLoggedOn()
{
	HHSDBG();
	return true;
}

void SteamContentServer002::SendClientContentAuthRequest(CSteamID steamID, uint32 uContentID, uint64 ulSessionToken, bool bTokenPresent)
{
	HHSDBG();
}

bool SteamContentServer002::BCheckTicket(CSteamID steamID, uint32 uContentID, const void *pvTicketData, uint32 cubTicketLength)
{
	HHSDBG();
	return true;
}