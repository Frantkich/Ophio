#ifndef GAMELOOP_H
#define GAMELOOP_H
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QPushButton>
#include "tile.h"
#include "ophio.h"
#include "entity.h"
#include "fightmap.h"

class GameLoop : public QGraphicsView
{
public:
    GameLoop(QWidget * parent=0);

    QGraphicsScene* scene = new QGraphicsScene();
    QPushButton* startButton = new QPushButton();
    QPushButton* actionButton = new QPushButton();
    QPushButton* moveButton = new QPushButton();

};

#endif // GAMELOOP_H
