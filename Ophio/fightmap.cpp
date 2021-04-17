#include "fightmap.h"
#include "tile.h"
#include <QDebug>

FightMap::FightMap(QGraphicsScene* scene, int scene_size, int tile_size, TilesetSplitter *tileSplit)
{
    this->scene_=scene;
    this->scene_size_=scene_size;
    this->tile_size_=tile_size;

    for (int i=0; i<this->scene_size_; i++) {
        this->map_.append(QList<Tile*>());
        for (int j=0; j<this->scene_size_; j++) {
            Tile* tile = new Tile(tile_size, tileSplit);
            this->map_[i].append(tile);
        }
    }
}

void FightMap::addScene()
{
    int tile_pace = this->tile_px * 0.75;
    int x_offset = tile_pace * 0.75 * this->tile_size_ + tile_pace * this->tile_size_ * ( this->scene_size_ - 1 ) ;
    int y_offset = 12 * this->tile_size_;
    for (int i=0; i<this->scene_size_; i++) {
        for (int j=0; j<this->scene_size_; j++) {
            this->map_[i][j]->top_->setPos(x_offset*2, y_offset);
            this->scene_->addItem(this->map_[i][j]->top_);
            x_offset += tile_pace * this->tile_size_;
            y_offset += tile_pace * this->tile_size_;
        }
        x_offset -= tile_pace * this->tile_size_ * ( this->scene_size_ + 1 );
        y_offset -= tile_pace * this->tile_size_ * ( this->scene_size_ - 1 );
    }
}

