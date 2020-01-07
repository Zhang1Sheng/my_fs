#-------------------------------------------------
#
# Project created by QtCreator 2020-01-01T20:57:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt
TEMPLATE = app


SOURCES += main.cpp\
    dialoglogin.cpp \
    dialog_new.cpp \
    upload.cpp\
    dialog_download.cpp\
    dialog_userinfo_update.cpp\
    mainwindow.cpp

HEADERS  += \
    dialoglogin.h \
    dialog_new.h \
    upload.h\
    dialog_download.h\
    dialog_userinfo_update.h\
    mainwindow.h

FORMS    += \
    dialoglogin.ui \
    dialog_new.ui \
    upload.ui\
    dialog_download.ui\
    dialog_userinfo_update.ui\
    mainwindow.ui

RESOURCES += \
    resource.qrc \
    ../../../../git-work/test/img/img.qrc
