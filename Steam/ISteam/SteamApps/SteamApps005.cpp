#include <STDInc.h>

bool SteamApps005::BIsSubscribed()
{
	HHSDBG();
	return true;
}
bool SteamApps005::BIsLowViolence()
{
	HHSDBG();
	return false;
}
bool SteamApps005::BIsCybercafe()
{
	HHSDBG();
	return false;
}
bool SteamApps005::BIsVACBanned()
{
	HHSDBG();
	return false;
}
const char *SteamApps005::GetCurrentGameLanguage()
{
	HHSDBG();
	return "english";
}
const char *SteamApps005::GetAvailableGameLanguages()
{
	HHSDBG();
	return "english";
}

bool SteamApps005::BIsSubscribedApp(AppId_t nAppID)
{
	HHSDBG();
	return true;
}

bool SteamApps005::BIsDlcInstalled(AppId_t nAppID)
{
	HHSDBG();
	return true;
}

uint32 SteamApps005::GetEarliestPurchaseUnixTime(AppId_t nAppID)
{
	HHSDBG();
	return NULL;
}

bool SteamApps005::BIsSubscribedFromFreeWeekend()
{
	HHSDBG();
	return false;
}
int SteamApps005::GetDLCCount()
{
	HHSDBG();
	return NULL;
}

bool SteamApps005::BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)
{
	HHSDBG();
	return false;
}

void SteamApps005::InstallDLC(AppId_t nAppID)
{
	HHSDBG();
}
void SteamApps005::UninstallDLC(AppId_t nAppID)
{
	HHSDBG();
}

void SteamApps005::RequestAppProofOfPurchaseKey(AppId_t nAppID)
{
	HHSDBG();
}

bool SteamApps005::GetCurrentBetaName(char *pchName, int cchNameBufferSize)
{
	HHSDBG();
	return true;
}
bool SteamApps005::MarkContentCorrupt(bool bMissingFilesOnly)
{
	HHSDBG();
	return true;
}
uint32 SteamApps005::GetInstalledDepots(DepotId_t *pvecDepots, uint32 cMaxDepots)
{
	HHSDBG();
	return NULL;
}

uint32 SteamApps005::GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize)
{
	HHSDBG();
	return NULL;
}
bool SteamApps005::BIsAppInstalled(AppId_t appID)
{
	HHSDBG();
	return true;
}