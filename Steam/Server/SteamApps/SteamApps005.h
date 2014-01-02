#pragma once

#include <OSW\ISteamApps005.h>

class SteamApps005 : ISteamApps005
{
public:
	bool BIsSubscribed();
	bool BIsLowViolence();
	bool BIsCybercafe();
	bool BIsVACBanned();
	const char *GetCurrentGameLanguage();
	const char *GetAvailableGameLanguages();

	bool BIsSubscribedApp(AppId_t nAppID);

	bool BIsDlcInstalled(AppId_t nAppID);

	uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID);

	bool BIsSubscribedFromFreeWeekend();
	int GetDLCCount();

	bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize);

	void InstallDLC(AppId_t nAppID);
	void UninstallDLC(AppId_t nAppID);

	void RequestAppProofOfPurchaseKey(AppId_t nAppID);

	bool GetCurrentBetaName(char *pchName, int cchNameBufferSize);
	bool MarkContentCorrupt(bool bMissingFilesOnly);
	uint32 GetInstalledDepots(DepotId_t *pvecDepots, uint32 cMaxDepots);

	uint32 GetAppInstallDir(AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize);
	bool BIsAppInstalled(AppId_t appID);
};

