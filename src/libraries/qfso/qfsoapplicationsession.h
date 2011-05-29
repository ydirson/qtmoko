/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsoapplicationsession -c QFsoApplicationSession specs/xml/org.freesmartphone.Application.Session.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSOAPPLICATIONSESSION_H
#define QFSOAPPLICATIONSESSION_H

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
 * Proxy class for interface org.freesmartphone.Application.Session
 */
class QFSO_EXPORT QFsoApplicationSession: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.Application.Session"; }

public:
    QFsoApplicationSession(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoApplicationSession();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> HandleEvent(const QString &event)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(event);
        return asyncCallWithArgumentList(QLatin1String("HandleEvent"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace freesmartphone {
    namespace Application {
      typedef ::QFsoApplicationSession Session;
    }
  }
}
#endif
