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
 * SwaggerOrderbookUnit
 *
 * 
 */
class SWAGGER_API SwaggerOrderbookUnit : public Model
{
public:
    virtual ~SwaggerOrderbookUnit() {}
	bool FromJson(const TSharedPtr<FJsonObject>& JsonObject) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* 매도호가 */
	TOptional<double> AskPrice;
	/* 매수호가 */
	TOptional<double> BidPrice;
	/* 매도 잔량 */
	TOptional<double> AskSize;
	/* 매수 잔량 */
	TOptional<double> BidSize;
};

}
