#include <STDInc.h>

HSteamPipe SteamClient008::CreateSteamPipe()
{
	HHSDBG();
	return 1;
}

bool SteamClient008::BReleaseSteamPipe(HSteamPipe hSteamPipe)
{
	HHSDBG();
	return true;
}

HSteamUser SteamClient008::ConnectToGlobalUser(HSteamPipe hSteamPipe)
{
	HHSDBG();
	return NULL;
}

HSteamUser SteamClient008::CreateLocalUser(HSteamPipe *phSteamPipe, EAccountType eAccountType)
{
	HHSDBG();
	return NULL;
}

void SteamClient008::ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser)
{
	HHSDBG();
}

ISteamUser *SteamClient008::GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamUser();
}

ISteamGameServer *SteamClient008::GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamGameServer();
}

void SteamClient008::SetLocalIPBinding(uint32 unIP, uint16 usPort)
{
	HHSDBG();
}

ISteamFriends *SteamClient008::GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamFriends();
}

ISteamUtils *SteamClient008::GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamUtils();
}

ISteamMatchmaking *SteamClient008::GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamMatchmaking();
}

ISteamMasterServerUpdater *SteamClient008::GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamMasterServerUpdater();
}

ISteamMatchmakingServers *SteamClient008::GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamMatchmakingServers();
}

void *SteamClient008::GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return NULL;
}

ISteamUserStats *SteamClient008::GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamUserStats();
}

ISteamApps *SteamClient008::GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamApps();
}

ISteamNetworking *SteamClient008::GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamNetworking();
}

ISteamRemoteStorage *SteamClient008::GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamRemoteStorage();
}

void SteamClient008::RunFrame()
{
	HHSDBG();
}

uint32 SteamClient008::GetIPCCallCount()
{
	HHSDBG();
	return 1338;
}

void SteamClient008::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)
{
	HHSDBG();
}