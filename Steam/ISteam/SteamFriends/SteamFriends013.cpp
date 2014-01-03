#include <STDInc.h>

const char* SteamFriends013::GetPersonaName()
{
	HHSDBG();
	return NULL;
}

SteamAPICall_t  SteamFriends013::SetPersonaName(const char *pchPersonaName)
{
	HHSDBG();
	return NULL;
}

EPersonaState  SteamFriends013::GetPersonaState()
{
	HHSDBG();
	return EPersonaState::k_EPersonaStateOffline;
}

int SteamFriends013::GetFriendCount(int iFriendFlags)
{
	HHSDBG();
	return NULL;
}

CSteamID SteamFriends013::GetFriendByIndex(int iFriend, int iFriendFlags)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

EFriendRelationship SteamFriends013::GetFriendRelationship(CSteamID steamIDFriend)
{
	HHSDBG();
	return EFriendRelationship::k_EFriendRelationshipNone;
}


EPersonaState SteamFriends013::GetFriendPersonaState(CSteamID steamIDFriend)
{
	HHSDBG();
	return EPersonaState::k_EPersonaStateOffline;
}

const char* SteamFriends013::GetFriendPersonaName(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends013::GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t *pFriendGameInfo)
{
	HHSDBG();
	return NULL;
}

const char* SteamFriends013::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends013::HasFriend(CSteamID steamIDFriend, int iFriendFlags)
{
	HHSDBG();
	return NULL;
}

int SteamFriends013::GetClanCount()
{
	HHSDBG();
	return NULL;
}

CSteamID SteamFriends013::GetClanByIndex(int iClan)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

const char* SteamFriends013::GetClanName(CSteamID steamIDClan)
{
	HHSDBG();
	return NULL;
}

const char* SteamFriends013::GetClanTag(CSteamID steamIDClan)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends013::GetClanActivityCounts(CSteamID steamID, int *pnOnline, int *pnInGame, int *pnChatting)
{
	HHSDBG();
	return NULL;
}

SteamAPICall_t SteamFriends013::DownloadClanActivityCounts(CSteamID groupIDs[], int nIds)
{
	HHSDBG();
	return NULL;
}

int SteamFriends013::GetFriendCountFromSource(CSteamID steamIDSource)
{
	HHSDBG();
	return NULL;
}

CSteamID SteamFriends013::GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

bool SteamFriends013::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)
{
	HHSDBG();
	return NULL;
}


void SteamFriends013::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)
{
	HHSDBG();
}

void SteamFriends013::ActivateGameOverlay(const char *pchDialog)
{
	HHSDBG();
}

void SteamFriends013::ActivateGameOverlayToUser(const char *pchDialog, CSteamID steamID)
{
	HHSDBG();
}

void SteamFriends013::ActivateGameOverlayToWebPage(const char *pchURL)
{
	HHSDBG();
}

void SteamFriends013::ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag)
{
	HHSDBG();
}

void SteamFriends013::SetPlayedWith(CSteamID steamIDUserPlayedWith)
{
	HHSDBG();
}

void SteamFriends013::ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)
{
	HHSDBG();
}

int SteamFriends013::GetSmallFriendAvatar(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

int SteamFriends013::GetMediumFriendAvatar(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

int SteamFriends013::GetLargeFriendAvatar(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends013::RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)
{
	HHSDBG();
	return NULL;
}

SteamAPICall_t SteamFriends013::RequestClanOfficerList(CSteamID steamIDClan)
{
	HHSDBG();
	return NULL;
}

CSteamID SteamFriends013::GetClanOwner(CSteamID steamIDClan)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

int SteamFriends013::GetClanOfficerCount(CSteamID steamIDClan)
{
	HHSDBG();
	return NULL;
}

CSteamID SteamFriends013::GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

EUserRestriction SteamFriends013::GetUserRestrictions()
{
	HHSDBG();
	return EUserRestriction::k_nUserRestrictionNone;
}

bool SteamFriends013::SetRichPresence(const char *pchKey, const char *pchValue)
{
	HHSDBG();
	return NULL;
}

void SteamFriends013::ClearRichPresence()
{
	HHSDBG();
}

const char* SteamFriends013::GetFriendRichPresence(CSteamID steamIDFriend, const char *pchKey)
{
	HHSDBG();
	return NULL;
}

int SteamFriends013::GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

const char* SteamFriends013::GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey)
{
	HHSDBG();
	return NULL;
}

void SteamFriends013::RequestFriendRichPresence(CSteamID steamIDFriend)
{
	HHSDBG();
}

bool SteamFriends013::InviteUserToGame(CSteamID steamIDFriend, const char *pchConnectString)
{
	HHSDBG();
	return NULL;
}

int SteamFriends013::GetCoplayFriendCount()
{
	HHSDBG();
	return NULL;
}

CSteamID SteamFriends013::GetCoplayFriend(int iCoplayFriend)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

int SteamFriends013::GetFriendCoplayTime(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

AppId_t SteamFriends013::GetFriendCoplayGame(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

SteamAPICall_t SteamFriends013::JoinClanChatRoom(CSteamID steamIDClan)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends013::LeaveClanChatRoom(CSteamID steamIDClan)
{
	HHSDBG();
	return NULL;
}

int SteamFriends013::GetClanChatMemberCount(CSteamID steamIDClan)
{
	HHSDBG();
	return NULL;
}

CSteamID SteamFriends013::GetChatMemberByIndex(CSteamID steamIDClan, int iUser)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

bool SteamFriends013::SendClanChatMessage(CSteamID steamIDClanChat, const char *pchText)
{
	HHSDBG();
	return NULL;
}

int SteamFriends013::GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, CSteamID *pSteamIDChatter)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends013::IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends013::IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends013::OpenClanChatWindowInSteam(CSteamID steamIDClanChat)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends013::CloseClanChatWindowInSteam(CSteamID steamIDClanChat)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends013::SetListenForFriendsMessages(bool bInterceptEnabled)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends013::ReplyToFriendMessage(CSteamID steamIDFriend, const char *pchMsgToSend)
{
	HHSDBG();
	return NULL;
}

int SteamFriends013::GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
	HHSDBG();
	return NULL;
}

SteamAPICall_t SteamFriends013::GetFollowerCount(CSteamID steamID)
{
	HHSDBG();
	return NULL;
}

SteamAPICall_t SteamFriends013::IsFollowing(CSteamID steamID)
{
	HHSDBG();
	return NULL;;
}

SteamAPICall_t SteamFriends013::EnumerateFollowingList(uint32 uStartIndex)
{
	HHSDBG();
	return NULL;
}