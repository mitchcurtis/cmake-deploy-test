#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDirIterator>

int main(
    int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    const QDir coreQmlModulesDir(QStringLiteral(APP_SOURCE_DIR) + "/mods/core/qml/modules");
    engine.addImportPath(coreQmlModulesDir.canonicalPath());

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("App", "Main");

    // QDirIterator qrc(":", QDirIterator::Subdirectories);
    // while(qrc.hasNext())
    //     qDebug() << qrc.next();

    return app.exec();
}
