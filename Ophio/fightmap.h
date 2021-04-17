#ifndef FIGHTMAP_H
#define FIGHTMAP_H

#include <QGraphicsScene>
#include <tilesetsplitter.h>

#include "tile.h"

class FightMap
{
public:
    FightMap(QGraphicsScene* scene, int scene_size, int tile_size, TilesetSplitter *tileSplit);

public:
    void addScene();
    void fillFightMap(QList<Entity>);

public:
    int tile_px;

private:
    QList<QList<Tile*>> map_;
    QGraphicsScene* scene_;
    int scene_size_;
    int tile_size_;
};

#endif // FIGHTMAP_H
