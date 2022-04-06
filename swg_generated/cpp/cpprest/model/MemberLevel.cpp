/**
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.18.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "MemberLevel.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

MemberLevel::MemberLevel()
{
    m_Security_level = 0.0;
    m_Security_levelIsSet = false;
    m_Fee_level = 0.0;
    m_Fee_levelIsSet = false;
    m_Email_verified = false;
    m_Email_verifiedIsSet = false;
    m_Identity_auth_verified = false;
    m_Identity_auth_verifiedIsSet = false;
    m_Bank_account_verified = false;
    m_Bank_account_verifiedIsSet = false;
    m_Kakao_pay_auth_verified = false;
    m_Kakao_pay_auth_verifiedIsSet = false;
    m_Locked = false;
    m_LockedIsSet = false;
    m_Wallet_locked = false;
    m_Wallet_lockedIsSet = false;
}

MemberLevel::~MemberLevel()
{
}

void MemberLevel::validate()
{
    // TODO: implement validation
}

web::json::value MemberLevel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Security_levelIsSet)
    {
        val[utility::conversions::to_string_t("security_level")] = ModelBase::toJson(m_Security_level);
    }
    if(m_Fee_levelIsSet)
    {
        val[utility::conversions::to_string_t("fee_level")] = ModelBase::toJson(m_Fee_level);
    }
    if(m_Email_verifiedIsSet)
    {
        val[utility::conversions::to_string_t("email_verified")] = ModelBase::toJson(m_Email_verified);
    }
    if(m_Identity_auth_verifiedIsSet)
    {
        val[utility::conversions::to_string_t("identity_auth_verified")] = ModelBase::toJson(m_Identity_auth_verified);
    }
    if(m_Bank_account_verifiedIsSet)
    {
        val[utility::conversions::to_string_t("bank_account_verified")] = ModelBase::toJson(m_Bank_account_verified);
    }
    if(m_Kakao_pay_auth_verifiedIsSet)
    {
        val[utility::conversions::to_string_t("kakao_pay_auth_verified")] = ModelBase::toJson(m_Kakao_pay_auth_verified);
    }
    if(m_LockedIsSet)
    {
        val[utility::conversions::to_string_t("locked")] = ModelBase::toJson(m_Locked);
    }
    if(m_Wallet_lockedIsSet)
    {
        val[utility::conversions::to_string_t("wallet_locked")] = ModelBase::toJson(m_Wallet_locked);
    }

    return val;
}

void MemberLevel::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("security_level")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("security_level")];
        if(!fieldValue.is_null())
        {
            setSecurityLevel(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fee_level")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("fee_level")];
        if(!fieldValue.is_null())
        {
            setFeeLevel(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email_verified")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("email_verified")];
        if(!fieldValue.is_null())
        {
            setEmailVerified(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identity_auth_verified")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("identity_auth_verified")];
        if(!fieldValue.is_null())
        {
            setIdentityAuthVerified(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bank_account_verified")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("bank_account_verified")];
        if(!fieldValue.is_null())
        {
            setBankAccountVerified(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kakao_pay_auth_verified")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("kakao_pay_auth_verified")];
        if(!fieldValue.is_null())
        {
            setKakaoPayAuthVerified(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locked")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("locked")];
        if(!fieldValue.is_null())
        {
            setLocked(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wallet_locked")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("wallet_locked")];
        if(!fieldValue.is_null())
        {
            setWalletLocked(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void MemberLevel::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Security_levelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("security_level"), m_Security_level));
    }
    if(m_Fee_levelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fee_level"), m_Fee_level));
    }
    if(m_Email_verifiedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("email_verified"), m_Email_verified));
    }
    if(m_Identity_auth_verifiedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("identity_auth_verified"), m_Identity_auth_verified));
    }
    if(m_Bank_account_verifiedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bank_account_verified"), m_Bank_account_verified));
    }
    if(m_Kakao_pay_auth_verifiedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("kakao_pay_auth_verified"), m_Kakao_pay_auth_verified));
    }
    if(m_LockedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("locked"), m_Locked));
    }
    if(m_Wallet_lockedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("wallet_locked"), m_Wallet_locked));
    }
}

void MemberLevel::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("security_level")))
    {
        setSecurityLevel(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("security_level"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fee_level")))
    {
        setFeeLevel(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fee_level"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("email_verified")))
    {
        setEmailVerified(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("email_verified"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("identity_auth_verified")))
    {
        setIdentityAuthVerified(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("identity_auth_verified"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bank_account_verified")))
    {
        setBankAccountVerified(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("bank_account_verified"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("kakao_pay_auth_verified")))
    {
        setKakaoPayAuthVerified(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("kakao_pay_auth_verified"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("locked")))
    {
        setLocked(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("locked"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("wallet_locked")))
    {
        setWalletLocked(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("wallet_locked"))));
    }
}

double MemberLevel::getSecurityLevel() const
{
    return m_Security_level;
}


void MemberLevel::setSecurityLevel(double value)
{
    m_Security_level = value;
    m_Security_levelIsSet = true;
}
bool MemberLevel::securityLevelIsSet() const
{
    return m_Security_levelIsSet;
}

void MemberLevel::unsetSecurity_level()
{
    m_Security_levelIsSet = false;
}

double MemberLevel::getFeeLevel() const
{
    return m_Fee_level;
}


void MemberLevel::setFeeLevel(double value)
{
    m_Fee_level = value;
    m_Fee_levelIsSet = true;
}
bool MemberLevel::feeLevelIsSet() const
{
    return m_Fee_levelIsSet;
}

void MemberLevel::unsetFee_level()
{
    m_Fee_levelIsSet = false;
}

bool MemberLevel::isEmailVerified() const
{
    return m_Email_verified;
}


void MemberLevel::setEmailVerified(bool value)
{
    m_Email_verified = value;
    m_Email_verifiedIsSet = true;
}
bool MemberLevel::emailVerifiedIsSet() const
{
    return m_Email_verifiedIsSet;
}

void MemberLevel::unsetEmail_verified()
{
    m_Email_verifiedIsSet = false;
}

bool MemberLevel::isIdentityAuthVerified() const
{
    return m_Identity_auth_verified;
}


void MemberLevel::setIdentityAuthVerified(bool value)
{
    m_Identity_auth_verified = value;
    m_Identity_auth_verifiedIsSet = true;
}
bool MemberLevel::identityAuthVerifiedIsSet() const
{
    return m_Identity_auth_verifiedIsSet;
}

void MemberLevel::unsetIdentity_auth_verified()
{
    m_Identity_auth_verifiedIsSet = false;
}

bool MemberLevel::isBankAccountVerified() const
{
    return m_Bank_account_verified;
}


void MemberLevel::setBankAccountVerified(bool value)
{
    m_Bank_account_verified = value;
    m_Bank_account_verifiedIsSet = true;
}
bool MemberLevel::bankAccountVerifiedIsSet() const
{
    return m_Bank_account_verifiedIsSet;
}

void MemberLevel::unsetBank_account_verified()
{
    m_Bank_account_verifiedIsSet = false;
}

bool MemberLevel::isKakaoPayAuthVerified() const
{
    return m_Kakao_pay_auth_verified;
}


void MemberLevel::setKakaoPayAuthVerified(bool value)
{
    m_Kakao_pay_auth_verified = value;
    m_Kakao_pay_auth_verifiedIsSet = true;
}
bool MemberLevel::kakaoPayAuthVerifiedIsSet() const
{
    return m_Kakao_pay_auth_verifiedIsSet;
}

void MemberLevel::unsetKakao_pay_auth_verified()
{
    m_Kakao_pay_auth_verifiedIsSet = false;
}

bool MemberLevel::isLocked() const
{
    return m_Locked;
}


void MemberLevel::setLocked(bool value)
{
    m_Locked = value;
    m_LockedIsSet = true;
}
bool MemberLevel::lockedIsSet() const
{
    return m_LockedIsSet;
}

void MemberLevel::unsetLocked()
{
    m_LockedIsSet = false;
}

bool MemberLevel::isWalletLocked() const
{
    return m_Wallet_locked;
}


void MemberLevel::setWalletLocked(bool value)
{
    m_Wallet_locked = value;
    m_Wallet_lockedIsSet = true;
}
bool MemberLevel::walletLockedIsSet() const
{
    return m_Wallet_lockedIsSet;
}

void MemberLevel::unsetWallet_locked()
{
    m_Wallet_lockedIsSet = false;
}

}
}
}
}
