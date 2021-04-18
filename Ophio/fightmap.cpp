#include "fightmap.h"

FightMap::FightMap(int sceneWidth, int sceneHeigh, TilesetSplitter *tileSplit):
    sceneWidth_(sceneWidth),
    sceneHeigh_(sceneHeigh)
{
    for (int y=0; y<sceneHeigh_; y++) {
        map_.append(QList<Tile*>());
        for (int x=0; x<sceneWidth_; x++) {
            map_[y].append(new Tile(tileSplit));
        }
    }
    if ( not(map_.empty()) ){
        tileSize_=map_[0][0]->topSprite_->boundingRect().height();
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
    for (int y=0; y< sceneHeigh_; y++) {
        for (int x=0; x<sceneWidth_; x++) {
            map_[y][x]->topSprite_->setPos(posX, posY);
            to_render.append(map_[y][x]->topSprite_);
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
//                int w = tile->entity_->getSprite()->boundingRect().width();
                int h = tile->entity_->getSprite()->boundingRect().height();
                int posX = tile->topSprite_->x() + tileSize_/2;
                int posY = tile->topSprite_->y() + tileSize_*0.75 - h;
                tile->entity_->getSprite()->setPos(posX, posY);
                to_render.append(tile->entity_->getSprite());
            }
        }
    }
    return to_render;
}

void FightMap::setEntities(QList<QPair<Entity*, QPoint>> list)
{
    foreach (auto element, list) {
        if (element.second.y() <= sceneHeigh_ && element.second.x() <= sceneWidth_ ) {
            map_[element.second.y()][element.second.x()]->entity_=element.first;
        }
        else {
            qDebug() << "WARMING:" << "Entity ->" << element.first->getName() << "tried to spawn out of the map";
        }
    }
}

void FightMap::setFloor()
{

}


