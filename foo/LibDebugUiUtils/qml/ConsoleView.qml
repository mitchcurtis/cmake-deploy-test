import QtQuick

import QtQuick.Controls
import QtQuick.Layouts

import LibFoo
import LibDebugUiUtils

import "qrc:/qt/qml/LibFoo/js/script.js" as Script

Page {
    id: consoleView

    header: Label {
        text: "Console"
    }

    Component.onCompleted: {
        Script.foo()
    }

    ConsoleBackend {
        id: consoleBackend
    }
}

