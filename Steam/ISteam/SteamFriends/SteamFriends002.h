#pragma once

#include <OSW\ISteamFriends002.h>

class SteamFriends002 : public ISteamFriends002
{
public:
	const char *GetPersonaName();
	void SetPersonaName(const char *pchPersonaName);

	EPersonaState GetPersonaState();
	void SetPersonaState(EPersonaState ePersonaState);

	int GetFriendCount(EFriendFlags iFriendFlags);
	CSteamID GetFriendByIndex(int iFriend, EFriendFlags iFriendFlags);
	//STEAMWORKS_STRUCT_RETURN_2(CSteamID, GetFriendByIndex, int, iFriend, EFriendFlags, iFriendFlags);

	EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend);
	EPersonaState GetFriendPersonaState(CSteamID steamIDFriend);
	const char *GetFriendPersonaName(CSteamID steamIDFriend);

	void SetFriendRegValue(CSteamID steamIDFriend, const char *pchKey, const char *pchValue);
	const char *GetFriendRegValue(CSteamID steamIDFriend, const char *pchkey);

	bool GetFriendGamePlayed(CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort);

	const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName);

	bool AddFriend(CSteamID steamIDFriend);
	bool RemoveFriend(CSteamID steamIDFriend);
	bool HasFriend(CSteamID steamIDFriend, EFriendFlags iFriendFlags);

	HSteamCall AddFriendByName(const char *pchEmailOrAccountName);

	bool InviteFriendByEmail(const char *emailAddr);

	int GetChatMessage(CSteamID steamIDFriend, int iChatID, void *pvData, int cubData, EChatEntryType *peFriendMsgType);
	bool SendMsgToFriend(CSteamID steamIDFriend, EChatEntryType eFriendMsgType, const void *pvMsgBody, int cubMsgBody);

	OBSOLETE_FUNCTION int GetChatIDOfChatHistoryStart(CSteamID steamIDFriend);
	OBSOLETE_FUNCTION void SetChatHistoryStart(CSteamID steamIDFriend, int iChatID);

	void ClearChatHistory(CSteamID steamIDFriend);

	int GetClanCount();
	//STEAMWORKS_STRUCT_RETURN_1(CSteamID, GetClanByIndex, int, iClan);
	const char *GetClanName(CSteamID steamIDClan);

	bool InviteFriendToClan(CSteamID steamIDfriend, CSteamID steamIDclan);
	bool AcknowledgeInviteToClan(CSteamID steamID, bool);
	int GetFriendCountFromSource(CSteamID steamIDSource);
	//STEAMWORKS_STRUCT_RETURN_2(CSteamID, GetFriendFromSourceByIndex, CSteamID, steamIDSource, int, iFriend);
};