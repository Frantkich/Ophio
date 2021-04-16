#ifndef HUD_H
#define HUD_H
#include <QPushButton>
#include <QGridLayout>
#include <QListWidget>
#include <QStringList>

class Hud
{
public:
    Hud();

public:
    QPushButton* startButton = new QPushButton();
    QPushButton* actionButton = new QPushButton();
    QPushButton* moveButton = new QPushButton();

    QStringList* actionsList = new QStringList();
    QListWidget* actionsHistory = new QListWidget();

    void showHud(QGridLayout* scene);
};

#endif // HUD_H
