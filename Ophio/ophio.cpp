#include "ophio.h"
#include <QProgressBar>
#include <QGraphicsScene>



Ophio::Ophio(int maxHp)
{
    maxHealth = maxHp;
    health = maxHealth;
}

void Ophio::decreaseHp(unsigned damage)
{
    health = health - damage;
}

int Ophio::getHealth()
{
    return health;
}

int Ophio::getMaxHealth()
{
    return maxHealth;
}

void Ophio::showHp(QGraphicsScene *scene)
{
    /* ProgressBar pour la barre de pv */
    QProgressBar *hpBar = new QProgressBar();
    hpBar->setRange(0, this->getMaxHealth());
    hpBar->setValue(this->getHealth());
    hpBar->setFixedSize(140,25);
    hpBar->setTextVisible(false);
    if (this->getHealth() < (this->getMaxHealth()/5)) { hpBar->setStyleSheet("QProgressBar::chunk{background-color:red}"); }
    else if (this->getHealth() < (this->getMaxHealth()/2)) { hpBar->setStyleSheet("QProgressBar::chunk{background-color:orange}"); }
    else { hpBar->setStyleSheet("QProgressBar::chunk{background-color:green}"); }
    hpBar->move(350, 10);
    scene->addWidget(hpBar);
}
