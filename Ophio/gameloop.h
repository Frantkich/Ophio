#ifndef GAMELOOP_H
#define GAMELOOP_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QGridLayout>
#include <QLayoutItem>

#include "tile.h"
#include "player.h"
#include "entity.h"
#include "fightmap.h"
#include "hud.h"
#include "tilesetsplitter.h"

class GameLoop : public QGraphicsView
{
public:
    GameLoop(Player *player, QWidget* parent = nullptr);

public:
    QGraphicsScene* scene = new QGraphicsScene();

public:
    TilesetSplitter* t = new TilesetSplitter(":/image/DungeonTileset.png", ":/json/tilesetMap.json");

private:
    FightMap *fightmap_;
};

#endif // GAMELOOP_H
