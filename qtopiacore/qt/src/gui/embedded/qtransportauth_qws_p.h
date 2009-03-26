/****************************************************************************
**
** Copyright (C) 2008 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Qt Software Information (qt-info@nokia.com)
**
** This file is part of the QtGui module of the Qt Toolkit.
**
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License versions 2.0 or 3.0 as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file.  Please review the following information
** to ensure GNU General Public Licensing requirements will be met:
** http://www.fsf.org/licensing/licenses/info/GPLv2.html and
** http://www.gnu.org/copyleft/gpl.html.
**
** Qt for Windows(R) Licensees
** As a special exception, Nokia, as the sole copyright holder for Qt
** Designer, grants users of the Qt/Eclipse Integration plug-in the
** right for the Qt/Eclipse Integration to link to functionality
** provided by Qt Designer and its related libraries.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at qt-sales@nokia.com.
**
****************************************************************************/

#ifndef QTRANSPORTAUTH_QWS_P_H
#define QTRANSPORTAUTH_QWS_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <QtCore/qglobal.h>

#ifndef QT_NO_SXE

#include "qtransportauth_qws.h"
#include "qtransportauthdefs_qws.h"
#include "qbuffer.h"

#include <qmutex.h>
#include <qdatetime.h>
#include "private/qobject_p.h"

#include <QtCore/qcache.h>

QT_BEGIN_NAMESPACE

// Uncomment to generate debug output
// #define QTRANSPORTAUTH_DEBUG 1

#ifdef QTRANSPORTAUTH_DEBUG
void hexstring( char *buf, const unsigned char* key, size_t sz );
#endif

// proj id for ftok usage in sxe
#define SXE_PROJ 10022

/*!
  \internal
  memset for security purposes, guaranteed not to be optimized away
  http://www.faqs.org/docs/Linux-HOWTO/Secure-Programs-HOWTO.html
*/
void *guaranteed_memset(void *v,int c,size_t n);

class QUnixSocketMessage;

/*!
  \internal
  \class AuthCookie
  Struct to carry process authentication key and id
*/
#define QSXE_HEADER_LEN 24

/*!
  \macro AUTH_ID
  Macro to manage authentication header.  Format of header is:
  \table
  \header \i BYTES  \i  CONTENT
     \row \i 0-3    \i  magic numbers
     \row \i 4      \i  length of authenticated data (max 255 bytes)
     \row i\ 5      \i  reserved
     \row \i 6-21   \i  MAC digest, or shared secret in case of simple auth
     \row \i 22     \i  program id
     \row \i 23     \i  sequence number
  \endtable
  Total length of the header is 24 bytes

  However this may change.  Instead of coding these numbers use the AUTH_ID,
  AUTH_KEY, AUTH_DATA and AUTH_SPACE macros.
*/

#define AUTH_ID(k) ((unsigned char)(k[QSXE_KEY_LEN]))
#define AUTH_KEY(k) ((unsigned char *)(k))

#define AUTH_DATA(x) (unsigned char *)((x) + QSXE_HEADER_LEN)
#define AUTH_SPACE(x) ((x) + QSXE_HEADER_LEN)
#define QSXE_LEN_IDX 4
#define QSXE_KEY_IDX 6
#define QSXE_PROG_IDX 22
#define QSXE_SEQ_IDX 23

class SxeRegistryLocker : public QObject
{
    Q_OBJECT
public:
    SxeRegistryLocker( QObject * );
    ~SxeRegistryLocker();
    bool success() const { return m_success; }
private:
    bool m_success;
    QObject *m_reg;
};

class QTransportAuthPrivate : public QObjectPrivate
{
    Q_DECLARE_PUBLIC(QTransportAuth)
public:
    QTransportAuthPrivate();
    ~QTransportAuthPrivate();

    const unsigned char *getClientKey( unsigned char progId );
    void invalidateClientKeyCache();

    bool keyInitialised;
    QString m_logFilePath;
    QString m_keyFilePath;
    QObject *m_packageRegistry;
    AuthCookie authKey;
    QCache<unsigned char, char> keyCache;
    QHash< QObject*, QIODevice*> buffersByClient;
    QMutex keyfileMutex;
};

/*!
  \internal
  Enforces the False Authentication Rate.  If more than 4 authentications
  are received per minute the sxemonitor is notified that the FAR has been exceeded
*/
class FAREnforcer
{
    public:
        static FAREnforcer *getInstance();
        void logAuthAttempt( QDateTime time = QDateTime::currentDateTime() );
        void reset();

#ifndef TEST_FAR_ENFORCER
    private:
#endif
        FAREnforcer();
        FAREnforcer( const FAREnforcer & );
        FAREnforcer &operator=(FAREnforcer const & );

        static const QString FARMessage;
        static const int minutelyRate;
        static const QString SxeTag;
        static const int minute;

        QList<QDateTime> authAttempts;
};

QT_END_NAMESPACE

#endif // QT_NO_SXE
#endif // QTRANSPORTAUTH_QWS_P_H

