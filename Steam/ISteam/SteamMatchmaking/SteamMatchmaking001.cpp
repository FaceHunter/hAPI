#include <STDInc.h>
#include "SteamMatchmaking001.h"

int SteamMatchmaking001::GetFavoriteGameCount()
{
	return 1;
}

bool SteamMatchmaking001::GetFavoriteGame(int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking001::AddFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}
bool SteamMatchmaking001::RemoveFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags)
{
	HHSDBG();
	return true;
}

bool SteamMatchmaking001::GetFavoriteGame2(int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}

int SteamMatchmaking001::AddFavoriteGame2(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}

bool SteamMatchmaking001::RemoveFavoriteGame2(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	HHSDBG();
	return true;
}

void SteamMatchmaking001::RequestLobbyList(uint64 ulGameID, MatchMakingKeyValuePair_t *pFilters, uint32 nFilters)
{
	HHSDBG();
}
CSteamID SteamMatchmaking001::GetLobbyByIndex(int iLobby)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
void SteamMatchmaking001::CreateLobby(uint64 ulGameID, bool bPrivate)
{
	HHSDBG();
}
void SteamMatchmaking001::JoinLobby(CSteamID steamIDLobby)
{
	HHSDBG();
}
void SteamMatchmaking001::LeaveLobby(CSteamID steamIDLobby)
{
	HHSDBG();
}
bool SteamMatchmaking001::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking001::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	HHSDBG();
	return 1;
}
CSteamID SteamMatchmaking001::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
const char *SteamMatchmaking001::GetLobbyData(CSteamID SteamIDLobby, const char *pchKey)
{
	HHSDBG();
	return "Meep";
}
void SteamMatchmaking001::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();
}
const char *SteamMatchmaking001::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	HHSDBG();
	return "Meep";
}
void SteamMatchmaking001::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();
}
void SteamMatchmaking001::ChangeLobbyAdmin(CSteamID steamIDLobby, CSteamID steamIDNewAdmin)
{
	HHSDBG();
}
bool SteamMatchmaking001::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking001::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	HHSDBG();
	return 0;
}

bool SteamMatchmaking001::RequestLobbyData(CSteamID steamIDLobby)
{
	HHSDBG();
	return true;
}