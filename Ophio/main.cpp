#include <QApplication>

#include "gameloop.h"

GameLoop* game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    game = new GameLoop();
    game->show();

    return a.exec();
}
