/****************************************************************************
**
** This file is part of the Qt Extended Opensource Package.
**
** Copyright (C) 2009 Trolltech ASA.
**
** Contact: Qt Extended Information (info@qtextended.org)
**
** This file may be used under the terms of the GNU General Public License
** version 2.0 as published by the Free Software Foundation and appearing
** in the file LICENSE.GPL included in the packaging of this file.
**
** Please review the following information to ensure GNU General Public
** Licensing requirements will be met:
**     http://www.fsf.org/licensing/licenses/info/GPLv2.html.
**
**
****************************************************************************/
#ifndef IPVALIDATOR_H
#define IPVALIDATOR_H

#include <QValidator>
#include <QWidget>
#include <qtopiaglobal.h>

class IPValidatorPrivate;
class QTOPIACOMM_EXPORT IPValidator : public QValidator {
public:
    explicit IPValidator( QWidget * parent );
    virtual ~IPValidator();

    State validate( QString &s, int &pos ) const;
    virtual void fixup( QString & input ) const;

private:
    void fixup_impl( QString & input ) const;

    IPValidatorPrivate* d;
};

#endif
