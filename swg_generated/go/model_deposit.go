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

type Deposit struct {
	// 입출금 종류
	Type_ string `json:"type,omitempty"`
	// 입금에 대한 고유 아이디
	Uuid string `json:"uuid,omitempty"`
	// 화폐를 의미하는 영문 대문자 코드
	Currency string `json:"currency,omitempty"`
	// 입금의 트랜잭션 아이디
	Txid string `json:"txid,omitempty"`
	// 입금 상태
	State string `json:"state,omitempty"`
	// 입금 생성 시간
	CreatedAt string `json:"created_at,omitempty"`
	// 입금 완료 시간
	DoneAt string `json:"done_at,omitempty"`
	// 입금 수량
	Amount string `json:"amount,omitempty"`
	// 입금 수수료
	Fee string `json:"fee,omitempty"`
	// 입금 유형 - default : 일반출금 - internal : 바로입금 
	TransactionType string `json:"transaction_type,omitempty"`
}
