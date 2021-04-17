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
    fightmap_=new FightMap(4, 2, tileSplit);
    foreach (auto item, fightmap_->getFightMap()) {
        scene_->addItem(item);
    }
    show();
}
