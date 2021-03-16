#ifndef HUD_H
#define HUD_H
#include <QPushButton>
#include <QGraphicsScene>

class Hud
{
public:
    Hud();
    QPushButton* startButton = new QPushButton();
    QPushButton* actionButton = new QPushButton();
    QPushButton* moveButton = new QPushButton();
    void showHud(QGraphicsScene* scene);
};

#endif // HUD_H
