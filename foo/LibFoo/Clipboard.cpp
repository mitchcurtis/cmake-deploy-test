#include "Clipboard.h"

#include <QClipboard>
#include <QGuiApplication>

Clipboard::Clipboard(QObject *parent) :
    QObject(parent)
{
}

Clipboard::~Clipboard()
{
}

QString Clipboard::toBase64(const QString &string) const
{
    return qCompress(string.toUtf8(), 9).toBase64();
}

void Clipboard::copy(const QString &text)
{
    qGuiApp->clipboard()->setText(text);
}
