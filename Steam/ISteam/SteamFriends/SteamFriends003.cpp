#include <STDInc.h>
#include "SteamFriends003.h"

const char* SteamFriends003::GetPersonaName()
{
	HHSDBG();
	return NULL;
}

void SteamFriends003::SetPersonaName(const char *pchPersonaName)
{
	HHSDBG();
}

EPersonaState SteamFriends003::GetPersonaState()
{
	HHSDBG();
	return EPersonaState::k_EPersonaStateOffline;
}

int SteamFriends003::GetFriendCount(EFriendFlags iFriendFlags)
{
	HHSDBG();
	return NULL;
}

CSteamID SteamFriends003::GetFriendByIndex(int iFriend, EFriendFlags iFriendFlags)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

EFriendRelationship SteamFriends003::GetFriendRelationship(CSteamID steamIDFriend)
{
	HHSDBG();
	return EFriendRelationship::k_EFriendRelationshipNone;
}

EPersonaState SteamFriends003::GetFriendPersonaState(CSteamID steamIDFriend)
{
	HHSDBG();
	return EPersonaState::k_EPersonaStateOffline;
}

const char* SteamFriends003::GetFriendPersonaName(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

int SteamFriends003::GetFriendAvatar(CSteamID steamIDFriend)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends003::GetFriendGamePlayed(CSteamID steamIDFriend, uint64 *pulGameID, uint32 *punGameIP, uint16 *pusGamePort, uint16 *pusQueryPort)
{
	HHSDBG();
	return NULL;
}

const char* SteamFriends003::GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)
{
	HHSDBG();
	return NULL;
}

bool SteamFriends003::HasFriend(CSteamID steamIDFriend, EFriendFlags iFriendFlags)
{
	HHSDBG();
	return NULL;
}

int SteamFriends003::GetClanCount()
{
	HHSDBG();
	return NULL;
}

CSteamID SteamFriends003::GetClanByIndex(int iClan)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

const char* SteamFriends003::GetClanName(CSteamID steamIDClan)
{
	HHSDBG();
	return NULL;
}

int SteamFriends003::GetFriendCountFromSource(CSteamID steamIDSource)
{
	HHSDBG();
	return NULL;
}

CSteamID SteamFriends003::GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

bool SteamFriends003::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)
{
	HHSDBG();
	return NULL;
}

void SteamFriends003::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)
{
	HHSDBG();
}

void SteamFriends003::ActivateGameOverlay(const char *pchDialog)
{
	HHSDBG();
}