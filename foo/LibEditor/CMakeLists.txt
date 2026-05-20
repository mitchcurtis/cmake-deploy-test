set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(LibEditor SHARED)

qt_add_qml_module(LibEditor
    URI "LibEditor"
    SOURCES
        EditorGlobal.h
        QmlValidator.cpp
        QmlValidator.h
)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Qml Quick QuickPrivate Widgets)

target_link_libraries(LibEditor
    PUBLIC
        Qt6::Core
        Qt6::Gui
        Qt6::Qml
        Qt6::Quick
        Qt6::QuickPrivate
        Qt6::Widgets
        ${FMOD_LIB_PATH}
        LibFoo
)

target_include_directories(LibEditor
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_definitions(LibEditor
    PRIVATE
        EDITOR_LIBRARY
)
