#include "hud.h"

Hud::Hud()
{
}

void Hud::showHud(QGraphicsScene* scene)
{
    // HUD

    // Start Button
    startButton->setStyleSheet("color: black; background-color: green;");
    startButton->setText("Start");
    startButton->setFixedSize(80,80);
    startButton->move((scene->width()-67), (scene->height()-80));
    scene->addWidget(startButton);

    // Action Button
    actionButton->setStyleSheet("color: black; background-color: white;");
    actionButton->setText("actionButton");
    actionButton->setFixedSize(300,40);
    actionButton->move(5, (scene->height()-80));
    scene->addWidget(actionButton);

    // Move Button
    moveButton->setStyleSheet("color: black; background-color: white;");
    moveButton->setText("moveButton");
    moveButton->setFixedSize(300,40);
    moveButton->move(5, (scene->height()-40));
    scene->addWidget(moveButton);
}
