#include "hud.h"

Hud::Hud()
{
}

void Hud::showHud(QGridLayout* scene)
{
    // Start Button
    startButton->setStyleSheet("color: black; background-color: green;");
    startButton->setText("Start");
    startButton->setFixedSize(80,40);
    //startButton->move((scene->width()-67), (scene->height()-80));
    scene->addWidget(startButton,2,2, 1, 1, Qt::AlignHCenter);

    // Action Button
    actionButton->setStyleSheet("color: black; background-color: white;");
    actionButton->setText("actionButton");
    actionButton->setFixedSize(300,40);
    //actionButton->move(5, (scene->height()-80));
    scene->addWidget(actionButton,2,0);

    // Move Button
    moveButton->setStyleSheet("color: black; background-color: white;");
    moveButton->setText("moveButton");
    moveButton->setFixedSize(300,40);
    //moveButton->move(5, (scene->height()-40));
    scene->addWidget(moveButton,2,1);
}
