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
    Tile(TilesetSplitter *tileSplit);

public:
    QGraphicsPixmapItem *topSprite_ = new QGraphicsPixmapItem();

public:
    Entity *entity_=nullptr;
};

#endif // TILE_H
