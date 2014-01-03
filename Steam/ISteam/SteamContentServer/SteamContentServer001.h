#include <OSW\ISteamContentServer001.h>

class SteamContentServer001 : ISteamContentServer001
{
public:
	bool LogOn(uint32 uContentServerID);
	bool LogOff();

	bool BLoggedOn();

	void SendClientContentAuthRequest(CSteamID steamID, uint32 unContentID);
};