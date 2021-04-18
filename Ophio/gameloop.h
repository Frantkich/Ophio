#ifndef GAMELOOP_H
#define GAMELOOP_H

#include <QGraphicsView>
#include <QWidget>

#include "player.h"
#include "fightmap.h"

class GameLoop : public QGraphicsView
{
public:
    GameLoop(Player *player, TilesetSplitter* tileSplit);

private:
    FightMap *fightmap_;
    QGraphicsScene* scene_ = new QGraphicsScene();
};

#endif // GAMELOOP_H
