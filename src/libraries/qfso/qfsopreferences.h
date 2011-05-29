/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsopreferences -c QFsoPreferences specs/xml/org.freesmartphone.Preferences.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSOPREFERENCES_H
#define QFSOPREFERENCES_H

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
 * Proxy class for interface org.freesmartphone.Preferences
 */
class QFSO_EXPORT QFsoPreferences: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.Preferences"; }

public:
    QFsoPreferences(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoPreferences();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString> GetProfile()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetProfile"), argumentList);
    }

    inline QDBusPendingReply<QStringList> GetProfiles()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetProfiles"), argumentList);
    }

    inline QDBusPendingReply<QDBusObjectPath> GetService(const QString &name)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(name);
        return asyncCallWithArgumentList(QLatin1String("GetService"), argumentList);
    }

    inline QDBusPendingReply<QStringList> GetServices()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetServices"), argumentList);
    }

    inline QDBusPendingReply<> SetProfile(const QString &profile)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(profile);
        return asyncCallWithArgumentList(QLatin1String("SetProfile"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void Changed(const QString &profile);
};

namespace org {
  namespace freesmartphone {
    typedef ::QFsoPreferences Preferences;
  }
}
#endif
