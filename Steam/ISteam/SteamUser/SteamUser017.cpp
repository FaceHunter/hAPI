#include <STDInc.h>

HSteamUser SteamUser017::GetHSteamUser()
{
	HHSDBG();
	return 1;
}

bool SteamUser017::BLoggedOn()
{
	return true;
}

int SteamUser017::InitiateGameConnection(void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
	HHSDBG();
	return NULL;
}

void SteamUser017::TerminateGameConnection(uint32 unIPServer, uint16 usPortServer)
{
	HHSDBG();
}

void SteamUser017::TrackAppUsageEvent(CGameID gameID, EAppUsageEvent eAppUsageEvent, const char *pchExtraInfo)
{
	HHSDBG();
}

CSteamID SteamUser017::GetSteamID()
{
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

bool SteamUser017::GetUserDataFolder(char *pchBuffer, int cubBuffer)
{
	HHSDBG();
	return true;
}

void SteamUser017::StartVoiceRecording()
{
	HHSDBG();
}

void SteamUser017::StopVoiceRecording()
{
	HHSDBG();
}

EVoiceResult SteamUser017::GetAvailableVoice(uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate)
{
	HHSDBG();
	return EVoiceResult::k_EVoiceResultOK;
}

EVoiceResult SteamUser017::GetVoice(bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate)
{
	HHSDBG();
	return EVoiceResult::k_EVoiceResultOK;
}

EVoiceResult SteamUser017::DecompressVoice(const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
	HHSDBG();
	return EVoiceResult::k_EVoiceResultOK;
}

uint32 SteamUser017::GetVoiceOptimalSampleRate()
{
	HHSDBG();
	return 322;
}

HAuthTicket SteamUser017::GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
	HHSDBG();
	return NULL;
}

EBeginAuthSessionResult SteamUser017::BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
	HHSDBG();
	return EBeginAuthSessionResult::k_EBeginAuthSessionResultOK;
}

void SteamUser017::EndAuthSession(CSteamID steamID)
{
	HHSDBG();
}

void SteamUser017::CancelAuthTicket(HAuthTicket hAuthTicket)
{
	HHSDBG();
}

EUserHasLicenseForAppResult SteamUser017::UserHasLicenseForApp(CSteamID steamID, AppId_t appID)
{
	HHSDBG();
	return EUserHasLicenseForAppResult::k_EUserHasLicenseResultHasLicense;
}

bool SteamUser017::BIsBehindNAT()
{
	HHSDBG();
	return false;
}

void SteamUser017::AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
	HHSDBG();
}

SteamAPICall_t SteamUser017::RequestEncryptedAppTicket(void *pDataToInclude, int cbDataToInclude)
{
	HHSDBG();
	return NULL;
}

bool SteamUser017::GetEncryptedAppTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
	HHSDBG();
	return true;
}

int SteamUser017::GetGameBadgeLevel(int nSeries, bool bFoil)
{
	HHSDBG();
	return NULL;
}

int SteamUser017::GetPlayerSteamLevel()
{
	HHSDBG();
	return NULL;
}