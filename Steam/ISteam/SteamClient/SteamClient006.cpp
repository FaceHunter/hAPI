#include <STDInc.h>

HSteamPipe SteamClient006::CreateSteamPipe()
{
	HHSDBG();
	return 1;
}

bool SteamClient006::BReleaseSteamPipe(HSteamPipe hSteamPipe)
{
	HHSDBG();
	return true;
}

HSteamUser SteamClient006::CreateGlobalUser(HSteamPipe *phSteamPipe)
{
	HHSDBG();
	return NULL;
}

HSteamUser SteamClient006::ConnectToGlobalUser(HSteamPipe hSteamPipe)
{
	HHSDBG();
	return NULL;
}

HSteamUser SteamClient006::CreateLocalUser(HSteamPipe *phSteamPipe)
{
	HHSDBG();
	return NULL;
}

void SteamClient006::ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser)
{
	HHSDBG();
}

ISteamUser *SteamClient006::GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamUser();
}

IVAC *SteamClient006::GetIVAC(HSteamUser hSteamUser)
{
	HHSDBG();
	return NULL;
}

ISteamGameServer *SteamClient006::GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamGameServer();
}

void SteamClient006::SetLocalIPBinding(uint32 unIP, uint16 usPort)
{
	HHSDBG();
}

const char *SteamClient006::GetUniverseName(EUniverse eUniverse)
{
	HHSDBG();
	return "k_EUniversePublic"; // SteamCommon::GetSteamID()->GetEUniverse();
}

ISteamFriends *SteamClient006::GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamFriends();
}

ISteamUtils *SteamClient006::GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamUtils();
}

ISteamBilling *SteamClient006::GetISteamBilling(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamBilling();
}

ISteamMatchmaking *SteamClient006::GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamMatchmaking();
}

ISteamContentServer *SteamClient006::GetISteamContentServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamContentServer();
}

ISteamApps *SteamClient006::GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamApps();
}

ISteamMasterServerUpdater *SteamClient006::GetISteamMasterServerUpdater(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamMasterServerUpdater();
}

ISteamMatchmakingServers *SteamClient006::GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion)
{
	HHSDBG();
	return SteamCommon::GetSteamMatchmakingServers();
}

void SteamClient006::RunFrame()
{
	HHSDBG();
}

uint32 SteamClient006::GetIPCCallCount()
{
	HHSDBG();
	return 1338;
}