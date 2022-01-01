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


#include "SWGCurrency.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGCurrency::SWGCurrency(QString json) {
    init();
    this->fromJson(json);
}

SWGCurrency::SWGCurrency() {
    init();
}

SWGCurrency::~SWGCurrency() {
    this->cleanup();
}

void
SWGCurrency::init() {
    code = new QString("");
    m_code_isSet = false;
    withdraw_fee = new QString("");
    m_withdraw_fee_isSet = false;
    is_coin = false;
    m_is_coin_isSet = false;
    wallet_state = new QString("");
    m_wallet_state_isSet = false;
    wallet_support = new QList<QString*>();
    m_wallet_support_isSet = false;
}

void
SWGCurrency::cleanup() {
    if(code != nullptr) { 
        delete code;
    }
    if(withdraw_fee != nullptr) { 
        delete withdraw_fee;
    }

    if(wallet_state != nullptr) { 
        delete wallet_state;
    }
    if(wallet_support != nullptr) { 
        auto arr = wallet_support;
        for(auto o: *arr) { 
            delete o;
        }
        delete wallet_support;
    }
}

SWGCurrency*
SWGCurrency::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCurrency::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&code, pJson["code"], "QString", "QString");
    
    ::Swagger::setValue(&withdraw_fee, pJson["withdraw_fee"], "QString", "QString");
    
    ::Swagger::setValue(&is_coin, pJson["is_coin"], "bool", "");
    
    ::Swagger::setValue(&wallet_state, pJson["wallet_state"], "QString", "QString");
    
    
    ::Swagger::setValue(&wallet_support, pJson["wallet_support"], "QList", "QString");
}

QString
SWGCurrency::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGCurrency::asJsonObject() {
    QJsonObject obj;
    if(code != nullptr && *code != QString("")){
        toJsonValue(QString("code"), code, obj, QString("QString"));
    }
    if(withdraw_fee != nullptr && *withdraw_fee != QString("")){
        toJsonValue(QString("withdraw_fee"), withdraw_fee, obj, QString("QString"));
    }
    if(m_is_coin_isSet){
        obj.insert("is_coin", QJsonValue(is_coin));
    }
    if(wallet_state != nullptr && *wallet_state != QString("")){
        toJsonValue(QString("wallet_state"), wallet_state, obj, QString("QString"));
    }
    if(wallet_support->size() > 0){
        toJsonArray((QList<void*>*)wallet_support, obj, "wallet_support", "QString");
    }

    return obj;
}

QString*
SWGCurrency::getCode() {
    return code;
}
void
SWGCurrency::setCode(QString* code) {
    this->code = code;
    this->m_code_isSet = true;
}

QString*
SWGCurrency::getWithdrawFee() {
    return withdraw_fee;
}
void
SWGCurrency::setWithdrawFee(QString* withdraw_fee) {
    this->withdraw_fee = withdraw_fee;
    this->m_withdraw_fee_isSet = true;
}

bool
SWGCurrency::isIsCoin() {
    return is_coin;
}
void
SWGCurrency::setIsCoin(bool is_coin) {
    this->is_coin = is_coin;
    this->m_is_coin_isSet = true;
}

QString*
SWGCurrency::getWalletState() {
    return wallet_state;
}
void
SWGCurrency::setWalletState(QString* wallet_state) {
    this->wallet_state = wallet_state;
    this->m_wallet_state_isSet = true;
}

QList<QString*>*
SWGCurrency::getWalletSupport() {
    return wallet_support;
}
void
SWGCurrency::setWalletSupport(QList<QString*>* wallet_support) {
    this->wallet_support = wallet_support;
    this->m_wallet_support_isSet = true;
}


bool
SWGCurrency::isSet(){
    bool isObjectUpdated = false;
    do{
        if(code != nullptr && *code != QString("")){ isObjectUpdated = true; break;}
        if(withdraw_fee != nullptr && *withdraw_fee != QString("")){ isObjectUpdated = true; break;}
        if(m_is_coin_isSet){ isObjectUpdated = true; break;}
        if(wallet_state != nullptr && *wallet_state != QString("")){ isObjectUpdated = true; break;}
        if(wallet_support->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

