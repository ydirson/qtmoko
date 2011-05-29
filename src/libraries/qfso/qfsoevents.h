/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsoevents -c QFsoEvents specs/xml/org.freesmartphone.Events.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSOEVENTS_H
#define QFSOEVENTS_H

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
 * Proxy class for interface org.freesmartphone.Events
 */
class QFSO_EXPORT QFsoEvents: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.Events"; }

public:
    QFsoEvents(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoEvents();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> AddRule(const QString &rule)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(rule);
        return asyncCallWithArgumentList(QLatin1String("AddRule"), argumentList);
    }

    inline QDBusPendingReply<> RemoveRule(const QString &name)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(name);
        return asyncCallWithArgumentList(QLatin1String("RemoveRule"), argumentList);
    }

    inline QDBusPendingReply<> TriggerTest(const QString &name, bool value)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(name) << qVariantFromValue(value);
        return asyncCallWithArgumentList(QLatin1String("TriggerTest"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace freesmartphone {
    typedef ::QFsoEvents Events;
  }
}
#endif
