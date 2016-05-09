#-------------------------------------------------
#
# Project created by QtCreator 2016-05-09T10:47:37
#
#-------------------------------------------------

QT       += core gui serialbus

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = modbus_parser_yxgu
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    serialsenddialog.cpp \
    serialsettingdialog.cpp

HEADERS  += mainwindow.h \
    serialsenddialog.h \
    serialsettingdialog.h

FORMS    += mainwindow.ui \
    serialsenddialog.ui \
    serialsettingdialog.ui

RESOURCES += \
    resource.qrc
