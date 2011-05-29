/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsogsmpdp -c QFsoGSMPDP specs/xml/org.freesmartphone.GSM.PDP.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSOGSMPDP_H
#define QFSOGSMPDP_H

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
 * Proxy class for interface org.freesmartphone.GSM.PDP
 */
class QFSO_EXPORT QFsoGSMPDP: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.GSM.PDP"; }

public:
    QFsoGSMPDP(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoGSMPDP();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> ActivateContext()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ActivateContext"), argumentList);
    }

    inline QDBusPendingReply<> DeactivateContext()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("DeactivateContext"), argumentList);
    }

    inline QDBusPendingReply<QString, QVariantMap> GetContextStatus()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetContextStatus"), argumentList);
    }
    inline QDBusReply<QString> GetContextStatus(QVariantMap &properties)
    {
        QList<QVariant> argumentList;
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QLatin1String("GetContextStatus"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 2) {
            properties = qdbus_cast<QVariantMap>(reply.arguments().at(1));
        }
        return reply;
    }

    inline QDBusPendingReply<QString, QString, QString> GetCredentials()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetCredentials"), argumentList);
    }
    inline QDBusReply<QString> GetCredentials(QString &username, QString &password)
    {
        QList<QVariant> argumentList;
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QLatin1String("GetCredentials"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 3) {
            username = qdbus_cast<QString>(reply.arguments().at(1));
            password = qdbus_cast<QString>(reply.arguments().at(2));
        }
        return reply;
    }

    inline QDBusPendingReply<> InternalStatusUpdate(const QString &status, const QVariantMap &properties)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(status) << qVariantFromValue(properties);
        return asyncCallWithArgumentList(QLatin1String("InternalStatusUpdate"), argumentList);
    }

    inline QDBusPendingReply<> SetCredentials(const QString &apn, const QString &username, const QString &password)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(apn) << qVariantFromValue(username) << qVariantFromValue(password);
        return asyncCallWithArgumentList(QLatin1String("SetCredentials"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void ContextStatus(const QString &status, const QVariantMap &properties);
};

namespace org {
  namespace freesmartphone {
    namespace GSM {
      typedef ::QFsoGSMPDP PDP;
    }
  }
}
#endif
