#ifndef GRCSEND_H
#define GRCSEND_H

#include <QObject>
#include "httpsocket.h"

class GRCsend : public QObject
{
    Q_OBJECT
public:
    explicit GRCsend(QObject *parent = 0);
    QString fromAddress;
    QString destinationAddress;
    QString amount;
    QString getCloakedAddress(); //returns the bited address assuming object variables set correctly.
    bool useProxy;
    QString proxyAddress;
    int proxyPort;
signals:

public slots:

private:
    httpsocket *socket;
};

#endif // GRCSEND_H
