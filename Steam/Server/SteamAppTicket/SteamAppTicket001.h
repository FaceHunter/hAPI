#include <OSW\ISteamAppTicket001.h>

class SteamAppTicket001 : ISteamAppTicket001
{
public:
	uint32 GetAppOwnershipTicketData(AppId_t nAppId, void *pvSignedTicket, uint32 cbSignedTicket, uint32 *piAppId, uint32 *piSteamId, uint32 *piSignature, uint32 *pcbSignature);
};