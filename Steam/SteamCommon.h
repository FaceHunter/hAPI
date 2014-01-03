#pragma once

#include <STDInc.h>

class SteamCommon
{
public:
	static void Init();

	static CSteamID *GetSteamID();
	static SteamAPICall_t RequestEncryptedAppTicket(const void *pUserData, int cbUserData);

	static char *GetEncryptedAppTicket();

	static char *GetPlayerName();
	static void SetPlayerName(const char *newName);

	static ISteamApps *GetSteamApps();
	static ISteamFriends *GetSteamFriends();
	static ISteamGameServer *GetSteamGameServer();
	static ISteamGameServerStats *GetSteamGameServerStats();
	
	static ISteamHTTP *GetSteamHTTP();
	static ISteamMatchmaking *GetSteamMatchmaking();
	static ISteamMatchmakingServers *GetSteamMatchmakingServers();

	static ISteamNetworking *GetSteamNetworking();
	static ISteamRemoteStorage *GetSteamRemoteStorage();

	static ISteamUser *GetSteamUser();
	static ISteamUtils *GetSteamUtils();
	static ISteamUserStats *GetSteamUserStats();

	static ISteamBilling *GetSteamBilling();
	static ISteamContentServer *GetSteamContentServer();
	static ISteamMasterServerUpdater *GetSteamMasterServerUpdater();

	static ISteamScreenshots *GetSteamScreenshots();

private:
	static CSteamID *steamID;

	static ISteamApps *steamApps;
	static ISteamFriends *steamFriends;
	static ISteamGameServer *steamGameServer;
	static ISteamGameServerStats *steamGameServerStats;

	static ISteamHTTP *steamHTTP;
	static ISteamMatchmaking *steamMatchmaking;
	static ISteamMatchmakingServers *steamMatchmakingServers;

	static ISteamNetworking *steamNetworking;
	static ISteamRemoteStorage *steamRemoteStorage;

	static ISteamUser *steamUser;
	static ISteamUtils *steamUtils;
	static ISteamUserStats *steamUserStats;

	static ISteamBilling *steamBilling;
	static ISteamContentServer *steamContentServer;
	static ISteamMasterServerUpdater *steamMasterServerUpdater;

	static ISteamScreenshots *steamScreenshots;

	static char encryptedAppTicket[128];
	static char playerName[255];
};