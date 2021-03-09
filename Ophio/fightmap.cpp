#include "fightmap.h"
#include "tile.h"
#include <QDebug>

FightMap::FightMap(QGraphicsScene* scene, int scene_size, int tile_size)
{
    this->scene=scene;
    this->scene_size=scene_size;
    this->tile_size=tile_size;

    for (int i=0; i<this->scene_size; i++) {
        this->map.append(QList<Tile*>());
        for (int j=0; j<this->scene_size; j++) {
            Tile* t = new Tile(tile_size);
            this->map[i].append(t);
        }
    }
}

void FightMap::addScene()
{
    int tile_pace = this->tile_px * 0.75;
    int x_offset = tile_pace * 0.75 * this->tile_size + tile_pace * this->tile_size * ( this->scene_size - 1 ) ;
    int y_offset = 12 * this->tile_size;
    for (int i=0; i<this->scene_size; i++) {
        for (int j=0; j<this->scene_size; j++) {
            this->map[i][j]->top->setPos(x_offset*2, y_offset);
            this->scene->addItem(this->map[i][j]->top);
            x_offset += tile_pace * this->tile_size;
            y_offset += tile_pace * this->tile_size;
        }
        x_offset -= tile_pace * this->tile_size * ( this->scene_size + 1 );
        y_offset -= tile_pace * this->tile_size * ( this->scene_size - 1 );
    }
}
