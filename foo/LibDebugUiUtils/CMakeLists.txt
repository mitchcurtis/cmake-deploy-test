# set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Qml Quick QuickPrivate)

qt_add_qml_module(LibDebugUiUtils
    URI "LibDebugUiUtils"
    SOURCES
        ConsoleBackend.cpp
        ConsoleBackend.h
        DebugUiUtilsGlobal.h
    QML_FILES
        qml/ConsoleView.qml
    DEPENDENCIES TARGET
        LibFoo/auto
        LibEditor/auto
)

target_link_libraries(LibDebugUiUtils
    PUBLIC
        Qt6::Core
        Qt6::Gui
        Qt6::Qml
        Qt6::Quick
        Qt6::QuickPrivate
        LibFoo
)
