#include "SteamApps002.h"

bool SteamApps002::BIsSubscribed()
{
	return true;
}
bool SteamApps002::BIsLowViolence()
{
	return false;
}
bool SteamApps002::BIsCybercafe()
{
	return false;
}
bool SteamApps002::BIsVACBanned()
{
	return false;
}

const char *SteamApps002::GetCurrentGameLanguage()
{
	return "english";
}
const char *SteamApps002::GetAvailableGameLanguages()
{
	return "english";
}

bool SteamApps002::BIsSubscribedApp(AppId_t nAppID)
{
	return true;
}