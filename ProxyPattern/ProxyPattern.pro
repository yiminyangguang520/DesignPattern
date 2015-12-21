TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

DESTDIR += ../ProxyPattern/bin

include($$(GLDRS)\Glodon\Shared\VLD.pri))

SOURCES += main.cpp \
    proxypattern.cpp

HEADERS += \
    proxypattern.h

