#include "hud.h"

Hud::Hud()
{
}

void Hud::showHud(QGridLayout* layout)
{
    // Start Button
    startButton->setStyleSheet("color: black; background-color: green;");
    startButton->setText("Start");
    startButton->setFixedSize(80,40);
    layout->addWidget(startButton, 2, 3, 1, 1, Qt::AlignHCenter);

    // Action Button
    actionButton->setStyleSheet("color: black; background-color: white;");
    actionButton->setText("actionButton");
    actionButton->setFixedSize(300,40);
    layout->addWidget(actionButton, 2, 1);

    // Move Button
    moveButton->setStyleSheet("color: black; background-color: white;");
    moveButton->setText("moveButton");
    moveButton->setFixedSize(300,40);
    layout->addWidget(moveButton, 2, 2);

    // History
    //actionsList->append("1");
    //actionsHistory->addItems(actionsList);
    //layout->addWidget(actionsHistory, 2,1);
}
