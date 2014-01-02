#include "SteamApps003.h"

bool SteamApps003::BIsSubscribed()
{
	return true;
}
bool SteamApps003::BIsLowViolence()
{
	return false;
}
bool SteamApps003::BIsCybercafe()
{
	return false;
}
bool SteamApps003::BIsVACBanned()
{
	return false;
}

const char *SteamApps003::GetCurrentGameLanguage()
{
	return "english";
}
const char *SteamApps003::GetAvailableGameLanguages()
{
	return "english";
}

bool SteamApps003::BIsSubscribedApp(AppId_t nAppID)
{
	return true;
}

bool SteamApps003::BIsDlcInstalled(AppId_t nAppID)
{
	return true;
}