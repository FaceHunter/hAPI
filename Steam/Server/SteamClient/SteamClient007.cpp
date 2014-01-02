#include <STDInc.h>

HSteamPipe SteamClient007::CreateSteamPipe()
{
	HHSDBG();
	return 1;
}

bool SteamClient007::BReleaseSteamPipe(HSteamPipe hSteamPipe)
{
	HHSDBG();
	return true;
}

HSteamUser SteamClient007::ConnectToGlobalUser(HSteamPipe hSteamPipe)
{
	HHSDBG();
	return NULL;
}

HSteamUser SteamClient007::CreateLocalUser(HSteamPipe *phSteamPipe)
{
	HHSDBG();
	return NULL;
}

void SteamClient007::ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser)
{
	HHSDBG();
}

ISteamUser *SteamClient007::GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamUser();
}

ISteamGameServer *SteamClient007::GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamGameServer();
}

void SteamClient007::SetLocalIPBinding(uint32 unIP, uint16 usPort)
{
	// Wut? The old clients are weird..
	HHSDBG();
}

ISteamFriends *SteamClient007::GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamFriends();
}

ISteamUtils *SteamClient007::GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamUtils();
}

ISteamMatchmaking *SteamClient007::GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamMatchmaking();
}

ISteamContentServer *SteamClient007::GetISteamContentServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamContentServer();
}

ISteamMasterServerUpdater *SteamClient007::GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamMasterServerUpdater();
}

ISteamMatchmakingServers *SteamClient007::GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamMatchmakingServers();
}

void *SteamClient007::GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return NULL;
}

void SteamClient007::RunFrame()
{
	HHSDBG();
}

uint32 SteamClient007::GetIPCCallCount()
{
	HHSDBG();
	return 1338;
}

ISteamUserStats *SteamClient007::GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamUserStats();
}

ISteamApps *SteamClient007::GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamApps();
}

ISteamNetworking *SteamClient007::GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamNetworking();
}

void SteamClient007::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)
{
	HHSDBG();
}

ISteamRemoteStorage *SteamClient007::GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamRemoteStorage();
}