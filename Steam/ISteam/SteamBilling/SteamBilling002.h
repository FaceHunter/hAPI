#pragma once

#include <OSW\ISteamBilling002.h>

class SteamBilling002 : ISteamBilling002
{
public:

	bool InitCreditCardPurchase(PackageId_t nPackageID, uint32 nCardIndex, bool bStoreCardInfo);
	bool InitPayPalPurchase(PackageId_t nPackageID);

	bool GetActivationCodeInfo(const char *pchActivationCode);
	bool PurchaseWithActivationCode(const char *pchActivationCode);

	bool GetFinalPrice();

	bool CancelPurchase();
	bool CompletePurchase();

	bool UpdateCardInfo(uint32 nCardIndex);

	bool DeleteCard(uint32);

	bool GetCardList();

	bool Obsolete_GetLicenses();

	bool CancelLicense(PackageId_t nPackageID, int32 nCancelReason);

	bool GetPurchaseReceipts(bool bUnacknowledgedOnly);

	bool SetBillingAddress(uint32 nCardIndex, const char *pchFirstName, const char *pchLastName, const char *pchAddress1, const char *pchAddress2, const char *pchCity, const char *pchPostcode, const char *pchState, const char *pchCountry, const char *pchPhone);

	bool GetBillingAddress(uint32 nCardIndex, char *pchFirstName, char *pchLastName, char *pchAddress1, char *pchAddress2, char *pchCity, char *pchPostcode, char *pchState, char *pchCountry, char *pchPhone);

	bool SetShippingAddress(const char *pchFirstName, const char *pchLastName, const char *pchAddress1, const char *pchAddress2, const char *pchCity, const char *pchPostcode, const char *pchState, const char *pchCountry, const char *pchPhone);
	bool GetShippingAddress(char *pchFirstName, char *pchLastName, char *pchAddress1, char *pchAddress2, char *pchCity, char *pchPostcode, char *pchState, char *pchCountry, char *pchPhone);

	bool SetCardInfo(uint32 nCardIndex, ECreditCardType eCreditCardType, const char *pchCardNumber, const char *pchCardHolderFirstName, const char *pchCardHolderLastName, const char *pchCardExpYear, const char *pchCardExpMonth, const char *pchCardCVV2);
	bool GetCardInfo(uint32 nCardIndex, ECreditCardType *eCreditCardType, char *pchCardNumber, char *pchCardHolderFirstName, char *pchCardHolderLastName, char *pchCardExpYear, char *pchCardExpMonth, char *pchCardCVV2);

	PackageId_t GetLicensePackageID(uint32 nLicenseIndex);
	RTime32 GetLicenseTimeCreated(uint32 nLicenseIndex);
	RTime32 GetLicenseTimeNextProcess(uint32 nLicenseIndex);
	int32 GetLicenseMinuteLimit(uint32 nLicenseIndex);
	int32 GetLicenseMinutesUsed(uint32 nLicenseIndex);
	EPaymentMethod GetLicensePaymentMethod(uint32 nLicenseIndex);
	ELicenseFlags GetLicenseFlags(uint32 nLicenseIndex);
	const char *GetLicensePurchaseCountryCode(uint32 nLicenseIndex);

	PackageId_t GetReceiptPackageID(uint32 nReceiptIndex);
	EPurchaseStatus GetReceiptStatus(uint32 nReceiptIndex);
	EPurchaseResultDetail GetReceiptResultDetail(uint32 nReceiptIndex);
	RTime32 GetReceiptTransTime(uint32 nReceiptIndex);
	uint64 GetReceiptTransID(uint32 nReceiptIndex);
	EPaymentMethod GetReceiptPaymentMethod(uint32 nReceiptIndex);
	uint32 GetReceiptBaseCost(uint32 nReceiptIndex);
	uint32 GetReceiptTotalDiscount(uint32 nReceiptIndex);
	uint32 GetReceiptTax(uint32 nReceiptIndex);
	uint32 GetReceiptShipping(uint32 nReceiptIndex);
	const char *GetReceiptCountryCode(uint32 nReceiptIndex);

	uint32 GetNumLicenses();
	uint32 GetNumReceipts();

	bool PurchaseWithMachineID(PackageId_t nPackageID, const char *pchCustomData);

	bool InitClickAndBuyPurchase(PackageId_t nPackageID, int64 nAccountNum, const char *pchState, const char *pchCountryCode);

	bool GetPreviousClickAndBuyAccount(int64 *pnAccountNum, char *pchState, char *pchCountryCode);
};