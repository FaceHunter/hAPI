#include <OSW\ISteamUser017.h>

class SteamUser017 : ISteamUser017
{
public:

	HSteamUser GetHSteamUser();

	bool BLoggedOn();

	CSteamID GetSteamID();

	int InitiateGameConnection(void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure);

	void TerminateGameConnection(uint32 unIPServer, uint16 usPortServer);

	void TrackAppUsageEvent(CGameID gameID, EAppUsageEvent eAppUsageEvent, const char *pchExtraInfo = "");

	bool GetUserDataFolder(char *pchBuffer, int cubBuffer);

	void StartVoiceRecording();

	void StopVoiceRecording();

	EVoiceResult GetAvailableVoice(uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate);

	EVoiceResult GetVoice(bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate);

	EVoiceResult DecompressVoice(const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate);

	uint32 GetVoiceOptimalSampleRate();

	HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket);

	EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID);

	void EndAuthSession(CSteamID steamID);

	void CancelAuthTicket(HAuthTicket hAuthTicket);

	EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID);

	bool BIsBehindNAT();

	void AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer);

	SteamAPICall_t RequestEncryptedAppTicket(void *pDataToInclude, int cbDataToInclude);

	bool GetEncryptedAppTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket);

	int GetGameBadgeLevel(int nSeries, bool bFoil);

	int GetPlayerSteamLevel();
};