#include "gameloop.h"
#include "tile.h"

GameLoop::GameLoop(QWidget *parent)
{
    scene = new QGraphicsScene();

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(500,500);

    Tile *tile = new Tile();
    scene->addItem(tile);

    show();
}
