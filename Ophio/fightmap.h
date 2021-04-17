#ifndef FIGHTMAP_H
#define FIGHTMAP_H

#include <QGraphicsScene>
#include <tilesetsplitter.h>

#include "tile.h"

class FightMap
{
public:
    FightMap(int scene_size, int tile_size, TilesetSplitter *tileSplit);

public:
    QList<QGraphicsPixmapItem*> getFightMap();
    QList<QGraphicsPixmapItem*> getFloor();
    QList<QGraphicsPixmapItem *> getEntities();
    void setEntities(QList<QPair<Entity*, QPoint>> list);

//    TODO
    void setFloor();

public:
    int tile_px=16;

private:
    QList<QList<Tile*>> map_;
    int scene_size_;
    int tile_size_;
};

#endif // FIGHTMAP_H
