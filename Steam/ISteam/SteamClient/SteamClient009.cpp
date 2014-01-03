#include <STDInc.h>

HSteamPipe SteamClient009::CreateSteamPipe()
{
	HHSDBG();
	return 1;
}

bool SteamClient009::BReleaseSteamPipe(HSteamPipe hSteamPipe)
{
	HHSDBG();
	return true;
}

HSteamUser SteamClient009::ConnectToGlobalUser(HSteamPipe hSteamPipe)
{
	HHSDBG();
	return NULL;
}

HSteamUser SteamClient009::CreateLocalUser(HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
	HHSDBG();
	return NULL;
}

void SteamClient009::ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser)
{
	HHSDBG();
}

ISteamUser *SteamClient009::GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamUser();
}

ISteamGameServer *SteamClient009::GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamGameServer();
}

void SteamClient009::SetLocalIPBinding(uint32 unIP, uint16 usPort)
{
	HHSDBG();
}

ISteamFriends *SteamClient009::GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamFriends();
}

ISteamUtils *SteamClient009::GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamUtils();
}

ISteamMatchmaking *SteamClient009::GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamMatchmaking();
}

ISteamMasterServerUpdater *SteamClient009::GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamMasterServerUpdater();
}

ISteamMatchmakingServers *SteamClient009::GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamMatchmakingServers();
}

void *SteamClient009::GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return NULL;
}

ISteamUserStats *SteamClient009::GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamUserStats();
}

ISteamApps *SteamClient009::GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamApps();
}

ISteamNetworking *SteamClient009::GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamNetworking();
}

ISteamRemoteStorage *SteamClient009::GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamRemoteStorage();
}

void SteamClient009::RunFrame()
{
	HHSDBG();
}

uint32 SteamClient009::GetIPCCallCount()
{
	HHSDBG();
	return 1338;
}

void SteamClient009::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)
{
	HHSDBG();
}