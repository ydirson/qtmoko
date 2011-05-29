/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsoerror -c QFsoError specs/xml/org.freesmartphone.Error.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSOERROR_H
#define QFSOERROR_H

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
 * Proxy class for interface org.freesmartphone.Error0
 */
class QFSO_EXPORT QFsoError: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.Error0"; }

public:
    QFsoError(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoError();

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace freesmartphone {
    typedef ::QFsoError Error0;
  }
}
#endif
