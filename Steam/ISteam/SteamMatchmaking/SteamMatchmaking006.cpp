#include <STDInc.h>
#include "SteamMatchmaking006.h"

int SteamMatchmaking006::GetFavoriteGameCount()
{
	HHSDBG();
	return 1;
}

bool SteamMatchmaking006::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, RTime32 *pRTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking006::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, RTime32 rTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}
bool SteamMatchmaking006::RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	HHSDBG();
	return true;
}

SteamAPICall_t SteamMatchmaking006::RequestLobbyList()
{
	HHSDBG();
	return NULL;
}
void SteamMatchmaking006::AddRequestLobbyListFilter(const char *pchKeyToMatch, const char *pchValueToMatch)
{
	HHSDBG();
}
void SteamMatchmaking006::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
	HHSDBG();
}
void SteamMatchmaking006::AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)
{
	HHSDBG();
}


CSteamID SteamMatchmaking006::GetLobbyByIndex(int iLobby)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
SteamAPICall_t SteamMatchmaking006::CreateLobby(ELobbyType eLobbyType)
{
	HHSDBG();
	return NULL;
}
SteamAPICall_t SteamMatchmaking006::JoinLobby(CSteamID steamIDLobby)
{
	HHSDBG();
	return NULL;
}
void SteamMatchmaking006::LeaveLobby(CSteamID steamIDLobby)
{
	HHSDBG();
}
bool SteamMatchmaking006::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	HHSDBG();
	return true;
}

int SteamMatchmaking006::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	HHSDBG();
	return 1;
}
CSteamID SteamMatchmaking006::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

const char *SteamMatchmaking006::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	HHSDBG();
	return "Meep";
}
bool SteamMatchmaking006::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();
	return true;
}

const char *SteamMatchmaking006::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	HHSDBG();
	return "Meep";
}
void SteamMatchmaking006::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();
}

bool SteamMatchmaking006::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking006::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	HHSDBG();
	return 0;
}
bool SteamMatchmaking006::RequestLobbyData(CSteamID steamIDLobby)
{
	HHSDBG();
	return true;
}

void SteamMatchmaking006::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
	HHSDBG();
}
bool SteamMatchmaking006::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
	HHSDBG();
	return true;
}

bool SteamMatchmaking006::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking006::GetLobbyMemberLimit(CSteamID steamIDLobby)
{
	HHSDBG();
	return 1;
}

bool SteamMatchmaking006::SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)
{
	HHSDBG();
	return true;
}

CSteamID SteamMatchmaking006::GetLobbyOwner(CSteamID steamIDLobby)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}