#ifndef TILE_H
#define TILE_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Tile : public QObject
{
    Q_OBJECT
public:
    Tile(int size);
    QGraphicsPixmapItem* top = new QGraphicsPixmapItem();
    QGraphicsPixmapItem* side = new QGraphicsPixmapItem();
};

#endif // TILE_H
