#include <STDInc.h>

bool SteamBilling001::SetBillingAddress(const char *pchName, const char *pchAddress1, const char *pchAddress2, const char *pchCity, const char *pchPostcode, const char *pchState, const char *pchCountry, const char *pchPhone)
{
	HHSDBG();
	return true;
}
bool SteamBilling001::GetBillingAddress(char *pchName, char *pchAddress1, char *pchAddress2, char *pchCity, char *pchPostcode, char *pchState, char *pchCountry, char *pchPhone)
{
	HHSDBG();
	return true;
}
bool SteamBilling001::SetShippingAddress(const char *pchName, const char *pchAddress1, const char *pchAddress2, const char *pchCity, const char *pchPostcode, const char *pchState, const char *pchCountry, const char *pchPhone)
{
	HHSDBG();
	return true;
}
bool SteamBilling001::GetShippingAddress(char *pchName, char *pchAddress1, char *pchAddress2, char *pchCity, char *pchPostcode, char *pchState, char *pchCountry, char *pchPhone)
{
	HHSDBG();
	return true;
}
bool SteamBilling001::GetFinalPrice(int32 nPackageID)
{
	HHSDBG();
	return true;
}

bool SteamBilling001::SetCardInfo(ECreditCardType eCreditCardType, const char *pchCardNumber, const char *pchCardHolderName, const char *pchCardExpYear, const char *pchCardExpMonth, const char *pchCardCVV2)
{
	HHSDBG();
	return true;
}
bool SteamBilling001::GetCardInfo(ECreditCardType *eCreditCardType, char *pchCardNumber, char *pchCardHolderName, char *pchCardExpYear, char *pchCardExpMonth, char *pchCardCVV2)
{
	HHSDBG();
	return true;
}

bool SteamBilling001::Purchase(int32 nPackageID, int32 nExpectedCostCents, uint64 gidCardID, bool bStoreCardInfo)
{
	HHSDBG();
	return true;
}