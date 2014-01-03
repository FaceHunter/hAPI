#pragma once

#include <OSW\ISteamClient006.h>

class SteamClient006 : ISteamClient006
{
public:
	HSteamPipe CreateSteamPipe();

	bool BReleaseSteamPipe(HSteamPipe hSteamPipe);

	HSteamUser CreateGlobalUser(HSteamPipe *phSteamPipe);

	HSteamUser ConnectToGlobalUser(HSteamPipe hSteamPipe);

	HSteamUser CreateLocalUser(HSteamPipe *phSteamPipe);

	void ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser);

	ISteamUser *GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	IVAC *GetIVAC(HSteamUser hSteamUser);

	ISteamGameServer *GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void SetLocalIPBinding(uint32 unIP, uint16 usPort);

	const char *GetUniverseName(EUniverse eUniverse);

	ISteamFriends *GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamUtils *GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamBilling *GetISteamBilling(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmaking *GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamContentServer *GetISteamContentServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamApps *GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMasterServerUpdater *GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	ISteamMatchmakingServers *GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion);

	void RunFrame();

	uint32 GetIPCCallCount();
};