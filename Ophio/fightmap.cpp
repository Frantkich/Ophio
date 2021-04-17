#include "fightmap.h"
#include "tile.h"
#include <QDebug>

FightMap::FightMap(int scene_size, int tile_size, TilesetSplitter *tileSplit)
{
    scene_size_=scene_size;
    tile_size_=tile_size;

    for (int i=0; i<scene_size_; i++) {
        map_.append(QList<Tile*>());
        for (int j=0; j<scene_size_; j++) {
            Tile* tile = new Tile(tile_size, tileSplit);
            map_[i].append(tile);
        }
    }
}

QList<QGraphicsPixmapItem *> FightMap::getFightMap()
{
    QList<QGraphicsPixmapItem*> to_render;
    to_render.append(getFloor());
    to_render.append(getEntities());
    return to_render;
}

QList<QGraphicsPixmapItem*> FightMap::getFloor()
{
    QList<QGraphicsPixmapItem*> to_render;
    int tile_pace = tile_px * 0.75;
    int x_offset = tile_pace * 0.75 * tile_size_ + tile_pace * tile_size_ * ( scene_size_ - 1 ) ;
    int y_offset = 12 * tile_size_;
    for (int i=0; i<scene_size_; i++) {
        for (int j=0; j<scene_size_; j++) {
            map_[i][j]->topSprite_->setPos(x_offset*2, y_offset);
            to_render.append(map_[i][j]->topSprite_);
            x_offset += tile_pace * tile_size_;
            y_offset += tile_pace * tile_size_;
        }
        x_offset -= tile_pace * tile_size_ * ( scene_size_ + 1 );
        y_offset -= tile_pace * tile_size_ * ( scene_size_ - 1 );
    }
    return to_render;
}

QList<QGraphicsPixmapItem *> FightMap::getEntities()
{
    QList<QGraphicsPixmapItem*> to_render;
    foreach (QList<Tile*> row, map_) {
        foreach (Tile *tile, row) {
            if ( tile->entity_ ) {
                 tile->entity_->sprite_->setPos(50, 50);
                 to_render.append(tile->entity_->sprite_);
            }
        }
    }
    return to_render;
}

void FightMap::setEntities(QList<QPair<Entity*, QPoint>> list)
{
    for (int i=0; i<list.size(); i++) {
        map_[list[i].second.rx()][list[i].second.ry()]->entity_=list[i].first;
    }
}


