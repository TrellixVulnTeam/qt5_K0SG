/****************************************************************************
**
** Copyright (C) 2017 Ford Motor Company
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtRemoteObjects module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL-EXCEPT$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef MYTESTSERVER_H
#define MYTESTSERVER_H

#include <QTimer>

#include <QtRemoteObjects/qremoteobjectnode.h>
#include <QtRemoteObjects/qremoteobjectsource.h>

#include "rep_MyInterface_source.h"

class MyTestServer : public MyInterfaceSimpleSource
{
    Q_OBJECT

public:
    MyTestServer(QObject *parent = nullptr);
    ~MyTestServer();

public Q_SLOTS:
    bool start() override;
    bool stop() override;
    bool quit() override;
    void testEnumParamsInSlots(Enum1 enumSlotParam, bool slotParam2, int __repc_variable_1) override;

Q_SIGNALS:
    void quitApp();
};

#endif // MYTESTSERVER_H
