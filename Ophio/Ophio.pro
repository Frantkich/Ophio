QT += core gui widgets

CONFIG += c++11

HEADERS += \
    fightmap.h \
    gameloop.h \
    tile.h

SOURCES += \
        fightmap.cpp \
        gameloop.cpp \
        main.cpp \
        tile.cpp


qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assets.qrc
