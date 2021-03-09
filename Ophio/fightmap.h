#ifndef FIGHTMAP_H
#define FIGHTMAP_H

#include <QGraphicsScene>

#include "tile.h"

class FightMap
{
public:
    FightMap(QGraphicsScene* scene, int scene_size, int tile_size);
    void addScene();

private:
    QList<Tile*> map;
    QGraphicsScene* scene;
    int scene_size;
    int tile_size;
    int tileSpace = 5;
};

#endif // FIGHTMAP_H
