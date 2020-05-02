/****************************************************************************
**
** Copyright (C) 2020 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtGui module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QRANGECOLLECTION_H
#define QRANGECOLLECTION_H

#include <QtGui/qtguiglobal.h>
#include <QtCore/qpair.h>
#include <QtCore/qscopedpointer.h>
#include <QtCore/qvector.h>

QT_BEGIN_NAMESPACE

class QRangeCollectionPrivate;

class Q_GUI_EXPORT QRangeCollection
{
    Q_DECLARE_PRIVATE(QRangeCollection)
public:
    explicit QRangeCollection();
    ~QRangeCollection();

    void addPage(int pageNumber);
    void addRange(int from, int to);
    QList<QPair<int, int>> toList() const;
    void clear();

    bool parse(const QString &ranges);
    QString toString() const;

    bool contains(const int pageNumber) const;
    bool isEmpty() const;
    int firstPage() const;
    int lastPage() const;

private:
    QScopedPointer<QRangeCollectionPrivate> d_ptr;
};

QT_END_NAMESPACE

#endif // QRANGECOLLECTION_H