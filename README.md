# How to deploy using Qt Creator

Check the "install" target in Projects > Build Settings > Build Steps.

Checking ["Install into staging directory"](https://doc.qt.io/qtcreator/creator-build-settings-cmake.html#cmake-build-steps) allows you to test deployment with different Qt versions. For example, you can set it to:

~/Downloads/cmake-deploy-test-install-6.11

To test that the app is properly deployed, temporarily rename the directory that contains your Qt installation to something else, and then run the app. This ensures that all of the files it needs to run standalone were installed.
