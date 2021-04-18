#ifndef FIGHTMAP_H
#define FIGHTMAP_H

#include <QtDebug>

#include "tilesetsplitter.h"
#include "tile.h"

class FightMap
{

public:
    FightMap(int sceneWidth, int sceneHeigh, TilesetSplitter *tileSplit);

public:
    QList<QGraphicsPixmapItem*> getFightMap();
    QList<QGraphicsPixmapItem*> getFloor();
    QList<QGraphicsPixmapItem*> getEntities();
    void setEntities(QList<QPair<Entity*, QPoint>> list);
    void setFloor();

private:
    QList<QList<Tile*>> map_;
    int sceneWidth_;
    int sceneHeigh_;
    int tileSize_;
    int tileZoom_=1;
};

#endif // FIGHTMAP_H
