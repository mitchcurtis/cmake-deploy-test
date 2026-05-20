import QtQuick

import LibFoo
import LibDebugUiUtils
import LibEditor

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
    }

    // From LibEditor.
    QmlValidator {}
}
