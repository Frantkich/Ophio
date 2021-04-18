#include "tile.h"

Tile::Tile(TilesetSplitter *tileSplit)
{
    QString tileNumber = ( (rand() % 100) < 20 ? QString::number(rand() % 8 + 1) : "1" );

    topSprite_->setPixmap( tileSplit->get("floors/floor" + tileNumber ) );
    topSprite_->setTransformOriginPoint(topSprite_->boundingRect().center());
    topSprite_->setRotation(45);
    QTransform top_transform;
    topSprite_->setTransform(top_transform.scale(2, 1), false);
}


