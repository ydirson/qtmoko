/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsopimdate -c QFsoPIMDate specs/xml/org.freesmartphone.PIM.Date.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSOPIMDATE_H
#define QFSOPIMDATE_H

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
 * Proxy class for interface org.freesmartphone.PIM.Date
 */
class QFSO_EXPORT QFsoPIMDate: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.PIM.Date"; }

public:
    QFsoPIMDate(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoPIMDate();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Delete()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Delete"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> GetContent()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetContent"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> GetMultipleFields(const QString &field_list)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(field_list);
        return asyncCallWithArgumentList(QLatin1String("GetMultipleFields"), argumentList);
    }

    inline QDBusPendingReply<QStringList> GetUsedBackends()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetUsedBackends"), argumentList);
    }

    inline QDBusPendingReply<> Update(const QVariantMap &date_data)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(date_data);
        return asyncCallWithArgumentList(QLatin1String("Update"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void DateDeleted();
    void DateUpdated(const QVariantMap &data);
};

namespace org {
  namespace freesmartphone {
    namespace PIM {
      typedef ::QFsoPIMDate Date;
    }
  }
}
#endif
