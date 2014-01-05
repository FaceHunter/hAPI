#pragma once

#include <OSW\ISteamFriends001.h>

class SteamFriends001 : public ISteamFriends001
{
public:
	const char *GetPersonaName();

	void SetPersonaName(const char *pchPersonaName);

	EPersonaState GetPersonaState();

	void SetPersonaState(EPersonaState ePersonaState);

	bool AddFriend(CSteamID steamIDFriend);
	bool RemoveFriend(CSteamID steamIDFriend);
	bool HasFriend(CSteamID steamIDFriend);

	EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend);
	EPersonaState GetFriendPersonaState(CSteamID steamIDFriend);

	bool Deprecated_GetFriendGamePlayed(CSteamID steamIDFriend, int32 *pnGameID, uint32 *punGameIP, uint16 *pusGamePort);
	const char *GetFriendPersonaName(CSteamID steamIDFried);

	HSteamCall AddFriendByName(const char *pchEmailOrAccountName);
	
	int GetFriendCount();
	CSteamID GetFriendByIndex(int iFriend);

	//STEAMWORKS_STRUCT_RETURN_1(CSteamID, GetFriendByIndex, int, iFriend);

	void SendMsgToFriend(CSteamID steamIDFriend, EChatEntryType eFriendMsgType, const char *pchMsgBody);
	void SetFriendRegValue(CSteamID steamIDFriend, const char *pchKey, const char *pchValue);
	const char *GetFriendRegValue(CSteamID steamIDFriend, const char *pchKey);
	const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName);
	
	int GetChatMessage(CSteamID steamIDFriend, int iChatID, void *pvData, int cubData, EChatEntryType *peFriendMsgType);
	bool SendMsgToFriend(CSteamID steamIDFriend, EChatEntryType eFriendMsgType, const void *pvMsgBody, int cubMsgBody);

	OBSOLETE_FUNCTION int GetChatIDOfChatHistoryStart(CSteamID steamIDFriend);
	OBSOLETE_FUNCTION void SetChatHistoryStart(CSteamID steamIDFriend, int iChatID);

	void ClearChatHistory(CSteamID steamIDFriend);

	HSteamCall InviteFriendByEmail(const char *pchEmailOrAccountname);
	uint32 GetBlockedFriendCount();

	bool GetFriendGamePlayed(CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort);
	bool GetFriendGamePlayed2(CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort);
};