TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Context.cpp

HEADERS += \
    BackDoorStrategy.h \
    IStrategy.h \
    GreenLightStrategy.h \
    BlockEntry.h \
    Context.h

