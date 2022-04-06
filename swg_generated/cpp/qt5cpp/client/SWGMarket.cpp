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


#include "SWGMarket.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGMarket::SWGMarket(QString json) {
    init();
    this->fromJson(json);
}

SWGMarket::SWGMarket() {
    init();
}

SWGMarket::~SWGMarket() {
    this->cleanup();
}

void
SWGMarket::init() {
    id = new QString("");
    m_id_isSet = false;
    name = new QString("");
    m_name_isSet = false;
    order_types = new QList<QString*>();
    m_order_types_isSet = false;
    order_sides = new QList<QString*>();
    m_order_sides_isSet = false;
    bid = new SWGBid();
    m_bid_isSet = false;
    ask = new SWGAsk();
    m_ask_isSet = false;
    max_total = new QString("");
    m_max_total_isSet = false;
    state = new QString("");
    m_state_isSet = false;
}

void
SWGMarket::cleanup() {
    if(id != nullptr) { 
        delete id;
    }
    if(name != nullptr) { 
        delete name;
    }
    if(order_types != nullptr) { 
        auto arr = order_types;
        for(auto o: *arr) { 
            delete o;
        }
        delete order_types;
    }
    if(order_sides != nullptr) { 
        auto arr = order_sides;
        for(auto o: *arr) { 
            delete o;
        }
        delete order_sides;
    }
    if(bid != nullptr) { 
        delete bid;
    }
    if(ask != nullptr) { 
        delete ask;
    }
    if(max_total != nullptr) { 
        delete max_total;
    }
    if(state != nullptr) { 
        delete state;
    }
}

SWGMarket*
SWGMarket::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGMarket::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&id, pJson["id"], "QString", "QString");
    
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    
    
    ::Swagger::setValue(&order_types, pJson["order_types"], "QList", "QString");
    
    ::Swagger::setValue(&order_sides, pJson["order_sides"], "QList", "QString");
    ::Swagger::setValue(&bid, pJson["bid"], "SWGBid", "SWGBid");
    
    ::Swagger::setValue(&ask, pJson["ask"], "SWGAsk", "SWGAsk");
    
    ::Swagger::setValue(&max_total, pJson["max_total"], "QString", "QString");
    
    ::Swagger::setValue(&state, pJson["state"], "QString", "QString");
    
}

QString
SWGMarket::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGMarket::asJsonObject() {
    QJsonObject obj;
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(order_types->size() > 0){
        toJsonArray((QList<void*>*)order_types, obj, "order_types", "QString");
    }
    if(order_sides->size() > 0){
        toJsonArray((QList<void*>*)order_sides, obj, "order_sides", "QString");
    }
    if((bid != nullptr) && (bid->isSet())){
        toJsonValue(QString("bid"), bid, obj, QString("SWGBid"));
    }
    if((ask != nullptr) && (ask->isSet())){
        toJsonValue(QString("ask"), ask, obj, QString("SWGAsk"));
    }
    if(max_total != nullptr && *max_total != QString("")){
        toJsonValue(QString("max_total"), max_total, obj, QString("QString"));
    }
    if(state != nullptr && *state != QString("")){
        toJsonValue(QString("state"), state, obj, QString("QString"));
    }

    return obj;
}

QString*
SWGMarket::getId() {
    return id;
}
void
SWGMarket::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString*
SWGMarket::getName() {
    return name;
}
void
SWGMarket::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

QList<QString*>*
SWGMarket::getOrderTypes() {
    return order_types;
}
void
SWGMarket::setOrderTypes(QList<QString*>* order_types) {
    this->order_types = order_types;
    this->m_order_types_isSet = true;
}

QList<QString*>*
SWGMarket::getOrderSides() {
    return order_sides;
}
void
SWGMarket::setOrderSides(QList<QString*>* order_sides) {
    this->order_sides = order_sides;
    this->m_order_sides_isSet = true;
}

SWGBid*
SWGMarket::getBid() {
    return bid;
}
void
SWGMarket::setBid(SWGBid* bid) {
    this->bid = bid;
    this->m_bid_isSet = true;
}

SWGAsk*
SWGMarket::getAsk() {
    return ask;
}
void
SWGMarket::setAsk(SWGAsk* ask) {
    this->ask = ask;
    this->m_ask_isSet = true;
}

QString*
SWGMarket::getMaxTotal() {
    return max_total;
}
void
SWGMarket::setMaxTotal(QString* max_total) {
    this->max_total = max_total;
    this->m_max_total_isSet = true;
}

QString*
SWGMarket::getState() {
    return state;
}
void
SWGMarket::setState(QString* state) {
    this->state = state;
    this->m_state_isSet = true;
}


bool
SWGMarket::isSet(){
    bool isObjectUpdated = false;
    do{
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(order_types->size() > 0){ isObjectUpdated = true; break;}
        if(order_sides->size() > 0){ isObjectUpdated = true; break;}
        if(bid != nullptr && bid->isSet()){ isObjectUpdated = true; break;}
        if(ask != nullptr && ask->isSet()){ isObjectUpdated = true; break;}
        if(max_total != nullptr && *max_total != QString("")){ isObjectUpdated = true; break;}
        if(state != nullptr && *state != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
