#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDirIterator>

int main(
    int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("Editor", "Main");

    // QDirIterator qrc(":", QDirIterator::Subdirectories);
    // while(qrc.hasNext())
    //     qDebug() << qrc.next();

    return app.exec();
}
