--[[
  Upbit Open API
 
  ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 
  OpenAPI spec version: 1.0.0
  Contact: ujhin942@gmail.com
  Generated by: https://github.com/swagger-api/swagger-codegen.git
]]

-- withdraw_limit class
local withdraw_limit = {}
local withdraw_limit_mt = {
	__name = "withdraw_limit";
	__index = withdraw_limit;
}

local function cast_withdraw_limit(t)
	return setmetatable(t, withdraw_limit_mt)
end

local function new_withdraw_limit(currency, minimum, onetime, daily, remaining_daily, remaining_daily_krw, fixed, can_withdraw)
	return cast_withdraw_limit({
		["currency"] = currency;
		["minimum"] = minimum;
		["onetime"] = onetime;
		["daily"] = daily;
		["remaining_daily"] = remaining_daily;
		["remaining_daily_krw"] = remaining_daily_krw;
		["fixed"] = fixed;
		["can_withdraw"] = can_withdraw;
	})
end

return {
	cast = cast_withdraw_limit;
	new = new_withdraw_limit;
}
