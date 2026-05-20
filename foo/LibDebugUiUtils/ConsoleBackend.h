#ifndef CONSOLEBACKEND_H
#define CONSOLEBACKEND_H

#include <QObject>
#include <QJSValue>
#include <QtQmlIntegration/qqmlintegration.h>

#include "DebugUiUtilsGlobal.h"

class DEBUGUIUTILS_EXPORT ConsoleBackend : public QObject
{
    Q_OBJECT
    QML_ELEMENT

public:
    explicit ConsoleBackend(QObject *parent = nullptr);
    ~ConsoleBackend() override;

public slots:
    virtual void run(const QString &script);
};

#endif // CONSOLEBACKEND_H
