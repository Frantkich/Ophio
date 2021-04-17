#include <QApplication>

#include "gameloop.h"

GameLoop* game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget* window = new QWidget;

    window->setMinimumSize(700, 700);
    QGridLayout* layout = new QGridLayout(window);

    /* Vie et Barre de vie */
    Player *player = new Player();
    //    Create Game Scene
    game = new GameLoop(player);
    game->show();

    Hud* hud = new Hud();
    hud->showHud(layout);

    player->showHp(layout);

    layout->addWidget(game, 1, 1, 1, 3);
    window->setLayout(layout);
    window->show();

    return a.exec();
}
