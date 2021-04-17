#include "gameloop.h"
#include <tilesetsplitter.h>

GameLoop::GameLoop(Player *player, QWidget *parent)
{
    TilesetSplitter* tileSplit = new TilesetSplitter(":/image/DungeonTileset.png", ":/json/tilesetMap.json");

    setScene(this->scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setSceneRect(0, 0, 500, 500);

    fightmap_=new FightMap(this->scene, 4, 2, tileSplit);
    fightmap_->tile_px=16;
    fightmap_->addScene();
    show();
}
