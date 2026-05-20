#ifndef CLIPBOARD_H
#define CLIPBOARD_H

#include <QObject>

#include "FooGlobal.h"

class FOO_EXPORT Clipboard : public QObject
{
    Q_OBJECT

public:
    explicit Clipboard(QObject *parent = 0);
    ~Clipboard();

    Q_INVOKABLE QString toBase64(const QString &string) const;

public slots:
    void copy(const QString &text);
};

#endif // CLIPBOARD_H
