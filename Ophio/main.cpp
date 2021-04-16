#include <QApplication>

#include "gameloop.h"

GameLoop* game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget* window = new QWidget;
    window->setMinimumSize(700, 700);
    QGridLayout* layout = new QGridLayout(window);

    game = new GameLoop();
    game->show();

    Hud* hud = new Hud();
    hud->showHud(layout);

    /* Initialisation du tilesetSplitter */
    TilesetSplitter* t = new TilesetSplitter(":/image/DungeonTileset.png", ":/json/tilesetMap.json");

    /* Vie et Barre de vie */
    Ophio *ophio = new Ophio(100, 0, "Ophio", t->get("big_monsters", "big_green"));
    /* Test pour couleurs HpBar */
    ophio->decreaseHp(0);
    /* Showing Hp bar on scene */
    ophio->showHp(layout);

    layout->addWidget(game, 1, 1, 1, 3);
    window->setLayout(layout);
    window->show();

    return a.exec();
}
