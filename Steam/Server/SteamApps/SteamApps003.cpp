#include <STDInc.h>

bool SteamApps003::BIsSubscribed()
{
	HHSDBG();
	return true;
}
bool SteamApps003::BIsLowViolence()
{
	HHSDBG();
	return false;
}
bool SteamApps003::BIsCybercafe()
{
	HHSDBG();
	return false;
}
bool SteamApps003::BIsVACBanned()
{
	HHSDBG();
	return false;
}

const char *SteamApps003::GetCurrentGameLanguage()
{
	HHSDBG();
	return "english";
}
const char *SteamApps003::GetAvailableGameLanguages()
{
	HHSDBG();
	return "english";
}

bool SteamApps003::BIsSubscribedApp(AppId_t nAppID)
{
	HHSDBG();
	return true;
}

bool SteamApps003::BIsDlcInstalled(AppId_t nAppID)
{
	HHSDBG();
	return true;
}