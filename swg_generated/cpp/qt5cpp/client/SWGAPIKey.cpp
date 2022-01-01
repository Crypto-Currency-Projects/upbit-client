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


#include "SWGAPIKey.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGAPIKey::SWGAPIKey(QString json) {
    init();
    this->fromJson(json);
}

SWGAPIKey::SWGAPIKey() {
    init();
}

SWGAPIKey::~SWGAPIKey() {
    this->cleanup();
}

void
SWGAPIKey::init() {
    access_key = new QString("");
    m_access_key_isSet = false;
    expire_at = new QString("");
    m_expire_at_isSet = false;
}

void
SWGAPIKey::cleanup() {
    if(access_key != nullptr) { 
        delete access_key;
    }
    if(expire_at != nullptr) { 
        delete expire_at;
    }
}

SWGAPIKey*
SWGAPIKey::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAPIKey::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&access_key, pJson["access_key"], "QString", "QString");
    
    ::Swagger::setValue(&expire_at, pJson["expire_at"], "QString", "QString");
    
}

QString
SWGAPIKey::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGAPIKey::asJsonObject() {
    QJsonObject obj;
    if(access_key != nullptr && *access_key != QString("")){
        toJsonValue(QString("access_key"), access_key, obj, QString("QString"));
    }
    if(expire_at != nullptr && *expire_at != QString("")){
        toJsonValue(QString("expire_at"), expire_at, obj, QString("QString"));
    }

    return obj;
}

QString*
SWGAPIKey::getAccessKey() {
    return access_key;
}
void
SWGAPIKey::setAccessKey(QString* access_key) {
    this->access_key = access_key;
    this->m_access_key_isSet = true;
}

QString*
SWGAPIKey::getExpireAt() {
    return expire_at;
}
void
SWGAPIKey::setExpireAt(QString* expire_at) {
    this->expire_at = expire_at;
    this->m_expire_at_isSet = true;
}


bool
SWGAPIKey::isSet(){
    bool isObjectUpdated = false;
    do{
        if(access_key != nullptr && *access_key != QString("")){ isObjectUpdated = true; break;}
        if(expire_at != nullptr && *expire_at != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

