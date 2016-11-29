#-------------------------------------------------
#
# Project created by QtCreator 2016-11-08T15:45:19
#
#-------------------------------------------------

QT       += gui widgets
CONFIG+=dll
TARGET = TestDll
TEMPLATE = lib

DEFINES += TESTDLL_LIBRARY

SOURCES += testdll.cpp

HEADERS += testdll.h\
        testdll_global.h

DEF_FILE = export.def

unix {
    target.path = /usr/lib
    INSTALLS += target
}
win32 {
     QTPLUGIN+=qwindows
      DEFINES += PLATFORM_WIN32
     include(qtwinmigrate/src/qtwinmigrate.pri)
}

DISTFILES += \
    export.def
