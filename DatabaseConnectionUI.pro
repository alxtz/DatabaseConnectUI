#-------------------------------------------------
#
# Project created by QtCreator 2016-06-28T02:24:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DatabaseConnectionUI
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    MainView/MainView.cpp \
    MainView/SQLTableScene/SQLTableScene.cpp \
    MainView/SQLTableScene/TitleText.cpp \
    MainView/SQLTableScene/SceneWidgets/ComboBox/ComboBox.cpp \
    MainView/SQLTableScene/SceneWidgets/ComboBox/PopdownList.cpp \
    MainView/SQLTableScene/SceneWidgets/ComboBox/PopoutListOption.cpp

HEADERS  += MainWindow.h \
    MainView/MainView.h \
    MainView/SQLTableScene/SQLTableScene.h \
    MainView/SQLTableScene/TitleText.h \
    MainView/SQLTableScene/SceneWidgets/ComboBox/ComboBox.h \
    MainView/SQLTableScene/SceneWidgets/ComboBox/PopdownList.h \
    MainView/SQLTableScene/SceneWidgets/ComboBox/PopoutListOption.h
