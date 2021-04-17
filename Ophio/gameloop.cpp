#include "gameloop.h"

GameLoop::GameLoop(Player *player, QWidget *parent)
{
    setScene(this->scene_);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setSceneRect(0, 0, 500, 500);

//    Player init
    player->setSprite(tileSplit->get("entities", "knight_m"));

//    FightMap init
    fightmap_=new FightMap(8, 2, tileSplit);

    fightmap_->setEntities({qMakePair(player, QPoint(1,0))});

//    Show FightMap
    foreach (auto item, fightmap_->getFightMap()) {
        scene_->addItem(item);
    }
    show();
}

