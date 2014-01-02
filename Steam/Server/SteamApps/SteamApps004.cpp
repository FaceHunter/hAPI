#include <STDInc.h>

bool SteamApps004::BIsSubscribed()
{
	HHSDBG();
	return true;
}
bool SteamApps004::BIsLowViolence()
{
	HHSDBG();
	return false;
}
bool SteamApps004::BIsCybercafe()
{
	HHSDBG();
	return false;
}
bool SteamApps004::BIsVACBanned()
{
	HHSDBG();
	return false;
}
const char *SteamApps004::GetCurrentGameLanguage()
{
	HHSDBG();
	return "english";
}
const char *SteamApps004::GetAvailableGameLanguages()
{
	HHSDBG();
	return "english";
}

bool SteamApps004::BIsSubscribedApp(AppId_t nAppID)
{
	HHSDBG();
	return true;
}

bool SteamApps004::BIsDlcInstalled(AppId_t nAppID)
{
	HHSDBG();
	return true;
}

uint32 SteamApps004::GetEarliestPurchaseUnixTime(AppId_t nAppID)
{
	HHSDBG();
	return NULL;
}

bool SteamApps004::BIsSubscribedFromFreeWeekend()
{
	HHSDBG();
	return false;
}
int SteamApps004::GetDLCCount()
{
	HHSDBG();
	return 0;
}

bool SteamApps004::BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)
{
	HHSDBG();
	return 0;
}

void SteamApps004::InstallDLC(AppId_t nAppID)
{
	HHSDBG();
}
void SteamApps004::UninstallDLC(AppId_t nAppID)
{
	HHSDBG();
}