#-------------------------------------------------
#
# Project created by QtCreator 2016-10-26T18:10:02
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia
QT       += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TeamSpeakSoundBoard
TEMPLATE = app

include(C:/Users/Ian/Desktop/QMidi-master/src/QMidi.pri)

SOURCES += main.cpp\
        mainwindow.cpp \
    settings.cpp \
    extra_button.cpp

HEADERS  += mainwindow.h \
    settings.h \
    extra_button.h

FORMS    += mainwindow.ui \
    settings.ui \
    extra_button.ui




DISTFILES +=

win32: LIBS += -L$$PWD/./ -lbass

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

unix|win32: LIBS += -L$$PWD/C/ -lbass_fx

INCLUDEPATH += $$PWD/C
DEPENDPATH += $$PWD/C
