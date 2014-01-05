#include <STDInc.h>
#include "SteamFriends002.h"

const char* SteamFriends002::GetPersonaName()
{
	HHSDBG();
	return NULL;
}

void SteamFriends002::SetPersonaName(const char *pchPersonaName)
{
	HHSDBG();
}

EPersonaState SteamFriends002::GetPersonaState()
{
	HHSDBG();
	return EPersonaState::k_EPersonaStateOffline;
}

void SteamFriends002::SetPersonaState(EPersonaState ePersonaState)
{
	HHSDBG();
}

int SteamFriends002::GetFriendCount(EFriendFlags iFriendFlags)
{
	HHSDBG();
	return NULL;
}

CSteamID SteamFriends002::GetFriendByIndex(int iFriend, EFriendFlags iFriendFlags)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

EFriendRelationship SteamFriends002::GetFriendRelationship(CSteamID steamIDFriend)
{
	HHSDBG();
	return EFriendRelationship::k_EFriendRelationshipNone;
}

EPersonaState SteamFriends002::GetFriendPersonaState(CSteamID steamIDFriend)
{
	HHSDBG();
	return EPersonaState::k_EPersonaStateOffline;
}

const char* SteamFriends002::GetFriendPersonaName(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

void SteamFriends002::SetFriendRegValue(CSteamID steamIDFriend, const char *pchKey, const char *pchValue)
{
	HHSDBG();
}

const char* SteamFriends002::GetFriendRegValue(CSteamID steamIDFriend, const char *pchValue)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends002::GetFriendGamePlayed(CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort)
{
	HHSDBG();
	return NULL;
}

const char* SteamFriends002::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends002::AddFriend(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends002::RemoveFriend(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends002::HasFriend(CSteamID steamIDFriend, EFriendFlags iFriendFlags)
{
	HHSDBG();
	return NULL;
}

HSteamCall SteamFriends002::AddFriendByName(const char *pchEmailOrAccountName)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends002::InviteFriendByEmail(const char *emailAddr)
{
	HHSDBG();
	return NULL;
}

int SteamFriends002::GetChatMessage(CSteamID steamIDFriend, int iChatID, void *pvData, int cubData, EChatEntryType *peFriendMsgType)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends002::SendMsgToFriend(CSteamID steamIDFriend, EChatEntryType eFriendMsgType, const void *pvMsgBody, int cubMsgBody)
{
	HHSDBG();
	return NULL;
}

OBSOLETE_FUNCTION int SteamFriends002::GetChatIDOfChatHistoryStart(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

OBSOLETE_FUNCTION void SteamFriends002::SetChatHistoryStart(CSteamID steamIDFriend, int iChatID)
{
	HHSDBG();
}

void SteamFriends002::ClearChatHistory(CSteamID steamIDFriend)
{
	HHSDBG();
}

int SteamFriends002::GetClanCount()
{
	HHSDBG();
	return NULL;
}

const char* SteamFriends002::GetClanName(CSteamID steamIDClan)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends002::InviteFriendToClan(CSteamID steamIDfriend, CSteamID steamIDclan)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends002::AcknowledgeInviteToClan(CSteamID steamID, bool)
{
	HHSDBG();
	return NULL;
}

int SteamFriends002::GetFriendCountFromSource(CSteamID steamIDSource)
{
	HHSDBG();
	return NULL;
}