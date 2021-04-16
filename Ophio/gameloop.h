#ifndef GAMELOOP_H
#define GAMELOOP_H
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QGridLayout>
#include <QLayoutItem>
#include "tile.h"
#include "ophio.h"
#include "entity.h"
#include "fightmap.h"
#include "hud.h"
#include "tilesetsplitter.h"

class GameLoop : public QGraphicsView
{
public:
    GameLoop(QWidget* parent = nullptr);

public:
    QGraphicsScene* scene = new QGraphicsScene();

};

#endif // GAMELOOP_H
