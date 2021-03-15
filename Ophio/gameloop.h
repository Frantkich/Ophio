#ifndef GAMELOOP_H
#define GAMELOOP_H
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "tile.h"
#include "ophio.h"
#include "entity.h"
#include "fightmap.h"

class GameLoop : public QGraphicsView
{
public:
    GameLoop(QWidget * parent=0);

    QGraphicsScene* scene = new QGraphicsScene();
};

#endif // GAMELOOP_H
