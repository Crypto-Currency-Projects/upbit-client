/**
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */
#include "SwaggerWithdrawChance.h"

#include "SwaggerModule.h"
#include "SwaggerHelpers.h"

#include "Templates/SharedPointer.h"

namespace Swagger 
{

void SwaggerWithdrawChance::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (MemberLevel.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("member_level")); WriteJsonValue(Writer, MemberLevel.GetValue());	
	}
	if (Currency.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("currency")); WriteJsonValue(Writer, Currency.GetValue());	
	}
	if (Account.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("account")); WriteJsonValue(Writer, Account.GetValue());	
	}
	if (WithdrawLimit.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("withdraw_limit")); WriteJsonValue(Writer, WithdrawLimit.GetValue());	
	}
	Writer->WriteObjectEnd();
}

bool SwaggerWithdrawChance::FromJson(const TSharedPtr<FJsonObject>& JsonObject)
{
	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("member_level"), MemberLevel);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("currency"), Currency);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("account"), Account);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("withdraw_limit"), WithdrawLimit);

	return ParseSuccess;
}
}
