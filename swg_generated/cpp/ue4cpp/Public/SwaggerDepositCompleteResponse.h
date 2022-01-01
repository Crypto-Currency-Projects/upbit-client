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
#pragma once

#include "SwaggerBaseModel.h"

namespace Swagger 
{

/*
 * SwaggerDepositCompleteResponse
 *
 * 
 */
class SWAGGER_API SwaggerDepositCompleteResponse : public Model
{
public:
    virtual ~SwaggerDepositCompleteResponse() {}
	bool FromJson(const TSharedPtr<FJsonObject>& JsonObject) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* 화폐를 의미하는 영문 대문자 코드 */
	TOptional<FString> Currency;
	/* 입금 주소 */
	TOptional<FString> DepositAddress;
	/* 2차 입금 주소 */
	TOptional<FString> SecondaryAddress;
};

}
