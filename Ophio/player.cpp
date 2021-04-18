#include "player.h"

Player::Player(QPixmap sprite) :
    Mob("Ophio", 100, 3, 25, 2, 1, sprite)
{
}

void Player::showHp(QGridLayout *layout)
{
    /* ProgressBar pour la barre de pv */
    QProgressBar *hpBar = new QProgressBar();
    hpBar->setRange(0, getMaxHp());
    hpBar->setValue(getHp());
    hpBar->setFixedSize(140,30);
    hpBar->setTextVisible(false);
    if (this->getHp() < (this->getMaxHp()/5)) { hpBar->setStyleSheet("QProgressBar::chunk{background-color:red}"); }
    else if (this->getHp() < (this->getMaxHp()/2)) { hpBar->setStyleSheet("QProgressBar::chunk{background-color:orange}"); }
    else { hpBar->setStyleSheet("QProgressBar::chunk{background-color:green}"); }
    layout->addWidget(hpBar, 0, 2, 1, 1, Qt::AlignHCenter);
}
