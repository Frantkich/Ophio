#include "tile.h"
#include <QDebug>

Tile::Tile(int size)
{
    this->top->setPixmap(QPixmap(":image/bloc.png"));
    this->top->setTransformOriginPoint(this->top->boundingRect().center());
    this->top->setRotation(45);
    QTransform top_transform;
    this->top->setTransform(top_transform.scale(size*2, size), false);


    this->side->setPixmap(QPixmap(":image/bloc-side.png"));
    this->side->setTransformOriginPoint(this->side->boundingRect().center());
    this->side->setScale(10);
    this->side->setPos(250, 250);
    QTransform side_transform;
    this->side->setTransform(side_transform.rotate(-45, Qt::YAxis), false);
    this->side->setTransform(side_transform.rotate(-45, Qt::XAxis), false);
}
