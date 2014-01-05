#include <STDInc.h>
#include "SteamMatchmaking002.h"

int SteamMatchmaking002::GetFavoriteGameCount()
{
	HHSDBG();
	return 1;
}

bool SteamMatchmaking002::GetFavoriteGame(int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, RTime32 *pRTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking002::AddFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, RTime32 rTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}
bool SteamMatchmaking002::RemoveFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	HHSDBG();
	return true;
}

void SteamMatchmaking002::RequestLobbyList()
{ 
	HHSDBG();
}
CSteamID GetLobbyByIndex(int iLobby)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
void SteamMatchmaking002::CreateLobby(bool bPrivate)
{ 
	HHSDBG();
}
void SteamMatchmaking002::JoinLobby(CSteamID steamIDLobby)
{
	HHSDBG();
}
void SteamMatchmaking002::LeaveLobby(CSteamID steamIDLobby)
{
	HHSDBG();
}
bool SteamMatchmaking002::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{ 
	HHSDBG();
	return true;
}
int SteamMatchmaking002::GetNumLobbyMembers(CSteamID steamIDLobby)
{ 
	HHSDBG();
	return 1;
}
CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
const char *SteamMatchmaking002::GetLobbyData(CSteamID SteamIDLobby, const char *pchKey)
{
	HHSDBG();
	return "Meep";
}
void SteamMatchmaking002::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();
}
const char *SteamMatchmaking002::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	HHSDBG();
	return "Meep";
}
void SteamMatchmaking002::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();
}
bool SteamMatchmaking002::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{ 
	HHSDBG();
	return true;
}
int SteamMatchmaking002::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{ 
	return 0;
}

bool SteamMatchmaking002::RequestLobbyData(CSteamID steamIDLobby)
{ 
	HHSDBG();
	return true;
}

void SteamMatchmaking002::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{ 
	HHSDBG();
}
