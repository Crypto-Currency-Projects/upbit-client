/* 
 * Upbit Open API
 *
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct Ticker {
  /// 종목 구분 코드
  #[serde(rename = "market")]
  market: Option<String>,
  /// 최근 거래 일자(UTC)
  #[serde(rename = "trade_date")]
  trade_date: Option<String>,
  /// 최근 거래 시각(UTC)
  #[serde(rename = "trade_time")]
  trade_time: Option<String>,
  /// 최근 거래 일자(KST)
  #[serde(rename = "trade_date_kst")]
  trade_date_kst: Option<String>,
  /// 최근 거래 시각(KST)
  #[serde(rename = "trade_time_kst")]
  trade_time_kst: Option<String>,
  /// 시가
  #[serde(rename = "opening_price")]
  opening_price: Option<f64>,
  /// 고가
  #[serde(rename = "high_price")]
  high_price: Option<f64>,
  /// 저가
  #[serde(rename = "low_price")]
  low_price: Option<f64>,
  /// 종가
  #[serde(rename = "trade_price")]
  trade_price: Option<f64>,
  /// 전일 종가
  #[serde(rename = "prev_closing_price")]
  prev_closing_price: Option<f64>,
  /// EVEN : 보합 RISE : 상승 FALL : 하락 
  #[serde(rename = "change")]
  change: Option<String>,
  /// 변화액의 절대값
  #[serde(rename = "change_price")]
  change_price: Option<f64>,
  /// 변화율의 절대값
  #[serde(rename = "change_rate")]
  change_rate: Option<f64>,
  /// 부호가 있는 변화액
  #[serde(rename = "signed_change_price")]
  signed_change_price: Option<f64>,
  /// 부호가 있는 변화율
  #[serde(rename = "signed_change_rate")]
  signed_change_rate: Option<f64>,
  /// 가장 최근 거래량
  #[serde(rename = "trade_volume")]
  trade_volume: Option<f64>,
  /// 누적 거래대금 (UTC 0시 기준)
  #[serde(rename = "acc_trade_price")]
  acc_trade_price: Option<f64>,
  /// 24시간 누적 거래대금
  #[serde(rename = "acc_trade_price_24h")]
  acc_trade_price_24h: Option<f64>,
  /// 누적 거래량 (UTC 0시 기준)
  #[serde(rename = "acc_trade_volume")]
  acc_trade_volume: Option<f64>,
  /// 24시간 누적 거래량
  #[serde(rename = "acc_trade_volume_24h")]
  acc_trade_volume_24h: Option<f64>,
  /// 52주 신고가
  #[serde(rename = "highest_52_week_price")]
  highest_52_week_price: Option<f64>,
  /// 52주 신고가 달성일
  #[serde(rename = "highest_52_week_date")]
  highest_52_week_date: Option<String>,
  /// 52주 신저가
  #[serde(rename = "lowest_52_week_price")]
  lowest_52_week_price: Option<f64>,
  /// 52주 신저가 달성일
  #[serde(rename = "lowest_52_week_date")]
  lowest_52_week_date: Option<String>,
  /// 타임스탬프
  #[serde(rename = "timestamp")]
  timestamp: Option<f32>
}

impl Ticker {
  pub fn new() -> Ticker {
    Ticker {
      market: None,
      trade_date: None,
      trade_time: None,
      trade_date_kst: None,
      trade_time_kst: None,
      opening_price: None,
      high_price: None,
      low_price: None,
      trade_price: None,
      prev_closing_price: None,
      change: None,
      change_price: None,
      change_rate: None,
      signed_change_price: None,
      signed_change_rate: None,
      trade_volume: None,
      acc_trade_price: None,
      acc_trade_price_24h: None,
      acc_trade_volume: None,
      acc_trade_volume_24h: None,
      highest_52_week_price: None,
      highest_52_week_date: None,
      lowest_52_week_price: None,
      lowest_52_week_date: None,
      timestamp: None
    }
  }

  pub fn set_market(&mut self, market: String) {
    self.market = Some(market);
  }

  pub fn with_market(mut self, market: String) -> Ticker {
    self.market = Some(market);
    self
  }

  pub fn market(&self) -> Option<&String> {
    self.market.as_ref()
  }

  pub fn reset_market(&mut self) {
    self.market = None;
  }

  pub fn set_trade_date(&mut self, trade_date: String) {
    self.trade_date = Some(trade_date);
  }

  pub fn with_trade_date(mut self, trade_date: String) -> Ticker {
    self.trade_date = Some(trade_date);
    self
  }

  pub fn trade_date(&self) -> Option<&String> {
    self.trade_date.as_ref()
  }

  pub fn reset_trade_date(&mut self) {
    self.trade_date = None;
  }

  pub fn set_trade_time(&mut self, trade_time: String) {
    self.trade_time = Some(trade_time);
  }

  pub fn with_trade_time(mut self, trade_time: String) -> Ticker {
    self.trade_time = Some(trade_time);
    self
  }

  pub fn trade_time(&self) -> Option<&String> {
    self.trade_time.as_ref()
  }

  pub fn reset_trade_time(&mut self) {
    self.trade_time = None;
  }

  pub fn set_trade_date_kst(&mut self, trade_date_kst: String) {
    self.trade_date_kst = Some(trade_date_kst);
  }

  pub fn with_trade_date_kst(mut self, trade_date_kst: String) -> Ticker {
    self.trade_date_kst = Some(trade_date_kst);
    self
  }

  pub fn trade_date_kst(&self) -> Option<&String> {
    self.trade_date_kst.as_ref()
  }

  pub fn reset_trade_date_kst(&mut self) {
    self.trade_date_kst = None;
  }

  pub fn set_trade_time_kst(&mut self, trade_time_kst: String) {
    self.trade_time_kst = Some(trade_time_kst);
  }

  pub fn with_trade_time_kst(mut self, trade_time_kst: String) -> Ticker {
    self.trade_time_kst = Some(trade_time_kst);
    self
  }

  pub fn trade_time_kst(&self) -> Option<&String> {
    self.trade_time_kst.as_ref()
  }

  pub fn reset_trade_time_kst(&mut self) {
    self.trade_time_kst = None;
  }

  pub fn set_opening_price(&mut self, opening_price: f64) {
    self.opening_price = Some(opening_price);
  }

  pub fn with_opening_price(mut self, opening_price: f64) -> Ticker {
    self.opening_price = Some(opening_price);
    self
  }

  pub fn opening_price(&self) -> Option<&f64> {
    self.opening_price.as_ref()
  }

  pub fn reset_opening_price(&mut self) {
    self.opening_price = None;
  }

  pub fn set_high_price(&mut self, high_price: f64) {
    self.high_price = Some(high_price);
  }

  pub fn with_high_price(mut self, high_price: f64) -> Ticker {
    self.high_price = Some(high_price);
    self
  }

  pub fn high_price(&self) -> Option<&f64> {
    self.high_price.as_ref()
  }

  pub fn reset_high_price(&mut self) {
    self.high_price = None;
  }

  pub fn set_low_price(&mut self, low_price: f64) {
    self.low_price = Some(low_price);
  }

  pub fn with_low_price(mut self, low_price: f64) -> Ticker {
    self.low_price = Some(low_price);
    self
  }

  pub fn low_price(&self) -> Option<&f64> {
    self.low_price.as_ref()
  }

  pub fn reset_low_price(&mut self) {
    self.low_price = None;
  }

  pub fn set_trade_price(&mut self, trade_price: f64) {
    self.trade_price = Some(trade_price);
  }

  pub fn with_trade_price(mut self, trade_price: f64) -> Ticker {
    self.trade_price = Some(trade_price);
    self
  }

  pub fn trade_price(&self) -> Option<&f64> {
    self.trade_price.as_ref()
  }

  pub fn reset_trade_price(&mut self) {
    self.trade_price = None;
  }

  pub fn set_prev_closing_price(&mut self, prev_closing_price: f64) {
    self.prev_closing_price = Some(prev_closing_price);
  }

  pub fn with_prev_closing_price(mut self, prev_closing_price: f64) -> Ticker {
    self.prev_closing_price = Some(prev_closing_price);
    self
  }

  pub fn prev_closing_price(&self) -> Option<&f64> {
    self.prev_closing_price.as_ref()
  }

  pub fn reset_prev_closing_price(&mut self) {
    self.prev_closing_price = None;
  }

  pub fn set_change(&mut self, change: String) {
    self.change = Some(change);
  }

  pub fn with_change(mut self, change: String) -> Ticker {
    self.change = Some(change);
    self
  }

  pub fn change(&self) -> Option<&String> {
    self.change.as_ref()
  }

  pub fn reset_change(&mut self) {
    self.change = None;
  }

  pub fn set_change_price(&mut self, change_price: f64) {
    self.change_price = Some(change_price);
  }

  pub fn with_change_price(mut self, change_price: f64) -> Ticker {
    self.change_price = Some(change_price);
    self
  }

  pub fn change_price(&self) -> Option<&f64> {
    self.change_price.as_ref()
  }

  pub fn reset_change_price(&mut self) {
    self.change_price = None;
  }

  pub fn set_change_rate(&mut self, change_rate: f64) {
    self.change_rate = Some(change_rate);
  }

  pub fn with_change_rate(mut self, change_rate: f64) -> Ticker {
    self.change_rate = Some(change_rate);
    self
  }

  pub fn change_rate(&self) -> Option<&f64> {
    self.change_rate.as_ref()
  }

  pub fn reset_change_rate(&mut self) {
    self.change_rate = None;
  }

  pub fn set_signed_change_price(&mut self, signed_change_price: f64) {
    self.signed_change_price = Some(signed_change_price);
  }

  pub fn with_signed_change_price(mut self, signed_change_price: f64) -> Ticker {
    self.signed_change_price = Some(signed_change_price);
    self
  }

  pub fn signed_change_price(&self) -> Option<&f64> {
    self.signed_change_price.as_ref()
  }

  pub fn reset_signed_change_price(&mut self) {
    self.signed_change_price = None;
  }

  pub fn set_signed_change_rate(&mut self, signed_change_rate: f64) {
    self.signed_change_rate = Some(signed_change_rate);
  }

  pub fn with_signed_change_rate(mut self, signed_change_rate: f64) -> Ticker {
    self.signed_change_rate = Some(signed_change_rate);
    self
  }

  pub fn signed_change_rate(&self) -> Option<&f64> {
    self.signed_change_rate.as_ref()
  }

  pub fn reset_signed_change_rate(&mut self) {
    self.signed_change_rate = None;
  }

  pub fn set_trade_volume(&mut self, trade_volume: f64) {
    self.trade_volume = Some(trade_volume);
  }

  pub fn with_trade_volume(mut self, trade_volume: f64) -> Ticker {
    self.trade_volume = Some(trade_volume);
    self
  }

  pub fn trade_volume(&self) -> Option<&f64> {
    self.trade_volume.as_ref()
  }

  pub fn reset_trade_volume(&mut self) {
    self.trade_volume = None;
  }

  pub fn set_acc_trade_price(&mut self, acc_trade_price: f64) {
    self.acc_trade_price = Some(acc_trade_price);
  }

  pub fn with_acc_trade_price(mut self, acc_trade_price: f64) -> Ticker {
    self.acc_trade_price = Some(acc_trade_price);
    self
  }

  pub fn acc_trade_price(&self) -> Option<&f64> {
    self.acc_trade_price.as_ref()
  }

  pub fn reset_acc_trade_price(&mut self) {
    self.acc_trade_price = None;
  }

  pub fn set_acc_trade_price_24h(&mut self, acc_trade_price_24h: f64) {
    self.acc_trade_price_24h = Some(acc_trade_price_24h);
  }

  pub fn with_acc_trade_price_24h(mut self, acc_trade_price_24h: f64) -> Ticker {
    self.acc_trade_price_24h = Some(acc_trade_price_24h);
    self
  }

  pub fn acc_trade_price_24h(&self) -> Option<&f64> {
    self.acc_trade_price_24h.as_ref()
  }

  pub fn reset_acc_trade_price_24h(&mut self) {
    self.acc_trade_price_24h = None;
  }

  pub fn set_acc_trade_volume(&mut self, acc_trade_volume: f64) {
    self.acc_trade_volume = Some(acc_trade_volume);
  }

  pub fn with_acc_trade_volume(mut self, acc_trade_volume: f64) -> Ticker {
    self.acc_trade_volume = Some(acc_trade_volume);
    self
  }

  pub fn acc_trade_volume(&self) -> Option<&f64> {
    self.acc_trade_volume.as_ref()
  }

  pub fn reset_acc_trade_volume(&mut self) {
    self.acc_trade_volume = None;
  }

  pub fn set_acc_trade_volume_24h(&mut self, acc_trade_volume_24h: f64) {
    self.acc_trade_volume_24h = Some(acc_trade_volume_24h);
  }

  pub fn with_acc_trade_volume_24h(mut self, acc_trade_volume_24h: f64) -> Ticker {
    self.acc_trade_volume_24h = Some(acc_trade_volume_24h);
    self
  }

  pub fn acc_trade_volume_24h(&self) -> Option<&f64> {
    self.acc_trade_volume_24h.as_ref()
  }

  pub fn reset_acc_trade_volume_24h(&mut self) {
    self.acc_trade_volume_24h = None;
  }

  pub fn set_highest_52_week_price(&mut self, highest_52_week_price: f64) {
    self.highest_52_week_price = Some(highest_52_week_price);
  }

  pub fn with_highest_52_week_price(mut self, highest_52_week_price: f64) -> Ticker {
    self.highest_52_week_price = Some(highest_52_week_price);
    self
  }

  pub fn highest_52_week_price(&self) -> Option<&f64> {
    self.highest_52_week_price.as_ref()
  }

  pub fn reset_highest_52_week_price(&mut self) {
    self.highest_52_week_price = None;
  }

  pub fn set_highest_52_week_date(&mut self, highest_52_week_date: String) {
    self.highest_52_week_date = Some(highest_52_week_date);
  }

  pub fn with_highest_52_week_date(mut self, highest_52_week_date: String) -> Ticker {
    self.highest_52_week_date = Some(highest_52_week_date);
    self
  }

  pub fn highest_52_week_date(&self) -> Option<&String> {
    self.highest_52_week_date.as_ref()
  }

  pub fn reset_highest_52_week_date(&mut self) {
    self.highest_52_week_date = None;
  }

  pub fn set_lowest_52_week_price(&mut self, lowest_52_week_price: f64) {
    self.lowest_52_week_price = Some(lowest_52_week_price);
  }

  pub fn with_lowest_52_week_price(mut self, lowest_52_week_price: f64) -> Ticker {
    self.lowest_52_week_price = Some(lowest_52_week_price);
    self
  }

  pub fn lowest_52_week_price(&self) -> Option<&f64> {
    self.lowest_52_week_price.as_ref()
  }

  pub fn reset_lowest_52_week_price(&mut self) {
    self.lowest_52_week_price = None;
  }

  pub fn set_lowest_52_week_date(&mut self, lowest_52_week_date: String) {
    self.lowest_52_week_date = Some(lowest_52_week_date);
  }

  pub fn with_lowest_52_week_date(mut self, lowest_52_week_date: String) -> Ticker {
    self.lowest_52_week_date = Some(lowest_52_week_date);
    self
  }

  pub fn lowest_52_week_date(&self) -> Option<&String> {
    self.lowest_52_week_date.as_ref()
  }

  pub fn reset_lowest_52_week_date(&mut self) {
    self.lowest_52_week_date = None;
  }

  pub fn set_timestamp(&mut self, timestamp: f32) {
    self.timestamp = Some(timestamp);
  }

  pub fn with_timestamp(mut self, timestamp: f32) -> Ticker {
    self.timestamp = Some(timestamp);
    self
  }

  pub fn timestamp(&self) -> Option<&f32> {
    self.timestamp.as_ref()
  }

  pub fn reset_timestamp(&mut self) {
    self.timestamp = None;
  }

}



