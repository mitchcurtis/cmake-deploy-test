import QtQuick
import QtQuick.Controls

import LibFoo

Label {
    text: "I'm a clock!"

    // Just to make sure types from LibFoo work
    TinyButton {
        text: "Reset"
        y: parent.height
    }
}
