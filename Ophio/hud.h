#ifndef HUD_H
#define HUD_H
#include <QPushButton>
#include <QGraphicsScene>

class Hud
{
public:
    Hud();

public:
    void showHud(QGraphicsScene* scene);

public:
    QPushButton* startButton = new QPushButton();
    QPushButton* actionButton = new QPushButton();
    QPushButton* moveButton = new QPushButton();

};

#endif // HUD_H
