#include "gameloop.h"
#include "fightmap.h"

GameLoop::GameLoop(QWidget *parent)
{

    QGraphicsScene *scene = new QGraphicsScene();

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setSceneRect(0, 0, 500, 500);

    FightMap *fightmap = new FightMap(scene, 3, 4);
    fightmap->addScene();

    show();
}
