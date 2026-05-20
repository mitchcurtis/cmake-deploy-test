#include "QmlValidator.h"

#include <QQmlEngine>
#include <QQmlComponent>

QmlValidator::QmlValidator(QObject *parent) :
    QObject(parent),
    mValid(true)
{
}

QmlValidator::~QmlValidator()
{
}

bool QmlValidator::isValid() const
{
    return mValid;
}

QString QmlValidator::qml() const
{
    return mQml;
}

void QmlValidator::setQml(const QString &qml)
{
    if (qml == mQml)
        return;

    mQml = qml;

    const bool wasValid = mValid;

    QQmlComponent component(qmlEngine(this));
    component.setData(mQml.toLocal8Bit(), QUrl());
    mValid = !component.isError();

    const QString oldErrorMessage = mErrorMessage;
    mErrorMessage = component.errorString();
    if (mErrorMessage != oldErrorMessage)
        emit errorMessageChanged();

    if (mValid != wasValid)
        emit validChanged();
}

QString QmlValidator::errorMessage() const
{
    return mErrorMessage;
}
