import QtQuick

import LibFoo
import LibDebugUiUtils
import FooUi

Window {
    width: 640
    height: 480
    visible: true

    Row {
        // From LibFoo.
        TinyButton {
            text: "A tiny button"
        }

        // From LibDebugUiUtils.
        ConsoleView {}

        // From FooUi; a QML-only module that tests that
        // "mods" placed in the filesystem work
        Clock {}
    }
}
