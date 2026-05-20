find_package(Qt6 REQUIRED COMPONENTS Core CorePrivate Gui Qml Quick QuickControls2 Widgets)

qt_standard_project_setup(REQUIRES 6.10)

qt_add_executable(editor
    main.cpp
)

qt_add_qml_module(editor
    URI Editor
    VERSION 1.0
    QML_FILES
        Main.qml
    DEPENDENCIES TARGET
        LibFoo
        LibEditor
        LibDebugUiUtils
)

target_link_libraries(editor
    PRIVATE
        LibFoo
        LibEditor
        Qt6::Core
        Qt6::CorePrivate
        Qt6::Quick
        Qt6::QuickControls2
        Qt6::Widgets
)

set_target_properties(editor
    PROPERTIES
    CXX_EXTENSIONS FALSE
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED TRUE
)
