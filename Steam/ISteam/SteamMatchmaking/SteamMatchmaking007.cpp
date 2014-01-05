#include <STDInc.h>
#include "SteamMatchmaking007.h"

int SteamMatchmaking007::GetFavoriteGameCount()
{
	HHSDBG();
	return 0;
}

bool SteamMatchmaking007::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking007::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}
bool SteamMatchmaking007::RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	HHSDBG();
	return true;
}

SteamAPICall_t SteamMatchmaking007::RequestLobbyList()
{
	HHSDBG();
	return NULL;
}
void SteamMatchmaking007::AddRequestLobbyListStringFilter(const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType)
{
	HHSDBG();
}
void SteamMatchmaking007::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
	HHSDBG();
}
void SteamMatchmaking007::AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)
{
	HHSDBG();
}
void SteamMatchmaking007::AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable)
{
	HHSDBG();
}

CSteamID SteamMatchmaking007::GetLobbyByIndex(int iLobby)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
SteamAPICall_t SteamMatchmaking007::CreateLobby(ELobbyType eLobbyType, int cMaxMembers)
{
	HHSDBG();
	return NULL;
}
SteamAPICall_t SteamMatchmaking007::JoinLobby(CSteamID steamIDLobby)
{
	HHSDBG();
	return NULL;
}
void SteamMatchmaking007::LeaveLobby(CSteamID steamIDLobby)
{
	HHSDBG();
}
bool SteamMatchmaking007::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking007::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	HHSDBG();
	return 1;
}
CSteamID SteamMatchmaking007::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
const char *SteamMatchmaking007::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	HHSDBG();
	return "Meep";
}
bool SteamMatchmaking007::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking007::GetLobbyDataCount(CSteamID steamIDLobby)
{
	HHSDBG();
	return 0;
}
bool SteamMatchmaking007::GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize)
{
	HHSDBG();
	return true;
}
bool SteamMatchmaking007::DeleteLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	HHSDBG();
	return true;
}
const char *SteamMatchmaking007::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	HHSDBG();
	return "Meep";
}
void SteamMatchmaking007::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();
}
bool SteamMatchmaking007::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking007::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	HHSDBG();
	return 0;
}
bool SteamMatchmaking007::RequestLobbyData(CSteamID steamIDLobby)
{
	HHSDBG();
	return true;
}
void SteamMatchmaking007::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
	HHSDBG();
}
bool SteamMatchmaking007::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
	HHSDBG();
	return true;
}
bool SteamMatchmaking007::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking007::GetLobbyMemberLimit(CSteamID steamIDLobby)
{
	HHSDBG();
	return 1;
}
bool SteamMatchmaking007::SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)
{
	HHSDBG();
	return true;
}
bool SteamMatchmaking007::SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable)
{
	HHSDBG();
	return true;
}
CSteamID SteamMatchmaking007::GetLobbyOwner(CSteamID steamIDLobby)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
bool SteamMatchmaking007::SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
	HHSDBG();
	return true;
}