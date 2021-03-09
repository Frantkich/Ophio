#include "gameloop.h"
#include "fightmap.h"

GameLoop::GameLoop(QWidget *parent)
{
    setScene(this->scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setSceneRect(0, 0, 500, 500);

    FightMap *fightmap = new FightMap(this->scene, 4, 2);
    fightmap->tile_px=16;
    fightmap->addScene();

    show();
}
