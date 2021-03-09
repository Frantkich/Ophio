#include "fightmap.h"
#include "tile.h"
#include <QDebug>

FightMap::FightMap(QGraphicsScene* scene, int scene_size, int tile_size)
{
    this->scene=scene;
    this->scene_size=scene_size;
    this->tile_size=tile_size;
    for (int i=0; i<this->scene_size; i++) {
        Tile* t = new Tile(tile_size);
        this->map.append(t);
    }
}

void FightMap::addScene()
{
    int x_offset = 8 * tile_size;
    int y_offset = 12 * tile_size;
    for (int i=0; i<this->scene_size; i++) {
        this->map.at(i)->setPos(x_offset*2, y_offset);
        this->scene->addItem(this->map.at(i));
        x_offset += 12 * tile_size;
        y_offset += 12 * tile_size;
    }
}
