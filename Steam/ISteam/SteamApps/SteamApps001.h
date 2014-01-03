#pragma once

#include <OSW\ISteamApps001.h>

class SteamApps001 : ISteamApps001
{
public:
	int GetAppData(AppId_t nAppID, const char *pchKey, char *pchValue, int cchValueMax);
};