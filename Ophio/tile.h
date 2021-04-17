#ifndef TILE_H
#define TILE_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QMouseEvent>
#include <QWidget>

#include <entity.h>
#include <tilesetsplitter.h>

class Tile : public QWidget
{
    Q_OBJECT
public:
    Tile(int size, TilesetSplitter *tileSplit);

public:
    QGraphicsPixmapItem* top_ = new QGraphicsPixmapItem();

public:
    Entity *entity;
    Entity *getEntity() const;
    void setEntity(Entity *value);
};

#endif // TILE_H
