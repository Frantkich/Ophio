#ifndef FIGHTMAP_H
#define FIGHTMAP_H

#include <QGraphicsScene>

#include "tile.h"

class FightMap
{
public:
    FightMap(QGraphicsScene* scene, int scene_size, int tile_size);

public:
    void addScene();
    void addSceneSide();
    void fillFightMap(QList<Entity>);

public:
    int tile_px;

private:
    QList<QList<Tile*>> map;
    QGraphicsScene* scene;
    int scene_size;
    int tile_size;
};

#endif // FIGHTMAP_H
