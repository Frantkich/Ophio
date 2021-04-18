#include <QApplication>

#include "gameloop.h"
#include "tilesetsplitter.h"
#include "hud.h"

GameLoop* game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    Create Game Interface
    QWidget* window = new QWidget;
    window->setMinimumSize(700, 700);
    QGridLayout* layout = new QGridLayout(window);
    window->setLayout(layout);

//    Create TilesetSplitter for Graphic management
    TilesetSplitter* tileSplit = new TilesetSplitter(":/image/DungeonTileset.png", ":/json/tilesetMap.json");

//    Create Player & Add HP bar
    Player *player = new Player(tileSplit->get("entities", "elf_m"));
    player->showHp(layout);

//    Create Game Scene
    game = new GameLoop(player, tileSplit);
    game->show();
    layout->addWidget(game, 1, 1, 1, 3);

//    Create Buttons
    Hud* hud = new Hud();
    hud->showHud(layout);

    window->show();
    return a.exec();
}
