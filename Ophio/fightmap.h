#ifndef FIGHTMAP_H
#define FIGHTMAP_H

#include <QtDebug>

#include "tilesetsplitter.h"
#include "tile.h"

// FightMap is the class we use for placing each entity, it constructor takes dimensions as argument, so it can be different.

class FightMap
{

public:
    FightMap(int sceneWidth, int sceneHeigh, TilesetSplitter *tileSplit);

public:
    //This method is used for retrieving all tiles.
    QList<QGraphicsPixmapItem*> getFightMap();
    //This method is used for retrieving each floor sprite.
    QList<QGraphicsPixmapItem*> getFloor();
    //This method is used for retrieving each entity sprite.
    QList<QGraphicsPixmapItem*> getEntities();
    //This take a list of "tulp" containing an entity and it position, and place it in the map QList.
    void setEntities(QList<QPair<Entity*, QPoint>> list);

private:
    QList<QList<Tile*>> map_;
    int sceneWidth_;
    int sceneHeigh_;
    int tileSize_;
    int tileZoom_=1;
};

#endif // FIGHTMAP_H
