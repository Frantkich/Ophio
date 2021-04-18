#ifndef HUD_H
#define HUD_H
#include <QPushButton>
#include <QGridLayout>
#include <QListWidget>

//For the Hud structure we mainly used basic graphical component for a first render.

class Hud
{
public:
    Hud();

public:
    void showHud(QGridLayout* scene);

public:
    QPushButton* startButton = new QPushButton();
    QPushButton* actionButton = new QPushButton();
    QPushButton* moveButton = new QPushButton();

    QStringList* actionsList = new QStringList();
    QListWidget* actionsHistory = new QListWidget();
};

#endif // HUD_H
