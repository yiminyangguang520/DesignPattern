TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ILetterProcess.cpp \
    LetterprocessImpl.cpp \
    ModenPostOffice.cpp \
    LetterPolice.cpp

HEADERS += \
    ILetterProcess.h \
    LetterprocessImpl.h \
    ModenPostOffice.h \
    LetterPolice.h

