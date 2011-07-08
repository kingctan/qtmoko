/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsopimmessagefolder -c QFsoPIMMessageFolder specs/xml/org.freesmartphone.PIM.MessageFolder.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSOPIMMESSAGEFOLDER_H
#define QFSOPIMMESSAGEFOLDER_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include <qfsodbusabstractinterface.h>

#if defined(QFSO_LIBRARY)
    #define QFSO_EXPORT Q_DECL_EXPORT
#else
    #define QFSO_EXPORT Q_DECL_IMPORT
#endif

/*
 * Proxy class for interface org.freesmartphone.PIM.MessageFolder
 */
class QFSO_EXPORT QFsoPIMMessageFolder: public QFsoDbusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.PIM.MessageFolder"; }

public:
    QFsoPIMMessageFolder(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoPIMMessageFolder();

public Q_SLOTS: // METHODS
    inline QFsoDBusPendingReply<int> GetMessageCount()
    {
        QList<QVariant> argumentList;
        return fsoAsyncCall(QLatin1String("GetMessageCount"), argumentList);
    }

    inline QFsoDBusPendingReply<QStringList> GetMessagePaths(int first, int count)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(first) << qVariantFromValue(count);
        return fsoAsyncCall(QLatin1String("GetMessagePaths"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void MessageMoved(const QString &message_path, const QString &new_folder);
};

namespace org {
  namespace freesmartphone {
    namespace PIM {
      typedef ::QFsoPIMMessageFolder MessageFolder;
    }
  }
}
#endif
