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

    /* Vie et Barre de vie */
    Ophio *ophio = new Ophio();
    /* Test pour couleurs HpBar */
    ophio->decreaseHp(0);
    /* Showing Hp bar on scene */
    ophio->showHp(layout);

    layout->addWidget(game, 1, 0, 1, 3, Qt::AlignHCenter);
    window->setLayout(layout);
    window->show();

    return a.exec();
}
