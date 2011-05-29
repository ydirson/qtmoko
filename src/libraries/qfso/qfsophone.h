/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsophone -c QFsoPhone specs/xml/org.freesmartphone.Phone.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSOPHONE_H
#define QFSOPHONE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

#if defined(QFSO_LIBRARY)
    #define QFSO_EXPORT Q_DECL_EXPORT
#else
    #define QFSO_EXPORT Q_DECL_IMPORT
#endif

/*
 * Proxy class for interface org.freesmartphone.Phone
 */
class QFSO_EXPORT QFsoPhone: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.Phone"; }

public:
    QFsoPhone(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoPhone();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QDBusObjectPath> CreateCall(const QString &number, const QString &protocol, bool force)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(number) << qVariantFromValue(protocol) << qVariantFromValue(force);
        return asyncCallWithArgumentList(QLatin1String("CreateCall"), argumentList);
    }

    inline QDBusPendingReply<QStringList> InitProtocols()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("InitProtocols"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void Incoming(const QDBusObjectPath &call);
};

namespace org {
  namespace freesmartphone {
    typedef ::QFsoPhone Phone;
  }
}
#endif
