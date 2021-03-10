#include "gameloop.h"
#include "tile.h"
#include "health.h"
#include "healthbar.h"
#include "fightmap.h"


GameLoop::GameLoop(QWidget *parent)
{

    QGraphicsScene *scene = new QGraphicsScene();

    scene->setSceneRect(0, 0, 500, 500);

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setSceneRect(0, 0, 500, 500);

    FightMap *fightmap = new FightMap(scene, 3, 4);
    fightmap->addScene();

    /* Vie et Barre de vie */
    Health *health = new Health(100);
    /* Test pour couleurs HpBar */
    health->decrease(49);
    /* Showing Hp bar on scene */
    health->showHp(health, scene);



    show();
}
