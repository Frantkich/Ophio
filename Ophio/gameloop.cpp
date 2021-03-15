#include "gameloop.h"

GameLoop::GameLoop(QWidget *parent)
{
    setScene(this->scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setSceneRect(0, 0, 500, 500);

    FightMap *fightmap = new FightMap(this->scene, 4, 2);
    fightmap->tile_px=16;
    fightmap->addScene();

    // HUD

    // Start Button
    startButton->setStyleSheet("color: black; background-color: green;");
    startButton->setText("Start");
    startButton->setFixedSize(80,80);
    startButton->move((scene->width()-67), (scene->height()-80));
    scene->addWidget(startButton);

    // Action Button
    actionButton->setStyleSheet("color: black; background-color: white;");
    actionButton->setText("actionButton");
    actionButton->setFixedSize(300,40);
    actionButton->move(5, (scene->height()-80));
    scene->addWidget(actionButton);

    // Move Button
    moveButton->setStyleSheet("color: black; background-color: white;");
    moveButton->setText("moveButton");
    moveButton->setFixedSize(300,40);
    moveButton->move(5, (scene->height()-40));
    scene->addWidget(moveButton);

    /* Vie et Barre de vie */
    Ophio *ophio = new Ophio();
    /* Test pour couleurs HpBar */
    ophio->decreaseHp(0);
    /* Showing Hp bar on scene */
//    ophio->showHp(scene);



    show();
}
