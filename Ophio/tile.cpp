#include "tile.h"
#include <QDebug>

Tile::Tile(int size)
{
    this->top->setPixmap(QPixmap(":image/bloc.png"));
    this->top->setTransformOriginPoint(this->top->boundingRect().center());
    this->top->setRotation(45);
    QTransform txf;
    this->top->setTransform(txf.scale(size*2, size), false);
}
