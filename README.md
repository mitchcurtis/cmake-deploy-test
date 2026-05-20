Tests CMake deployment of an app using a realistic Qt Quick project structure, with different libraries and QML modules that depend on each other.

The "foo" directory contains all of the libraries, as well as a utility Editor app to show how to have different executables elsewhere in the project tree.

Tests weren't included, but could live in a top-level "tests" directory.

# How to deploy using Qt Creator

Check the "install" target in Projects > Build Settings > Build Steps.

Checking ["Install into staging directory"](https://doc.qt.io/qtcreator/creator-build-settings-cmake.html#cmake-build-steps) allows you to test deployment with different Qt versions. For example, you can set it to:

~/Downloads/cmake-deploy-test-install-6.11

To test that the app is properly deployed, temporarily rename the directory that contains your Qt installation to something else, and then run the app. This ensures that all of the files it needs to run standalone were installed.
