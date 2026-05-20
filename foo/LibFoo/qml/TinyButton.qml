import QtQuick
import QtQuick.Controls

Button {
    leftPadding: 4
    rightPadding: 4
    topPadding: 4
    bottomPadding: 4
    focusPolicy: Qt.NoFocus
    implicitHeight: contentItem.implicitHeight + topPadding + bottomPadding
}
