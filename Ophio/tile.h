#ifndef TILE_H
#define TILE_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Tile : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Tile();

public:
    int size = 50;

};

#endif // TILE_H
