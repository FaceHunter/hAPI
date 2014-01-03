#pragma once

#include <OSW\ISteamApps003.h>

class SteamApps003 : ISteamApps003
{
public:
	bool BIsSubscribed();
	bool BIsLowViolence();
	bool BIsCybercafe();
	bool BIsVACBanned();
	const char *GetCurrentGameLanguage();
	const char *GetAvailableGameLanguages();

	// only use this member if you need to check ownership of another game related to yours, a demo for example
	bool BIsSubscribedApp(AppId_t nAppID);

	// Takes AppID of DLC and checks if the user owns the DLC & if the DLC is installed
	bool BIsDlcInstalled(AppId_t nAppID);
};