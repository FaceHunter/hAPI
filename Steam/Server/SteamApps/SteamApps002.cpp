#include "SteamApps002.h"
#include <HHSCommon.h>

bool BIsSubscribed()
{
	return true;
}
bool BIsLowViolence()
{
	return false;
}
bool BIsCybercafe()
{
	return false;
}
bool BIsVACBanned()
{
	return HHSCommon::GetUser()->GetPermissions() == HHSPerm::Banned;
}

const char *GetCurrentGameLanguage()
{
	return "english";
}
const char *GetAvailableGameLanguages()
{
	return "english";
}

bool BIsSubscribedApp(AppId_t nAppID)
{
	return HHSCommon::GetNetwork()->IsSubscribed(nAppID);
}