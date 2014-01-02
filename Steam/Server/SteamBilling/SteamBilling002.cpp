#include <STDInc.h>

bool SteamBilling002::InitCreditCardPurchase(PackageId_t nPackageID, uint32 nCardIndex, bool bStoreCardInfo)
{
	HHSDBG();
	return true;
}
bool SteamBilling002::InitPayPalPurchase(PackageId_t nPackageID)
{
	HHSDBG();
	return true;
}

bool SteamBilling002::GetActivationCodeInfo(const char *pchActivationCode)
{
	HHSDBG();
	return true;
}
bool SteamBilling002::PurchaseWithActivationCode(const char *pchActivationCode)
{
	HHSDBG();
	return true;
}

bool SteamBilling002::GetFinalPrice()
{
	HHSDBG();
	return true;
}

bool SteamBilling002::CancelPurchase()
{
	HHSDBG();
	return true;
}
bool SteamBilling002::CompletePurchase()
{
	HHSDBG();
	return true;
}

bool SteamBilling002::UpdateCardInfo(uint32 nCardIndex)
{
	HHSDBG();
	return true;
}

bool SteamBilling002::DeleteCard(uint32)
{
	HHSDBG();
	return true;
}

bool SteamBilling002::GetCardList()
{
	HHSDBG();
	return true;
}

bool SteamBilling002::Obsolete_GetLicenses()
{
	HHSDBG();
	return true;
}

bool SteamBilling002::CancelLicense(PackageId_t nPackageID, int32 nCancelReason)
{
	HHSDBG();
	return true;
}

bool SteamBilling002::GetPurchaseReceipts(bool bUnacknowledgedOnly)
{
	HHSDBG();
	return true;
}

bool SteamBilling002::SetBillingAddress(uint32 nCardIndex, const char *pchFirstName, const char *pchLastName, const char *pchAddress1, const char *pchAddress2, const char *pchCity, const char *pchPostcode, const char *pchState, const char *pchCountry, const char *pchPhone)
{
	HHSDBG();
	return true;
}

bool SteamBilling002::GetBillingAddress(uint32 nCardIndex, char *pchFirstName, char *pchLastName, char *pchAddress1, char *pchAddress2, char *pchCity, char *pchPostcode, char *pchState, char *pchCountry, char *pchPhone)
{
	HHSDBG();
	return true;
}

bool SteamBilling002::SetShippingAddress(const char *pchFirstName, const char *pchLastName, const char *pchAddress1, const char *pchAddress2, const char *pchCity, const char *pchPostcode, const char *pchState, const char *pchCountry, const char *pchPhone)
{
	HHSDBG();
	return true;
}
bool SteamBilling002::GetShippingAddress(char *pchFirstName, char *pchLastName, char *pchAddress1, char *pchAddress2, char *pchCity, char *pchPostcode, char *pchState, char *pchCountry, char *pchPhone)
{
	HHSDBG();
	return true;
}

bool SteamBilling002::SetCardInfo(uint32 nCardIndex, ECreditCardType eCreditCardType, const char *pchCardNumber, const char *pchCardHolderFirstName, const char *pchCardHolderLastName, const char *pchCardExpYear, const char *pchCardExpMonth, const char *pchCardCVV2)
{
	HHSDBG();
	return true;
}
bool SteamBilling002::GetCardInfo(uint32 nCardIndex, ECreditCardType *eCreditCardType, char *pchCardNumber, char *pchCardHolderFirstName, char *pchCardHolderLastName, char *pchCardExpYear, char *pchCardExpMonth, char *pchCardCVV2)
{
	HHSDBG();
	return true;
}

PackageId_t SteamBilling002::GetLicensePackageID(uint32 nLicenseIndex)
{
	HHSDBG();
	return NULL;
}
RTime32 SteamBilling002::GetLicenseTimeCreated(uint32 nLicenseIndex)
{
	HHSDBG();
	return NULL;
}
RTime32 SteamBilling002::GetLicenseTimeNextProcess(uint32 nLicenseIndex)
{
	HHSDBG();
	return NULL;
}
int32 SteamBilling002::GetLicenseMinuteLimit(uint32 nLicenseIndex)
{
	HHSDBG();
	return NULL;
}
int32 SteamBilling002::GetLicenseMinutesUsed(uint32 nLicenseIndex)
{
	HHSDBG();
	return NULL;
}
EPaymentMethod SteamBilling002::GetLicensePaymentMethod(uint32 nLicenseIndex)
{
	HHSDBG();
	return EPaymentMethod::k_EPaymentMethodValve;
}
ELicenseFlags SteamBilling002::GetLicenseFlags(uint32 nLicenseIndex)
{
	HHSDBG();
	return ELicenseFlags::k_ELicenseFlagPending;
}
const char *SteamBilling002::GetLicensePurchaseCountryCode(uint32 nLicenseIndex)
{
	HHSDBG();
	return "Se";
}

PackageId_t SteamBilling002::GetReceiptPackageID(uint32 nReceiptIndex)
{
	HHSDBG();
	return NULL;
}
EPurchaseStatus SteamBilling002::GetReceiptStatus(uint32 nReceiptIndex)
{
	HHSDBG();
	return EPurchaseStatus::k_EPurchaseSucceeded;
}
EPurchaseResultDetail SteamBilling002::GetReceiptResultDetail(uint32 nReceiptIndex)
{
	HHSDBG();
	return EPurchaseResultDetail::k_EPurchaseResultNoDetail;
}
RTime32 SteamBilling002::GetReceiptTransTime(uint32 nReceiptIndex)
{
	HHSDBG();
	return NULL;
}
uint64 SteamBilling002::GetReceiptTransID(uint32 nReceiptIndex)
{
	HHSDBG();
	return NULL;
}
EPaymentMethod SteamBilling002::GetReceiptPaymentMethod(uint32 nReceiptIndex)
{
	HHSDBG();
	return EPaymentMethod::k_EPaymentMethodValve;
}
uint32 SteamBilling002::GetReceiptBaseCost(uint32 nReceiptIndex)
{
	HHSDBG();
	return NULL;
}
uint32 SteamBilling002::GetReceiptTotalDiscount(uint32 nReceiptIndex)
{
	HHSDBG();
	return NULL;
}
uint32 SteamBilling002::GetReceiptTax(uint32 nReceiptIndex)
{
	HHSDBG();
	return NULL;
}
uint32 SteamBilling002::GetReceiptShipping(uint32 nReceiptIndex)
{
	HHSDBG();
	return NULL;
}
const char *SteamBilling002::GetReceiptCountryCode(uint32 nReceiptIndex)
{
	HHSDBG();
	return "Se";
}

uint32 SteamBilling002::GetNumLicenses()
{
	HHSDBG();
	return NULL;
}
uint32 SteamBilling002::GetNumReceipts()
{
	HHSDBG();
	return NULL;
}

bool SteamBilling002::PurchaseWithMachineID(PackageId_t nPackageID, const char *pchCustomData)
{
	HHSDBG();
	return true;
}

bool SteamBilling002::InitClickAndBuyPurchase(PackageId_t nPackageID, int64 nAccountNum, const char *pchState, const char *pchCountryCode)
{
	HHSDBG();
	return true;
}

bool SteamBilling002::GetPreviousClickAndBuyAccount(int64 *pnAccountNum, char *pchState, char *pchCountryCode)
{
	HHSDBG();
	return true;
}