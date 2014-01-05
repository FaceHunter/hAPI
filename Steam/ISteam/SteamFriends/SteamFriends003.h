#pragma once

#include <OSW\ISteamFriends003.h>

class SteamFriends003 : public ISteamFriends003
{
public:
	const char *GetPersonaName();
	void SetPersonaName(const char *pchPersonaName);
	
	EPersonaState GetPersonaState();
	
	int GetFriendCount(EFriendFlags iFriendFlags);
	//STEAMWORKS_STRUCT_RETURN_2(CSteamID, GetFriendByIndex, int, iFriend, EFriendFlags, iFriendFlags);
	CSteamID GetFriendByIndex(int iFriend, EFriendFlags iFriendFlags);

	EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend);
	EPersonaState GetFriendPersonaState(CSteamID steamIDFriend);
	const char *GetFriendPersonaName(CSteamID steamIDFriend);

	int GetFriendAvatar(CSteamID steamIDFriend);

	bool GetFriendGamePlayed(CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort);
	const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName);

	bool HasFriend(CSteamID steamIDFriend, EFriendFlags iFriendFlags);

	int GetClanCount();
	//STEAMWORKS_STRUCT_RETURN_1(CSteamID, GetClanByIndex, int, iClan)
	CSteamID GetClanByIndex(int iClan);
	const char *GetClanName(CSteamID steamIDClan);

	int GetFriendCountFromSource(CSteamID steamIDSource);

	//STEAMWORKS_STRUCT_RETURN_2(CSteamID, GetFriendFromSourceByIndex, CSteamID, steamIDSource, int, iFriend)

	CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend);

	bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource);
	void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking);
	void ActivateGameOverlay(const char *pchDialog);
};