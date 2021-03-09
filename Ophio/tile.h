#ifndef TILE_H
#define TILE_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Tile : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Tile(int size);
};

#endif // TILE_H
