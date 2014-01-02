#include <STDInc.h>

bool SteamApps002::BIsSubscribed()
{
	HHSDBG();
	return true;
}
bool SteamApps002::BIsLowViolence()
{
	HHSDBG();
	return false;
}
bool SteamApps002::BIsCybercafe()
{
	HHSDBG();
	return false;
}
bool SteamApps002::BIsVACBanned()
{
	HHSDBG();
	return false;
}

const char *SteamApps002::GetCurrentGameLanguage()
{
	HHSDBG();
	return "english";
}
const char *SteamApps002::GetAvailableGameLanguages()
{
	HHSDBG();
	return "english";
}

bool SteamApps002::BIsSubscribedApp(AppId_t nAppID)
{
	HHSDBG();
	return true;
}