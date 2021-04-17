QT += core gui widgets

CONFIG += c++11

HEADERS += \
    entity.h \
    fightmap.h \
    gameloop.h \
    hud.h \
    mob.h \
    player.h \
    tile.h \
    tilesetsplitter.h

SOURCES += \
        entity.cpp \
        fightmap.cpp \
        gameloop.cpp \
        hud.cpp \
        main.cpp \
        mob.cpp \
        player.cpp \
        tile.cpp \
        tilesetsplitter.cpp


qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assets.qrc
