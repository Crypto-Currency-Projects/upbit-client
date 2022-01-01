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
 * SwaggerTrade
 *
 * 
 */
class SWAGGER_API SwaggerTrade : public Model
{
public:
    virtual ~SwaggerTrade() {}
	bool FromJson(const TSharedPtr<FJsonObject>& JsonObject) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* 마켓의 유일 키 */
	TOptional<FString> Market;
	/* 체결의 고유 아이디 */
	TOptional<FString> Uuid;
	/* 체결 가격 */
	TOptional<FString> Price;
	/* 체결 양 */
	TOptional<FString> Volume;
	/* 체결된 총 가격 */
	TOptional<FString> Funds;
	/* 체결 종류 */
	TOptional<FString> Side;
	/* 체결 시각 */
	TOptional<FString> CreatedAt;
};

}
