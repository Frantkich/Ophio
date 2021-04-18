#include "gameloop.h"

GameLoop::GameLoop(Player *player, TilesetSplitter* tileSplit)
{
    setScene(this->scene_);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setSceneRect(0, 0, 500, 500);

//    FightMap init
    fightmap_=new FightMap(6, 4, tileSplit);

    fightmap_->setEntities({qMakePair(player, QPoint(1,0)),
                            qMakePair(new Mob("Gobelin", 50, 2, 15, 1, 0, tileSplit->getSprites("monsters/big/brown")), QPoint(3,1)),
                            qMakePair(new Mob("Demon", 100, 2, 15, 1, 0, tileSplit->getSprites("monsters/medium/redd")), QPoint(5,2))
                           });

//    Show FightMap
    foreach (auto item, fightmap_->getFightMap()) {
        scene_->addItem(item);
    }
    show();
}

