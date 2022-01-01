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

#ifndef _SWG_SWGOrderApi_H_
#define _SWG_SWGOrderApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGError.h"
#include "SWGNewOrder.h"
#include "SWGNumber.h"
#include "SWGOrder.h"
#include "SWGOrderChance.h"
#include "SWGOrderInfo.h"
#include "SWGOrderbook.h"

#include <QObject>

namespace Swagger {

class SWGOrderApi: public QObject {
    Q_OBJECT

public:
    SWGOrderApi();
    SWGOrderApi(QString host, QString basePath);
    ~SWGOrderApi();

    QString host;
    QString basePath;
    QMap<QString, QString> defaultHeaders;

    void order_cancel(QString* uuid, QString* identifier);
    void order_chance(QString* market);
    void order_info(QString* uuid, QString* identifier);
    void order_infoAll(QString* market, QString* state, QList<QString*>* states, QList<QString*>* uuids, QList<QString*>* identifiers, SWGNumber* page, SWGNumber* limit, QString* order_by);
    void order_new(QString* market, QString* side, QString* ord_type, QString* volume, QString* price, QString* identifier);
    void order_orderbook(QList<QString*>* markets);
    
private:
    void order_cancelCallback (SWGHttpRequestWorker * worker);
    void order_chanceCallback (SWGHttpRequestWorker * worker);
    void order_infoCallback (SWGHttpRequestWorker * worker);
    void order_infoAllCallback (SWGHttpRequestWorker * worker);
    void order_newCallback (SWGHttpRequestWorker * worker);
    void order_orderbookCallback (SWGHttpRequestWorker * worker);
    
signals:
    void order_cancelSignal(SWGOrder* summary);
    void order_chanceSignal(SWGOrderChance* summary);
    void order_infoSignal(SWGOrderInfo* summary);
    void order_infoAllSignal(QList<SWGOrder*>* summary);
    void order_newSignal(SWGNewOrder* summary);
    void order_orderbookSignal(QList<SWGOrderbook*>* summary);
    
    void order_cancelSignalE(SWGOrder* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void order_chanceSignalE(SWGOrderChance* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void order_infoSignalE(SWGOrderInfo* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void order_infoAllSignalE(QList<SWGOrder*>* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void order_newSignalE(SWGNewOrder* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void order_orderbookSignalE(QList<SWGOrderbook*>* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    
    void order_cancelSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void order_chanceSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void order_infoSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void order_infoAllSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void order_newSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void order_orderbookSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    
};

}
#endif
