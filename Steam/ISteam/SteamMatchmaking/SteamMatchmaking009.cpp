#include <STDInc.h>

int SteamMatchmaking009::GetFavoriteGameCount()
{
	HHSDBG();
	return 0;
}

bool SteamMatchmaking009::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}

int SteamMatchmaking009::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
	HHSDBG();
	return true;
}

bool SteamMatchmaking009::RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	HHSDBG();
	return true;
}

SteamAPICall_t SteamMatchmaking009::RequestLobbyList()
{
	HHSDBG();
	return NULL;
}
void SteamMatchmaking009::AddRequestLobbyListStringFilter(const char *pchKeyToMatch, const char *pchValueToMatch, ELobbyComparison eComparisonType)
{
	HHSDBG();
}
void SteamMatchmaking009::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
	HHSDBG();
}
void SteamMatchmaking009::AddRequestLobbyListNearValueFilter(const char *pchKeyToMatch, int nValueToBeCloseTo)
{
	HHSDBG();
}
void SteamMatchmaking009::AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable)
{
	HHSDBG();
}
void SteamMatchmaking009::AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter eLobbyDistanceFilter)
{
	HHSDBG();
}
void SteamMatchmaking009::AddRequestLobbyListResultCountFilter(int cMaxResults)
{
	HHSDBG();
}

void SteamMatchmaking009::AddRequestLobbyListCompatibleMembersFilter(CSteamID steamID)
{
	HHSDBG();
}

CSteamID SteamMatchmaking009::GetLobbyByIndex(int iLobby)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
SteamAPICall_t SteamMatchmaking009::CreateLobby(ELobbyType eLobbyType, int cMaxMembers)
{
	HHSDBG();
	return NULL;
}

SteamAPICall_t SteamMatchmaking009::JoinLobby(CSteamID steamIDLobby)
{
	HHSDBG();
	return NULL;
}

void SteamMatchmaking009::LeaveLobby(CSteamID steamIDLobby)
{
	HHSDBG();
}

bool SteamMatchmaking009::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
	HHSDBG();
	return true;
}

int SteamMatchmaking009::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	HHSDBG();
	return 1;
}
CSteamID SteamMatchmaking009::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
const char *SteamMatchmaking009::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	HHSDBG();
	return "Meep";
}
bool SteamMatchmaking009::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();
	return true;
}

int SteamMatchmaking009::GetLobbyDataCount(CSteamID steamIDLobby)
{
	HHSDBG();
	return NULL;
}

bool SteamMatchmaking009::GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char *pchKey, int cchKeyBufferSize, char *pchValue, int cchValueBufferSize)
{
	HHSDBG();
	return true;
}

bool SteamMatchmaking009::DeleteLobbyData(CSteamID steamIDLobby, const char *pchKey)
{
	HHSDBG();
	return true;
}

const char *SteamMatchmaking009::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
	HHSDBG();
	return "Meep";
}
void SteamMatchmaking009::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
	HHSDBG();
}

bool SteamMatchmaking009::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking009::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	HHSDBG();
	return 0;
}

bool SteamMatchmaking009::RequestLobbyData(CSteamID steamIDLobby)
{
	HHSDBG();
	return true;
}

void SteamMatchmaking009::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
	HHSDBG();
}
bool SteamMatchmaking009::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
	HHSDBG();
	return true;
}

bool SteamMatchmaking009::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking009::GetLobbyMemberLimit(CSteamID steamIDLobby)
{
	HHSDBG();
	return 2;
}

bool SteamMatchmaking009::SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)
{
	HHSDBG();
	return true;
}

bool SteamMatchmaking009::SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable)
{
	HHSDBG();
	return true;
}

CSteamID SteamMatchmaking009::GetLobbyOwner(CSteamID steamIDLobby)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}
bool SteamMatchmaking009::SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner)
{
	HHSDBG();
	return true;
}

bool SteamMatchmaking009::SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobby2)
{
	HHSDBG();
	return true;
}