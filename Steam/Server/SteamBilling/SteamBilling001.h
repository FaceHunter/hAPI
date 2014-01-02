#pragma once

#include <OSW\ISteamBilling001.h>

class SteamBilling001 : ISteamBilling001
{
public:
	bool SetBillingAddress(const char *pchName, const char *pchAddress1, const char *pchAddress2, const char *pchCity, const char *pchPostcode, const char *pchState, const char *pchCountry, const char *pchPhone);
	bool GetBillingAddress(char *pchName, char *pchAddress1, char *pchAddress2, char *pchCity, char *pchPostcode, char *pchState, char *pchCountry, char *pchPhone);
	bool SetShippingAddress(const char *pchName, const char *pchAddress1, const char *pchAddress2, const char *pchCity, const char *pchPostcode, const char *pchState, const char *pchCountry, const char *pchPhone);
	bool GetShippingAddress(char *pchName, char *pchAddress1, char *pchAddress2, char *pchCity, char *pchPostcode, char *pchState, char *pchCountry, char *pchPhone);
	bool GetFinalPrice(int32 nPackageID);

	bool SetCardInfo(ECreditCardType eCreditCardType, const char *pchCardNumber, const char *pchCardHolderName, const char *pchCardExpYear, const char *pchCardExpMonth, const char *pchCardCVV2);
	bool GetCardInfo(ECreditCardType *eCreditCardType, char *pchCardNumber, char *pchCardHolderName, char *pchCardExpYear, char *pchCardExpMonth, char *pchCardCVV2);

	bool Purchase(int32 nPackageID, int32 nExpectedCostCents, uint64 gidCardID, bool bStoreCardInfo);
};