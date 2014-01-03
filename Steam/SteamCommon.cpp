#include <STDInc.h>

void SteamCommon::Init()
{
	HHSDBG();
	steamID = new CSteamID();

	// TODO: Read which version of the classes to instanciate.

	strcpy(&playerName[0], "Convery");
}

SteamAPICall_t SteamCommon::RequestEncryptedAppTicket(const void *pUserData, int cbUserData)
{
	HHSDBG();
	uint64 userID = GetSteamID()->ConvertToUint64();

	memset(encryptedAppTicket, 0, sizeof(encryptedAppTicket));

	memcpy(&encryptedAppTicket[32], pUserData, min(cbUserData, sizeof(encryptedAppTicket)));
	memcpy(&encryptedAppTicket[cbUserData + 32], &userID, sizeof(userID));

	SteamAPICall_t callID = Callbacks::RegisterCall();

	EncryptedAppTicketResponse_t *response = (EncryptedAppTicketResponse_t*)malloc(sizeof(EncryptedAppTicketResponse_t));
	response->m_eResult = k_EResultOK;

	Callbacks::Return(response, EncryptedAppTicketResponse_t::k_iCallback, callID, sizeof(EncryptedAppTicketResponse_t));

	return callID;
}

CSteamID *SteamCommon::GetSteamID()
{
	HHSDBG();
	return steamID;
}

char *SteamCommon::GetEncryptedAppTicket()
{
	HHSDBG();
	return encryptedAppTicket;
}

char *SteamCommon::GetPlayerName()
{
	HHSDBG();
	return playerName;
}

void SteamCommon::SetPlayerName(const char *newName)
{
	HHSDBG();
	strcpy(&playerName[0], newName);
}

ISteamApps *SteamCommon::GetSteamApps()
{
	HHSDBG();
	return steamApps;
}

ISteamFriends *SteamCommon::GetSteamFriends()
{
	HHSDBG();
	return steamFriends;
}

ISteamGameServer *SteamCommon::GetSteamGameServer()
{
	HHSDBG();
	return steamGameServer;
}

ISteamGameServerStats *SteamCommon::GetSteamGameServerStats()
{
	HHSDBG();
	return steamGameServerStats;
}

ISteamHTTP *SteamCommon::GetSteamHTTP()
{
	HHSDBG();
	return steamHTTP;
}

ISteamMatchmaking *SteamCommon::GetSteamMatchmaking()
{
	HHSDBG();
	return steamMatchmaking;
}

ISteamMatchmakingServers *SteamCommon::GetSteamMatchmakingServers()
{
	HHSDBG();
	return steamMatchmakingServers;
}

ISteamNetworking *SteamCommon::GetSteamNetworking()
{
	HHSDBG();
	return steamNetworking;
}

ISteamRemoteStorage *SteamCommon::GetSteamRemoteStorage()
{
	HHSDBG();
	return steamRemoteStorage;
}

ISteamUser *SteamCommon::GetSteamUser()
{
	HHSDBG();
	return steamUser;
}

ISteamUserStats *SteamCommon::GetSteamUserStats()
{
	HHSDBG();
	return steamUserStats;
}

ISteamUtils *SteamCommon::GetSteamUtils()
{
	HHSDBG();
	return steamUtils;
}

ISteamBilling *SteamCommon::GetSteamBilling()
{
	HHSDBG();
	return steamBilling;
}

ISteamContentServer *SteamCommon::GetSteamContentServer()
{
	HHSDBG();
	return steamContentServer;
}

ISteamMasterServerUpdater *SteamCommon::GetSteamMasterServerUpdater()
{
	HHSDBG();
	return steamMasterServerUpdater;
}

ISteamController *SteamCommon::GetSteamController()
{
	HHSDBG();
	return steamController;
}
ISteamScreenshots *SteamCommon::GetSteamScreenshots()
{
	HHSDBG();
	return steamScreenshots;
}
ISteamUnifiedMessages *SteamCommon::GetSteamUnifiedMessages()
{
	HHSDBG();
	return steamUnifiedMessages;
}

CSteamID *SteamCommon::steamID = NULL;
ISteamApps *SteamCommon::steamApps = NULL;
ISteamFriends *SteamCommon::steamFriends = NULL;
ISteamGameServer *SteamCommon::steamGameServer = NULL;
ISteamGameServerStats *SteamCommon::steamGameServerStats = NULL;
ISteamHTTP *SteamCommon::steamHTTP = NULL;
ISteamMatchmaking*SteamCommon::steamMatchmaking = NULL;
ISteamMatchmakingServers *SteamCommon::steamMatchmakingServers = NULL;
ISteamNetworking *SteamCommon::steamNetworking = NULL;
ISteamRemoteStorage *SteamCommon::steamRemoteStorage = NULL;
ISteamUser *SteamCommon::steamUser = NULL;
ISteamUserStats *SteamCommon::steamUserStats = NULL;
ISteamUtils *SteamCommon::steamUtils = NULL;

ISteamBilling *SteamCommon::steamBilling = NULL;
ISteamContentServer *SteamCommon::steamContentServer = NULL;
ISteamMasterServerUpdater *SteamCommon::steamMasterServerUpdater = NULL;

ISteamController *SteamCommon::steamController = NULL;
ISteamScreenshots *SteamCommon::steamScreenshots = NULL;
ISteamUnifiedMessages *SteamCommon::steamUnifiedMessages = NULL;

char SteamCommon::encryptedAppTicket[128];
char SteamCommon::playerName[255];