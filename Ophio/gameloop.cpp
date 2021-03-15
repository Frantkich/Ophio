#include "gameloop.h"
#include "tile.h"
#include "ophio.h"
#include "entity.h"
#include "fightmap.h"

GameLoop::GameLoop(QWidget *parent)
{
    setScene(this->scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setSceneRect(0, 0, 500, 500);

    FightMap *fightmap = new FightMap(this->scene, 4, 2);
    fightmap->tile_px=16;
    fightmap->addSceneSide();

    /* Vie et Barre de vie */
    Ophio *ophio = new Ophio();
    /* Test pour couleurs HpBar */
    ophio->decreaseHp(51);
    /* Showing Hp bar on scene */
    ophio->showHp(scene);



    show();
}
