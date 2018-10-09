TEMPLATE = lib
TARGET = qzxingplugin
TARGET = $$qtLibraryTarget($$TARGET)

QT += qml quick multimedia
CONFIG += qt plugin c++11
CONFIG += qzxing_multimedia
CONFIG -= android_install

#PLUGIN_IMPORT_PATH = QZXing
#target.path = $$[QT_INSTALL_QML]/$$PLUGIN_IMPORT_PATH
#INSTALLS += target
#qmldir.files += qmldir qzxingplugin.qmltypes
#qmldir.path += $$target.path
#INSTALLS += qmldir
#qmltypes.commands = qmlplugindump -nonrelocatable QZXing 2.3 > $$PWD/qzxingplugin.qmltypes
#QMAKE_EXTRA_TARGETS += qmltypes

include(qzxing/src/QZXing.pri)

# Input
SOURCES += \
        qzxingplugin_plugin.cpp \
        qzxingplugin.cpp

HEADERS += \
        qzxingplugin_plugin.h \
        qzxingplugin.h

DISTFILES = qmldir

uri = QZXing
!equals(_PRO_FILE_PWD_, $$OUT_PWD) {
    copy_qmldir.target = $$OUT_PWD/qmldir
    copy_qmldir.depends = $$_PRO_FILE_PWD_/qmldir
    copy_qmldir.commands = $(COPY_FILE) \"$$replace(copy_qmldir.depends, /, $$QMAKE_DIR_SEP)\" \"$$replace(copy_qmldir.target, /, $$QMAKE_DIR_SEP)\"
    QMAKE_EXTRA_TARGETS += copy_qmldir
    PRE_TARGETDEPS += $$copy_qmldir.target
}

qmldir.files = qmldir
installPath = $$[QT_INSTALL_QML]/$$replace(uri, \\., /)
qmldir.path = $$installPath
target.path = $$installPath
INSTALLS += target qmldir
