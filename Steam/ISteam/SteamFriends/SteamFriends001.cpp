#include <STDInc.h>
#include "SteamFriends001.h"

const char* SteamFriends001::GetPersonaName()
{
	HHSDBG();
	return NULL;
}

void SteamFriends001::SetPersonaName(const char *pchPersonaName)
{
	HHSDBG();
}

EPersonaState SteamFriends001::GetPersonaState()
{
	HHSDBG();
	return EPersonaState::k_EPersonaStateOffline;
}

void SteamFriends001::SetPersonaState(EPersonaState ePersonaState)
{
	HHSDBG();
}

bool SteamFriends001::AddFriend(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends001::RemoveFriend(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends001::HasFriend(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

EFriendRelationship SteamFriends001::GetFriendRelationship(CSteamID steamIDFriend)
{
	HHSDBG();
	return EFriendRelationship::k_EFriendRelationshipNone;
}

EPersonaState SteamFriends001::GetFriendPersonaState(CSteamID steamIDFriend)
{
	HHSDBG();
	return EPersonaState::k_EPersonaStateOffline;
}

bool SteamFriends001::Deprecated_GetFriendGamePlayed(CSteamID steamIDFriend, int32 *pnGameID, uint32 *punGameIP, uint16 *pusGamePort)
{
	HHSDBG();
	return NULL;
}

const char* SteamFriends001::GetFriendPersonaName(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

HSteamCall SteamFriends001::AddFriendByName(const char *pchEmailOrAccountName)
{
	HHSDBG();

	// Possibly needs to be changed...
	return NULL;
}

int SteamFriends001::GetFriendCount()
{
	HHSDBG();
	return NULL;
}

CSteamID SteamFriends001::GetFriendByIndex(int iFriend)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

void SteamFriends001::SendMsgToFriend(CSteamID steamIDFriend, EChatEntryType eFriendMsgType, const char *pchMsgBody)
{
	HHSDBG();
}

void SteamFriends001::SetFriendRegValue(CSteamID steamIDFriend, const char *pchKey, const char *pchValue)
{
	HHSDBG();
}

const char* SteamFriends001::GetFriendRegValue(CSteamID steamIDFriend, const char *pchKey)
{
	HHSDBG();
	return NULL;
}


const char* SteamFriends001::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)
{
	HHSDBG();
	return NULL;
}

int SteamFriends001::GetChatMessage(CSteamID steamIDFriend, int iChatID, void *pvData, int cubData, EChatEntryType *peFriendMsgType)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends001::SendMsgToFriend(CSteamID steamIDFriend, EChatEntryType eFriendMsgType, const void *pvMsgBody, int cubMsgBody)
{
	HHSDBG();
	return NULL;
}

OBSOLETE_FUNCTION int SteamFriends001::GetChatIDOfChatHistoryStart(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

OBSOLETE_FUNCTION void SteamFriends001::SetChatHistoryStart(CSteamID steamIDFriend, int iChatID)
{
	HHSDBG();
}

void SteamFriends001::ClearChatHistory(CSteamID steamIDFriend)
{
	HHSDBG();
}

HSteamCall SteamFriends001::InviteFriendByEmail(const char *pchEmailOrAccountName)
{
	HHSDBG();
	return NULL;
}

uint32 SteamFriends001::GetBlockedFriendCount()
{
	HHSDBG();
	return NULL;
}

bool SteamFriends001::GetFriendGamePlayed(CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends001::GetFriendGamePlayed2(CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort)
{
	HHSDBG();
	return NULL;
}

