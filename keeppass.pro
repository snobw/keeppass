#-------------------------------------------------
#
# Project created by QtCreator 2017-03-08T23:18:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = keeppass
TEMPLATE = app


SOURCES += main.cpp\
        keeppass.cpp \
    parser.cpp \
    encode.cpp

HEADERS  += keeppass.h \
    parser.h \
    encode.h

FORMS    += keeppass.ui
