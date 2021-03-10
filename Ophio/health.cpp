#include "health.h"
#include <QProgressBar>
#include <QGraphicsScene>



Health::Health(int maxHp)
{
    maxHealth = maxHp;
    health = maxHealth;
}

void Health::decrease(unsigned damage)
{
    health = health - damage;
}

int Health::getHealth()
{
    return health;
}

int Health::getMaxHealth()
{
    return maxHealth;
}

void Health::showHp(Health* health, QGraphicsScene *scene)
{
    /* ProgressBar pour la barre de pv */
    QProgressBar *hpBar = new QProgressBar();
    hpBar->setRange(0, health->getMaxHealth());
    hpBar->setValue(health->getHealth());
    hpBar->setFixedSize(140,25);
    hpBar->setTextVisible(false);
    if (health->getHealth() < (health->getMaxHealth()/5)) {
        hpBar->setStyleSheet("QProgressBar::chunk{background-color:red}");
    }
    else if (health->getHealth() < (health->getMaxHealth()/2)) {
        hpBar->setStyleSheet("QProgressBar::chunk{background-color:orange}");
    }
    else {
        hpBar->setStyleSheet("QProgressBar::chunk{background-color:green}");
    }
    hpBar->move(350, 10);
    scene->addWidget(hpBar);
}
