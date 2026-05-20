set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Qml Quick QuickPrivate Widgets)

qt_add_qml_module(LibFoo
    URI "LibFoo"
    SOURCES
        Clipboard.h
        Clipboard.cpp
        FooGlobal.h
    QML_FILES
        qml/TinyButton.qml
    RESOURCES
        js/script.js
    DEPENDENCIES
        QuickPrivate
)

target_link_libraries(LibFoo
    PUBLIC
        Qt6::Core
        Qt6::Gui
        Qt6::Qml
        Qt6::Quick
        Qt6::QuickPrivate
        Qt6::Widgets
)

target_include_directories(LibFoo
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_definitions(LibFoo
    PRIVATE
        FOO_LIBRARY
)
