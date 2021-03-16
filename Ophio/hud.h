#ifndef HUD_H
#define HUD_H
#include <QPushButton>
#include <QGridLayout>

class Hud
{
public:
    Hud();

public:
    QPushButton* startButton = new QPushButton();
    QPushButton* actionButton = new QPushButton();
    QPushButton* moveButton = new QPushButton();
    void showHud(QGridLayout* scene);
};

#endif // HUD_H
