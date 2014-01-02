#pragma once

#include <OSW\ISteamApps002.h>

class SteamApps002 : ISteamApps002
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
};