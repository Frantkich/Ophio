QT += core gui widgets

CONFIG += c++11

HEADERS += \
    gameloop.h \
    health.h \
    tile.h

SOURCES += \
        gameloop.cpp \
        health.cpp \
        main.cpp \
        tile.cpp


qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assets.qrc
