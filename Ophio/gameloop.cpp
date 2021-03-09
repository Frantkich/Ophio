#include "gameloop.h"
#include "tile.h"
#include "health.h"
#include "healthbar.h"
#include <QtGui>
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

    /* ProgressBar pour la barre de pv */
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

    show();
}
