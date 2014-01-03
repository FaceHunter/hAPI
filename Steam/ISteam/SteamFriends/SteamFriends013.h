#pragma once

#include <OSW\ISteamFriends013.h>

class SteamFriends013 : public ISteamFriends013
{
public:
	const char *GetPersonaName();

	SteamAPICall_t SetPersonaName(const char *pchPersonaName);

	EPersonaState GetPersonaState();

	int GetFriendCount(int iFriendFlags);

	//STEAMWORKS_STRUCT_RETURN_2(CSteamID, GetFriendByIndex, int, iFriend, int, iFriendFlags) /*virtual CSteamID GetFriendByIndex( int iFriend, int iFriendFlags ) = 0;*/
	CSteamID GetFriendByIndex(int iFriend, int iFriendFlags);

	EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend);

	EPersonaState GetFriendPersonaState(CSteamID steamIDFriend);

	const char *GetFriendPersonaName(CSteamID steamIDFriend);

	bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo);
	const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName);

	bool HasFriend(CSteamID steamIDFriend, int iFriendFlags);

	int GetClanCount();
	//STEAMWORKS_STRUCT_RETURN_1(CSteamID, GetClanByIndex, int, iClan) /*virtual CSteamID GetClanByIndex( int iClan ) = 0;*/
	CSteamID GetClanByIndex(int iClan);
	const char *GetClanName(CSteamID steamIDClan);
	const char *GetClanTag(CSteamID steamIDClan);

	bool GetClanActivityCounts(CSteamID steamID, int *pnOnline, int *pnInGame, int *pnChatting);
	SteamAPICall_t DownloadClanActivityCounts(CSteamID groupIDs[], int nIds);

	int GetFriendCountFromSource(CSteamID steamIDSource);
	//STEAMWORKS_STRUCT_RETURN_2(CSteamID, GetFriendFromSourceByIndex, CSteamID, steamIDSource, int, iFriend) /*virtual CSteamID GetFriendFromSourceByIndex( CSteamID steamIDSource, int iFriend ) = 0;*/
	CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend);
	bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource);

	void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking);

	void ActivateGameOverlay(const char *pchDialog);

	void ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID);

	void ActivateGameOverlayToWebPage(const char *pchURL);

	void ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag);

	void SetPlayedWith(CSteamID steamIDUserPlayedWith);

	void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby);

	int GetSmallFriendAvatar(CSteamID steamIDFriend);

	int GetMediumFriendAvatar(CSteamID steamIDFriend);

	int GetLargeFriendAvatar(CSteamID steamIDFriend);

	bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly);

	SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan);

	//STEAMWORKS_STRUCT_RETURN_1(CSteamID, GetClanOwner, CSteamID, steamIDClan) /*virtual CSteamID GetClanOwner( CSteamID steamIDClan ) = 0;*/
	CSteamID GetClanOwner(CSteamID steamIDClan);

	int GetClanOfficerCount(CSteamID steamIDClan);

	//STEAMWORKS_STRUCT_RETURN_2(CSteamID, GetClanOfficerByIndex, CSteamID, steamIDClan, int, iOfficer) /*virtual CSteamID GetClanOfficerByIndex( CSteamID steamIDClan, int iOfficer ) = 0;*/
	CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer);

	EUserRestriction GetUserRestrictions();

	bool SetRichPresence(const char *pchKey, const char *pchValue);
	void ClearRichPresence();
	const char *GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey);
	int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend);
	const char *GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey);
	void RequestFriendRichPresence(CSteamID steamIDFriend);

	bool InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString);

	int GetCoplayFriendCount();
	//STEAMWORKS_STRUCT_RETURN_1(CSteamID, GetCoplayFriend, int, iCoplayFriend) /*virtual CSteamID GetCoplayFriend( int iCoplayFriend ) = 0;*/
	CSteamID GetCoplayFriend(int iCoplayFriend);
	int GetFriendCoplayTime(CSteamID steamIDFriend);
	AppId_t GetFriendCoplayGame(CSteamID steamIDFriend);

	SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan);
	bool LeaveClanChatRoom(CSteamID steamIDClan);
	int GetClanChatMemberCount(CSteamID steamIDClan);
	//STEAMWORKS_STRUCT_RETURN_2(CSteamID, GetChatMemberByIndex, CSteamID, steamIDClan, int, iUser) /*virtual CSteamID GetChatMemberByIndex( CSteamID steamIDClan, int iUser ) = 0;*/
	CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser);
	bool SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText);
	int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter);
	bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser);

	bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat);
	bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat);
	bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat);

	bool SetListenForFriendsMessages(bool bInterceptEnabled);
	bool ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend);
	int GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType);

	SteamAPICall_t GetFollowerCount(CSteamID steamID);
	SteamAPICall_t IsFollowing(CSteamID steamID);
	SteamAPICall_t EnumerateFollowingList(uint32 uStartIndex);
};