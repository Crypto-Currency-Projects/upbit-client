--[[
  Upbit Open API
 
  ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 
  OpenAPI spec version: 1.0.0
  Contact: ujhin942@gmail.com
  Generated by: https://github.com/swagger-api/swagger-codegen.git
]]

-- ask_account class
local ask_account = {}
local ask_account_mt = {
	__name = "ask_account";
	__index = ask_account;
}

local function cast_ask_account(t)
	return setmetatable(t, ask_account_mt)
end

local function new_ask_account(currency, balance, locked, avg_buy_price, avg_buy_price_modified, unit_currency)
	return cast_ask_account({
		["currency"] = currency;
		["balance"] = balance;
		["locked"] = locked;
		["avg_buy_price"] = avg_buy_price;
		["avg_buy_price_modified"] = avg_buy_price_modified;
		["unit_currency"] = unit_currency;
	})
end

return {
	cast = cast_ask_account;
	new = new_ask_account;
}