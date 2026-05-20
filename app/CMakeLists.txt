find_package(Qt6 REQUIRED COMPONENTS Core CorePrivate Gui Qml Quick QuickControls2 Widgets)

qt_standard_project_setup(REQUIRES 6.10)

qt_add_executable(app WIN32 MACOSX_BUNDLE
    main.cpp
)

qt_add_qml_module(app
    URI "App"
    VERSION 1.0
    QML_FILES
        Main.qml
    DEPENDENCIES TARGET
        LibFoo
    IMPORT_PATH
        ${CMAKE_CURRENT_SOURCE_DIR}/mods/core/qml/modules
)

target_compile_definitions(app
    PRIVATE
        APP_SOURCE_DIR="${CMAKE_CURRENT_SOURCE_DIR}"
)

target_link_libraries(app
    PRIVATE
        LibFoo
        Qt6::Core
        Qt6::CorePrivate
        Qt6::Quick
        Qt6::QuickControls2
        Qt6::Widgets
)

set_target_properties(app
    PROPERTIES
    CXX_EXTENSIONS FALSE
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED TRUE
)

install(TARGETS app
    BUNDLE DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

qt_generate_deploy_qml_app_script(
    TARGET app
    OUTPUT_SCRIPT deploy_script
    MACOS_BUNDLE_POST_BUILD
    NO_UNSUPPORTED_PLATFORM_ERROR
    DEPLOY_USER_QML_MODULES_ON_UNSUPPORTED_PLATFORM
)
install(SCRIPT ${deploy_script})
