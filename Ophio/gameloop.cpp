#include "gameloop.h"

GameLoop::GameLoop(Player *player, TilesetSplitter* tileSplit, QWidget *parent)
{
    setScene(this->scene_);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setSceneRect(0, 0, 500, 500);

//    FightMap init
    fightmap_=new FightMap(6, 4, tileSplit);

    fightmap_->setEntities({qMakePair(player, QPoint(1,0)),
                            qMakePair(new Mob("Gobelin", 50, 2, 15, 1,0, tileSplit->get("tiny_monsters", "little_green")), QPoint(3,1))});

//    Show FightMap
    foreach (auto item, fightmap_->getFightMap()) {
        scene_->addItem(item);
    }
    show();
}

