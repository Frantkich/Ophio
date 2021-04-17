#include "tile.h"

Tile::Tile(TilesetSplitter *tileSplit)
{
    topSprite_->setPixmap(tileSplit->get("floors", "floor1"));
    topSprite_->setTransformOriginPoint(this->topSprite_->boundingRect().center());
    topSprite_->setRotation(45);
    QTransform top_transform;
    topSprite_->setTransform(top_transform.scale(2, 1), false);
}


