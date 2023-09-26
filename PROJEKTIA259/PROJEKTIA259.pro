TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        devicebase.cpp \
        devicemouse.cpp \
        main.cpp \
        mydeviceui.cpp

HEADERS += \
    devicebase.h \
    devicemouse.h \
    mydeviceui.h
