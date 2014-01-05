#pragma once

#include <OSW\ISteamMatchmaking001.h>

class SteamMatchmaking001 : public ISteamMatchmaking001
{
public:
	int GetFavoriteGameCount();

	bool GetFavoriteGame(int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer);
	int AddFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer);
	bool RemoveFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint32 unFlags);
	
	bool GetFavoriteGame2(int iGame, uint32 *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer);
	int AddFavoriteGame2(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer);
	bool RemoveFavoriteGame2(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags);

	void RequestLobbyList(uint64 ulGameID, MatchMakingKeyValuePair_t *pFilters, uint32 nFilters);
	CSteamID GetLobbyByIndex(int iLobby);
	void CreateLobby(uint64 ulGameID, bool bPrivate);
	void JoinLobby(CSteamID steamIDLobby);
	void LeaveLobby(CSteamID steamIDLobby);
	bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee);
	int GetNumLobbyMembers(CSteamID steamIDLobby);
	CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember);
	
	const char *GetLobbyData(CSteamID SteamIDLobby, const char *pchKey);
	void SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue);
	const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey);
	void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue);
	void ChangeLobbyAdmin(CSteamID steamIDLobby, CSteamID steamIDNewAdmin);
	bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody);
	int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType);

	bool RequestLobbyData(CSteamID steamIDLobby);
};