#pragma once

#include <OSW\ISteamApps004.h>

class SteamApps004 
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
};

