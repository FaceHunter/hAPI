#pragma once

#include <OSW\ISteamMatchmaking003.h>

class SteamMatchmaking003 : public ISteamMatchmaking003
{
public:
	int GetFavoriteGameCount();

	bool GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, RTime32 *pRTime32LastPlayedOnServer);
	int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, RTime32 rTime32LastPlayedOnServer);
	bool RemoveFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags);

	SteamAPICall_t RequestLobbyList();
	void AddRequestLobbyListFilter(const char *pchKeyToMatch, const char *pchValueToMatch);
	void AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, int nComparisonType);
	OBSOLETE_FUNCTION void AddRequestLobbyListSlotsAvailableFilter();
	
	CSteamID GetLobbyByIndex(int iLobby);
	void CreateLobby(bool bPrivate);
	void JoinLobby(CSteamID steamIDLobby);
	void LeaveLobby(CSteamID steamIDLobby);
	bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee);

	int GetNumLobbyMembers(CSteamID steamIDLobby);
	CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember);

	const char *GetLobbyData(CSteamID steamIDLobby, const char *pchKey);
	bool SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue);
	const char *GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey);
	void SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue);
	bool SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody);
	int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType);
	
	bool RequestLobbyData(CSteamID steamIDLobby);
	void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer);
	bool GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer);
	bool SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers);
	int GetLobbyMemberLimit(CSteamID steamIDLobby);
	OBSOLETE_FUNCTION void SetLobbyVoiceEnabled(CSteamID steamIDLobby, bool bEnabled);

	bool RequestFriendsLobbies();
};

