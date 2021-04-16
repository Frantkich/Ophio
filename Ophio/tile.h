#ifndef TILE_H
#define TILE_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QMouseEvent>
#include <QWidget>
#include <entity.h>

class Tile : public QWidget
{
    Q_OBJECT
public:
    Tile(int size);

public:
    QGraphicsPixmapItem* top = new QGraphicsPixmapItem();
    QGraphicsPixmapItem* side = new QGraphicsPixmapItem();

public:
    Entity entity;
};

#endif // TILE_H
