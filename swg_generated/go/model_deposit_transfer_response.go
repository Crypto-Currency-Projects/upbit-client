/*
 * Upbit Open API
 *
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * API version: 1.0.0
 * Contact: ujhin942@gmail.com
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package swagger

type DepositTransferResponse struct {
	// 요청 성공 여부
	Success bool `json:"success,omitempty"`
	// 요청 결과에 대한 메시지
	Message string `json:"message,omitempty"`
}
