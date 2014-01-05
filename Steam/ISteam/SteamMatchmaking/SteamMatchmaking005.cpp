#include <STDInc.h>
#include "SteamMatchmaking005.h"

int SteamMatchmaking005::GetFavoriteGameCount()
{
	HHSDBG();
	return 1;
}

bool SteamMatchmaking005::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, RTime32 *pRTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking005::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, RTime32 rTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}
bool SteamMatchmaking005::RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	HHSDBG();
	return true;
}

SteamAPICall_t SteamMatchmaking005::RequestLobbyList()
{
	HHSDBG();
	return NULL;
}
void SteamMatchmaking005::AddRequestLobbyListFilter(const char *pchKeyToMatch, const char *pchValueToMatch)
{
	HHSDBG();
}
void SteamMatchmaking005::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
	HHSDBG();
}
OBSOLETE_FUNCTION void SteamMatchmaking005::AddRequestLobbyListSlotsAvailableFilter()
{
	HHSDBG();
}
void SteamMatchmaking005::AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)
{
	HHSDBG();
}

CSteamID SteamMatchmaking005::GetLobbyByIndex(int iLobby)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
SteamAPICall_t SteamMatchmaking005::CreateLobby(ELobbyType eLobbyType)
{
	HHSDBG();
	return NULL;
}
SteamAPICall_t SteamMatchmaking005::JoinLobby(CSteamID steamIDLobby)
{
	HHSDBG();
	return NULL;
}
void SteamMatchmaking005::LeaveLobby(CSteamID steamIDLobby)
{
	HHSDBG();
}
bool SteamMatchmaking005::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking005::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	HHSDBG();
	return 1;
}

CSteamID SteamMatchmaking005::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
const char *SteamMatchmaking005::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	HHSDBG();
	return "Meep";
}
bool SteamMatchmaking005::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();
	return true;
}
const char *SteamMatchmaking005::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	HHSDBG();
	return "Meep";
}
void SteamMatchmaking005::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();
}

bool SteamMatchmaking005::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking005::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	HHSDBG();
	return true;
}
bool SteamMatchmaking005::RequestLobbyData(CSteamID steamIDLobby)
{
	HHSDBG();
	return true;
}
void SteamMatchmaking005::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
	HHSDBG();
}
bool SteamMatchmaking005::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
	HHSDBG();
	return true;
}
bool SteamMatchmaking005::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking005::GetLobbyMemberLimit(CSteamID steamIDLobby)
{
	HHSDBG();
	return 1;
}

bool SteamMatchmaking005::RequestFriendsLobbies()
{
	HHSDBG();
	return true;
}

bool SteamMatchmaking005::SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)
{
	HHSDBG();
	return true;
}
CSteamID SteamMatchmaking005::GetLobbyOwner(CSteamID steamIDLobby)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

OBSOLETE_FUNCTION double SteamMatchmaking005::GetLobbyDistance(CSteamID steamIDLobby)
{
	HHSDBG();
	return 0;
}