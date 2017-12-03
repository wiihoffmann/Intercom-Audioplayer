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

SOURCES += main.cpp\
        mainwindow.cpp \
    settings.cpp \
    extra_button.cpp \
    telephone_automation.cpp \
    addtime.cpp \
    phonesetup.cpp

HEADERS  += mainwindow.h \
    settings.h \
    extra_button.h \
    telephone_automation.h \
    addtime.h \
    phonesetup.h

FORMS    += mainwindow.ui \
    settings.ui \
    extra_button.ui \
    addtime.ui \
    phonesetup.ui

RC_FILE = myapp.rc

DISTFILES +=

win32: LIBS += -L$$PWD/./ -lbass

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

unix|win32: LIBS += -L$$PWD/C/ -lbass_fx

INCLUDEPATH += $$PWD/C
DEPENDPATH += $$PWD/C


#INCLUDEPATH += id3/include
#INCLUDEPATH += id3/include/id3

win32: LIBS += -L$$PWD/qid3/ -lqid3

INCLUDEPATH += $$PWD/qid3
DEPENDPATH += $$PWD/qid3
