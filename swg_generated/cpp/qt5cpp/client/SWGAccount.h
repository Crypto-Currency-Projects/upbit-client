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

/*
 * SWGAccount.h
 *
 * 사용자의 계좌 정보
 */

#ifndef SWGAccount_H_
#define SWGAccount_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"

namespace Swagger {

class SWGAccount: public SWGObject {
public:
    SWGAccount();
    SWGAccount(QString json);
    ~SWGAccount();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    SWGAccount* fromJson(QString jsonString) override;

    QString* getCurrency();
    void setCurrency(QString* currency);

    QString* getBalance();
    void setBalance(QString* balance);

    QString* getLocked();
    void setLocked(QString* locked);

    QString* getAvgBuyPrice();
    void setAvgBuyPrice(QString* avg_buy_price);

    bool isAvgBuyPriceModified();
    void setAvgBuyPriceModified(bool avg_buy_price_modified);

    QString* getUnitCurrency();
    void setUnitCurrency(QString* unit_currency);


    virtual bool isSet() override;

private:
    QString* currency;
    bool m_currency_isSet;

    QString* balance;
    bool m_balance_isSet;

    QString* locked;
    bool m_locked_isSet;

    QString* avg_buy_price;
    bool m_avg_buy_price_isSet;

    bool avg_buy_price_modified;
    bool m_avg_buy_price_modified_isSet;

    QString* unit_currency;
    bool m_unit_currency_isSet;

};

}

#endif /* SWGAccount_H_ */
