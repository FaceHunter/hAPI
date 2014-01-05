#include <STDInc.h>
#include "SteamMatchmaking008.h"

int SteamMatchmaking008::GetFavoriteGameCount()
{
	HHSDBG();
	return 0;
}

bool SteamMatchmaking008::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking008::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}
bool SteamMatchmaking008::RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	HHSDBG();
	return true;
}

SteamAPICall_t SteamMatchmaking008::RequestLobbyList()
{
	HHSDBG();
	return NULL;
}
void SteamMatchmaking008::AddRequestLobbyListStringFilter(const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType)
{
	HHSDBG();
}
void SteamMatchmaking008::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
	HHSDBG();
}
void SteamMatchmaking008::AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)
{
	HHSDBG();
}
void SteamMatchmaking008::AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable)
{
	HHSDBG();
}
void SteamMatchmaking008::AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter eLobbyDistanceFilter)
{
	HHSDBG();
}
void SteamMatchmaking008::AddRequestLobbyListResultCountFilter(int cMaxResults)
{
	HHSDBG();
}

CSteamID SteamMatchmaking008::GetLobbyByIndex(int iLobby)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
SteamAPICall_t SteamMatchmaking008::CreateLobby(ELobbyType eLobbyType, int cMaxMembers)
{
	HHSDBG();
	return NULL;
}
SteamAPICall_t SteamMatchmaking008::JoinLobby(CSteamID steamIDLobby)
{
	HHSDBG();
	return NULL;
}
void SteamMatchmaking008::LeaveLobby(CSteamID steamIDLobby)
{
	HHSDBG();
}
bool SteamMatchmaking008::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking008::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	HHSDBG();
	return 1;
}
CSteamID SteamMatchmaking008::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
const char *SteamMatchmaking008::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	HHSDBG();
	return "Meep";
}
bool SteamMatchmaking008::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking008::GetLobbyDataCount(CSteamID steamIDLobby)
{
	HHSDBG();
	return 0;
}
bool SteamMatchmaking008::GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize)
{
	HHSDBG();
	return true;
}
bool SteamMatchmaking008::DeleteLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	HHSDBG();
	return true;
}
const char *SteamMatchmaking008::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	HHSDBG();
	return "Meep";
}
void SteamMatchmaking008::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();	
}
bool SteamMatchmaking008::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking008::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	HHSDBG();
	return 0;
}
bool SteamMatchmaking008::RequestLobbyData(CSteamID steamIDLobby)
{
	HHSDBG();
	return true;
}
void SteamMatchmaking008::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
	HHSDBG();
}
bool SteamMatchmaking008::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
	HHSDBG();
	return true;
}
bool SteamMatchmaking008::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking008::GetLobbyMemberLimit(CSteamID steamIDLobby)
{
	HHSDBG();
	return 1;
}
bool SteamMatchmaking008::SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)
{
	HHSDBG();
	return true;
}
bool SteamMatchmaking008::SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable)
{
	HHSDBG();
	return true;
}
CSteamID SteamMatchmaking008::GetLobbyOwner(CSteamID steamIDLobby)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
bool SteamMatchmaking008::SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
	HHSDBG();
	return true;
}