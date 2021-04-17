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
    TilesetSplitter* tileSplit = new TilesetSplitter(":/image/DungeonTileset.png", ":/json/tilesetMap.json");
    QGraphicsScene* scene_ = new QGraphicsScene();

private:
    FightMap *fightmap_;
};

#endif // GAMELOOP_H
