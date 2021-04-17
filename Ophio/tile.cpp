#include "tile.h"
#include <QDebug>

Tile::Tile(int size, TilesetSplitter *tileSplit)
{
    //Tile has 20% of chance being different.
    QString tileNumber = ( (rand() % 100) < 20 ? QString::number(rand() % 8 + 1) : "1" );

    this->top_->setPixmap( tileSplit->get("floors/floor" + tileNumber ) );
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

