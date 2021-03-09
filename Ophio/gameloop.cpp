#include "gameloop.h"
#include "tile.h"
#include "health.h"
#include "healthbar.h"

#include <QtGui>

GameLoop::GameLoop(QWidget *parent)
{
    scene = new QGraphicsScene();

    scene->setSceneRect(0, 0, 500, 500);

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(500,500);

    Tile *tile = new Tile();
    scene->addItem(tile);

    /* Vie et Barre de vie */

    Health *health = new Health(100);
    health->decrease(49);

    QProgressBar *hpBar = new QProgressBar();
    hpBar->setRange(0, health->getMaxHealth());
    hpBar->setValue(health->getHealth());
    hpBar->setFixedSize(140,25);
    hpBar->setTextVisible(false);
    if (health->getHealth() < (health->getMaxHealth()/5)) {
        hpBar->setStyleSheet("QProgressBar::chunk{background-color:red}");
    }
    else if (health->getHealth() < (health->getMaxHealth()/2)) {
        hpBar->setStyleSheet("QProgressBar::chunk{background-color:orange}");
    }
    else {
        hpBar->setStyleSheet("QProgressBar::chunk{background-color:green}");
    }
    hpBar->move(350, 10);
    scene->addWidget(hpBar);

    //health->setPos(health->x()+425, health->y()+25);
    //scene->addItem(health);

    show();
}
