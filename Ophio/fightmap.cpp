#include "fightmap.h"

FightMap::FightMap(int sceneWidth, int sceneHeigh, TilesetSplitter *tileSplit):
    sceneWidth_(sceneWidth),
    sceneHeigh_(sceneHeigh)
{
    for (int i=0; i<sceneHeigh_; i++) {
        map_.append(QList<Tile*>());
        for (int j=0; j<sceneWidth_; j++) {
            map_[i].append(new Tile(tileSplit));
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
    int posX = 0;
    int posY = 0;
    for (int i=0; i< sceneHeigh_; i++) {
        for (int j=0; j<sceneWidth_; j++) {
            map_[i][j]->topSprite_->setPos(posX, posY);
            to_render.append(map_[i][j]->topSprite_);
            posX += tileSize_*2;
            posY += tileSize_;
        }
        posX -= tileSize_ * 2 * ( sceneWidth_ + 1 );
        posY -= tileSize_ * ( sceneWidth_ - 1 );
    }
    return to_render;
}

QList<QGraphicsPixmapItem *> FightMap::getEntities()
{
    QList<QGraphicsPixmapItem*> to_render;
    foreach (auto rows, map_) {
        foreach (Tile *tile, rows) {
            if ( tile->entity_ ) {
                 tile->entity_->getSprite()->setPos(tile->topSprite_->x() + tileSize_/2, tile->topSprite_->y() - tileSize_);
                 to_render.append(tile->entity_->getSprite());
            }
        }
    }
    return to_render;
}

void FightMap::setEntities(QList<QPair<Entity*, QPoint>> list)
{
    foreach (auto element, list) {
        map_[element.second.y()][element.second.x()]->entity_=element.first;
    }
}

void FightMap::setFloor()
{

}


