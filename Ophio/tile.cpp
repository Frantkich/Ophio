#include "tile.h"
#include <QDebug>

Tile::Tile(int size)
{
    setPixmap(QPixmap(":image/bloc.png"));

    setTransformOriginPoint(boundingRect().center());
    setRotation(45);
    QTransform txf;
    setTransform(txf.scale(size*2, size), false);

}
