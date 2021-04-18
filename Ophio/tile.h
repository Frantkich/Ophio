#ifndef TILE_H
#define TILE_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QMouseEvent>
#include <QWidget>

#include <entity.h>
#include <tilesetsplitter.h>

//Tile defines each fightMap box, it handles the graphical aspect (with sprite) and entities positioning on the map.
//Tiles sprites aren't the same, so every fightmap will be different.

class Tile : public QWidget
{
    Q_OBJECT
public:
    Tile(TilesetSplitter *tileSplit);

public:
    QGraphicsPixmapItem *getTopSprite() const;
    void setTopSprite(QGraphicsPixmapItem *topSprite);

    Entity *getEntity() const;
    void setEntity(Entity *entity);

private:
    QGraphicsPixmapItem *topSprite_ = new QGraphicsPixmapItem();
    Entity *entity_=nullptr;
};

#endif // TILE_H
