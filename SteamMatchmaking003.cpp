#include <STDInc.h>
#include "SteamMatchmaking003.h"

int SteamMatchmaking003::GetFavoriteGameCount()
{ 
	HHSDBG();
	return 1;
}

bool SteamMatchmaking003::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, RTime32 *pRTime32LastPlayedOnServer)
{ 
	HHSDBG();
	return true;
}
int SteamMatchmaking003::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, RTime32 rTime32LastPlayedOnServer)
{  
	HHSDBG();
	return true;
}
bool SteamMatchmaking003::RemoveFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{ 
	HHSDBG();
	return true;
}

SteamAPICall_t SteamMatchmaking003::RequestLobbyList()
{ 
	HHSDBG();
	return NULL;
}
void SteamMatchmaking003::AddRequestLobbyListFilter(const char *pchKeyToMatch, const char *pchValueToMatch)
{ 
	HHSDBG();
}
void SteamMatchmaking003::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)
{ 
	HHSDBG();
}
OBSOLETE_FUNCTION void SteamMatchmaking003::AddRequestLobbyListSlotsAvailableFilter()
{ 
	HHSDBG();
}
CSteamID SteamMatchmaking003::GetLobbyByIndex(int iLobby)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
void SteamMatchmaking003::CreateLobby(bool bPrivate)
{ 
	HHSDBG();
}
void SteamMatchmaking003::JoinLobby(CSteamID steamIDLobby)
{ 
	HHSDBG();
}
void SteamMatchmaking003::LeaveLobby(CSteamID steamIDLobby)
{ 
	HHSDBG();
}
bool SteamMatchmaking003::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking003::GetNumLobbyMembers(CSteamID steamIDLobby)
{ 
	HHSDBG();
	return 1;
}
CSteamID SteamMatchmaking003::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{ 
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
const char *SteamMatchmaking003::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{ 
	HHSDBG();
	return "Meep";
}

bool SteamMatchmaking003::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{ 
	HHSDBG();
	return true;
}
const char *SteamMatchmaking003::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	HHSDBG();
	return "Meep";
}
void SteamMatchmaking003::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{  
	HHSDBG();
}
bool SteamMatchmaking003::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{ 
	HHSDBG();
	return true;
}
int SteamMatchmaking003::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	HHSDBG();
	return 0;
}
bool SteamMatchmaking003::RequestLobbyData(CSteamID steamIDLobby)
{ 
	HHSDBG();
	return true;
}
void SteamMatchmaking003::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{ 
	HHSDBG();
}
bool SteamMatchmaking003::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{ 
	HHSDBG();
	return true;
}
bool SteamMatchmaking003::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
{ 
	HHSDBG();
	return true;
}
int SteamMatchmaking003::GetLobbyMemberLimit(CSteamID steamIDLobby)
{ 
	HHSDBG();
	return 1;
}
OBSOLETE_FUNCTION void SteamMatchmaking003::SetLobbyVoiceEnabled(CSteamID steamIDLobby, bool bEnabled)
{ 
	HHSDBG();
}

bool SteamMatchmaking003::RequestFriendsLobbies()
{
	HHSDBG();
	return false;
}