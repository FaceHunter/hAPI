#include <STDInc.h>

void SteamCommon::Init()
{
	steamID = new CSteamID();

	// TODO: Read which version of the classes to instanciate.

	strcpy(&playerName[0], "Convery");
}

SteamAPICall_t SteamCommon::RequestEncryptedAppTicket(const void *pUserData, int cbUserData)
{

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
	return steamID;
}

char *SteamCommon::GetEncryptedAppTicket()
{
	return encryptedAppTicket;
}

char *SteamCommon::GetPlayerName()
{
	return playerName;
}

void SteamCommon::SetPlayerName(const char *newName)
{
	strcpy(&playerName[0], newName);
}

ISteamApps *SteamCommon::GetSteamApps()
{
	return steamApps;
}

ISteamFriends *SteamCommon::GetSteamFriends()
{
	return steamFriends;
}

ISteamGameServer *SteamCommon::GetSteamGameServer()
{
	return steamGameServer;
}

ISteamGameServerStats *SteamCommon::GetSteamGameServerStats()
{
	return steamGameServerStats;
}

ISteamHTTP *SteamCommon::GetSteamHTTP()
{
	return steamHTTP;
}

ISteamMatchmaking *SteamCommon::GetSteamMatchmaking()
{
	return steamMatchmaking;
}

ISteamMatchmakingServers *SteamCommon::GetSteamMatchmakingServers()
{
	return steamMatchmakingServers;
}

ISteamNetworking *SteamCommon::GetSteamNetworking()
{
	return steamNetworking;
}

ISteamRemoteStorage *SteamCommon::GetSteamRemoteStorage()
{
	return steamRemoteStorage;
}

ISteamUser *SteamCommon::GetSteamUser()
{
	return steamUser;
}

ISteamUserStats *SteamCommon::GetSteamUserStats()
{
	return steamUserStats;
}

ISteamUtils *SteamCommon::GetSteamUtils()
{
	return steamUtils;
}

ISteamBilling *SteamCommon::GetSteamBilling()
{
	return steamBilling;
}

ISteamContentServer *SteamCommon::GetSteamContentServer()
{
	return steamContentServer;
}

ISteamMasterServerUpdater *SteamCommon::GetSteamMasterServerUpdater()
{
	return steamMasterServerUpdater;
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

char SteamCommon::encryptedAppTicket[128];
char SteamCommon::playerName[255];