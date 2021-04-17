#include "tile.h"
#include <QDebug>

Tile::Tile(int size, TilesetSplitter *tileSplit)
{
    this->top_->setPixmap(tileSplit->get("floors/floor1"));
    this->top_->setTransformOriginPoint(this->top_->boundingRect().center());
    this->top_->setRotation(45);
    QTransform top_transform;
    this->top_->setTransform(top_transform.scale(size*2, size), false);
}

Entity *Tile::getEntity() const
{
    return entity;
}

void Tile::setEntity(Entity *value)
{
    entity = value;
}

