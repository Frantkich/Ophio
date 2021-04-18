#include "tile.h"

Tile::Tile(TilesetSplitter *tileSplit)
{
    QString tileNumber = ( (rand() % 100) < 20 ? QString::number(rand() % 8) : "0" );
    topSprite_->setPixmap( tileSplit->getSprites("terrains/floors/floor" + tileNumber ) );
    topSprite_->setTransformOriginPoint(topSprite_->boundingRect().center());
    topSprite_->setRotation(45);
    QTransform top_transform;
    topSprite_->setTransform(top_transform.scale(2, 1), false);
}

QGraphicsPixmapItem *Tile::getTopSprite() const
{
    return topSprite_;
}

void Tile::setTopSprite(QGraphicsPixmapItem *topSprite)
{
    topSprite_ = topSprite;
}

Entity *Tile::getEntity() const
{
    return entity_;
}

void Tile::setEntity(Entity *entity)
{
    entity_ = entity;
}


