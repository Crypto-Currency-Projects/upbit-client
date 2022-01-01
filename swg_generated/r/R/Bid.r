# Upbit Open API
#
# ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
#
# OpenAPI spec version: 1.0.0
# Contact: ujhin942@gmail.com
# Generated by: https://github.com/swagger-api/swagger-codegen.git


#' Bid Class
#'
#' @field currency 
#' @field price_unit 
#' @field min_total 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
Bid <- R6::R6Class(
  'Bid',
  public = list(
    `currency` = NULL,
    `price_unit` = NULL,
    `min_total` = NULL,
    initialize = function(`currency`, `price_unit`, `min_total`){
      if (!missing(`currency`)) {
        stopifnot(is.character(`currency`), length(`currency`) == 1)
        self$`currency` <- `currency`
      }
      if (!missing(`price_unit`)) {
        stopifnot(is.character(`price_unit`), length(`price_unit`) == 1)
        self$`price_unit` <- `price_unit`
      }
      if (!missing(`min_total`)) {
        self$`min_total` <- `min_total`
      }
    },
    toJSON = function() {
      BidObject <- list()
      if (!is.null(self$`currency`)) {
        BidObject[['currency']] <- self$`currency`
      }
      if (!is.null(self$`price_unit`)) {
        BidObject[['price_unit']] <- self$`price_unit`
      }
      if (!is.null(self$`min_total`)) {
        BidObject[['min_total']] <- self$`min_total`
      }

      BidObject
    },
    fromJSON = function(BidJson) {
      BidObject <- jsonlite::fromJSON(BidJson)
      if (!is.null(BidObject$`currency`)) {
        self$`currency` <- BidObject$`currency`
      }
      if (!is.null(BidObject$`price_unit`)) {
        self$`price_unit` <- BidObject$`price_unit`
      }
      if (!is.null(BidObject$`min_total`)) {
        self$`min_total` <- BidObject$`min_total`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "currency": %s,
           "price_unit": %s,
           "min_total": %s
        }',
        self$`currency`,
        self$`price_unit`,
        self$`min_total`
      )
    },
    fromJSONString = function(BidJson) {
      BidObject <- jsonlite::fromJSON(BidJson)
      self$`currency` <- BidObject$`currency`
      self$`price_unit` <- BidObject$`price_unit`
      self$`min_total` <- BidObject$`min_total`
    }
  )
)
