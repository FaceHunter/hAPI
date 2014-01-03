#include <STDInc.h>

bool ValueExists(char *Section, char *Key, char *File)
{
	char Buffer[512];
	if (GetPrivateProfileString(Section, Key, NULL, Buffer, 512, File) > 0)
		return true;
	return false;
}



void SteamCommon::Init()
{ // I Think this is one of the ugliest functions I've ever written..
	HHSDBG();
	steamID = new CSteamID();

	char Buffer[512];
	char Path[512];

	GetCurrentDirectoryA(512, Path);
	sprintf(Path, "%s\\hAPI.ini", Path);

	if (GetPrivateProfileString("Authentication", "Username", "Unknown", Buffer, 512, Path) > 0)
		strcpy(&playerName[0], Buffer);

	if (ValueExists("Game", "SteamAppID", Path))
		steamAppID = GetPrivateProfileIntA("Game", "SteamAppID", 0, Path);

	// Which version of the classes to use.
	// TODO: Find a better way..
	if (ValueExists("Version", "SteamUser", Path))
	{
		switch (GetPrivateProfileIntA("Version", "SteamUser", 0, Path))
		{
		case 17:
			steamUser = (ISteamUser *)new SteamUser017();
			break;

		default:
			MessageBoxA(0, "Steamuser version is not implemented.", 0, 0);
			break;
		}
	}

	if (ValueExists("Version", "SteamFriends", Path))
	{
		int K = GetPrivateProfileIntA("Version", "SteamFriends", 0, Path);
		K += 10;
		switch (GetPrivateProfileIntA("Version", "SteamFriends", 0, Path))
		{
		case 13:
			steamFriends = (ISteamFriends *) new SteamFriends013();
			break;

		default:
			MessageBoxA(0, "SteamFriends version is not implemented.", 0, 0);
			break;
		}
	}

	if (ValueExists("Version", "SteamUtils", Path))
	{
		switch (GetPrivateProfileIntA("Version", "SteamUtils", 0, Path))
		{
		default:
			MessageBoxA(0, "SteamUtils version is not implemented.", 0, 0);
			break;
		}
	}

	if (ValueExists("Version", "SteamMatchMaking", Path))
	{
		switch (GetPrivateProfileIntA("Version", "SteamMatchMaking", 0, Path))
		{
		default:
			MessageBoxA(0, "SteamMatchMaking version is not implemented.", 0, 0);
			break;
		}
	}

	if (ValueExists("Version", "SteamMatchMakingServers", Path))
	{
		switch (GetPrivateProfileIntA("Version", "SteamMatchMakingServers", 0, Path))
		{
		default:
			MessageBoxA(0, "SteamMatchMakingServers version is not implemented.", 0, 0);
			break;
		}
	}

	if (ValueExists("Version", "SteamUserStats", Path))
	{
		switch (GetPrivateProfileIntA("Version", "SteamUserStats", 0, Path))
		{
		default:
			MessageBoxA(0, "SteamUserStats version is not implemented.", 0, 0);
			break;
		}
	}

	if (ValueExists("Version", "SteamApps", Path))
	{
		switch (GetPrivateProfileIntA("Version", "SteamApps", 0, Path))
		{
		case 001:
			steamApps = (ISteamApps *) new SteamApps001();
			break;
		case 002:
			steamApps = (ISteamApps *) new SteamApps002();
			break;
		case 003:
			steamApps = (ISteamApps *) new SteamApps003();
			break;
		case 004:
			steamApps = (ISteamApps *) new SteamApps004();
			break;
		case 005:
			steamApps = (ISteamApps *) new SteamApps005();
			break;

		default:
			MessageBoxA(0, "SteamApps version is not implemented.", 0, 0);
			break;
		}
	}

	if (ValueExists("Version", "SteamNetworking", Path))
	{
		switch (GetPrivateProfileIntA("Version", "SteamNetworking", 0, Path))
		{
		default:
			MessageBoxA(0, "SteamNetworking version is not implemented.", 0, 0);
			break;
		}
	}

	if (ValueExists("Version", "SteamRemoteStorage", Path))
	{
		switch (GetPrivateProfileIntA("Version", "SteamRemoteStorage", 0, Path))
		{
		default:
			MessageBoxA(0, "SteamRemoteStorage version is not implemented.", 0, 0);
			break;
		}
	}

	if (ValueExists("Version", "SteamScreenshots", Path))
	{
		switch (GetPrivateProfileIntA("Version", "SteamScreenshots", 0, Path))
		{
		default:
			MessageBoxA(0, "SteamScreenshots version is not implemented.", 0, 0);
			break;
		}
	}

	if (ValueExists("Version", "SteamHTTP", Path))
	{
		switch (GetPrivateProfileIntA("Version", "SteamHTTP", 0, Path))
		{
		default:
			MessageBoxA(0, "SteamHTTP version is not implemented.", 0, 0);
			break;
		}
	}

	if (ValueExists("Version", "SteamUnifiedMessages", Path))
	{
		switch (GetPrivateProfileIntA("Version", "SteamUnifiedMessages", 0, Path))
		{
		default:
			MessageBoxA(0, "SteamUnifiedMessages version is not implemented.", 0, 0);
			break;
		}
	}

	if (ValueExists("Version", "SteamController", Path))
	{
		switch (GetPrivateProfileIntA("Version", "SteamController", 0, Path))
		{
		default:
			MessageBoxA(0, "SteamController version is not implemented.", 0, 0);
			break;
		}
	}
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

AppId_t SteamCommon::GetSteamAppID()
{
	return steamAppID;
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
AppId_t SteamCommon::steamAppID = NULL;
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