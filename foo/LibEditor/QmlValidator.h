#ifndef QMLVALIDATOR_H
#define QMLVALIDATOR_H

#include <QObject>
#include <QtQmlIntegration/qqmlintegration.h>

#include "EditorGlobal.h"

class EDITOR_EXPORT QmlValidator : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString qml READ qml WRITE setQml)
    Q_PROPERTY(bool valid READ isValid NOTIFY validChanged)
    Q_PROPERTY(QString errorMessage READ errorMessage NOTIFY errorMessageChanged)
    QML_ELEMENT

public:
    explicit QmlValidator(QObject *parent = 0);
    ~QmlValidator();

    bool isValid() const;

    QString qml() const;
    void setQml(const QString &qml);

    QString errorMessage() const;

signals:
    void validChanged();
    void errorMessageChanged();

private:
    QString mQml;
    bool mValid;
    QString mErrorMessage;
};

#endif // QMLVALIDATOR_H
