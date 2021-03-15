QT += core gui widgets

CONFIG += c++11

HEADERS += \
    enemy.h \
    entity.h \
    fightmap.h \
    gameloop.h \
    ophio.h \
    tile.h \
    tilesetsplitter.h

SOURCES += \
        enemy.cpp \
        entity.cpp \
        fightmap.cpp \
        gameloop.cpp \
        main.cpp \
        ophio.cpp \
        tile.cpp \
        tilesetsplitter.cpp


qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assets.qrc
