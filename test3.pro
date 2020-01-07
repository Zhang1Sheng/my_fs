#-------------------------------------------------
#
# Project created by QtCreator 2020-01-01T20:24:20
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog_download.cpp \
    dialog_userinfo_update.cpp \
    dialoglogin.cpp \
    dialog_new.cpp \
    upload.cpp

  

HEADERS  += mainwindow.h \
    dialog_download.h \
    dialog_userinfo_update.h \
    dialoglogin.h \
    dialog_new.h \
    upload.h


FORMS    += mainwindow.ui \
    dialog_download.ui \
    dialog_userinfo_update.ui \
    dialoglogin.ui \
    dialog_new.ui \
    upload.ui

RESOURCES += \
    img/img.qrc
