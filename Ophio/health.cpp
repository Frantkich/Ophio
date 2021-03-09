#include "health.h"

//#include <QGraphicsTextItem>
//#include <QFont>

Health::Health(int maxHp)
{
    maxHealth = maxHp;
    health = maxHealth;

    //setPlainText(QString::number(health));
    //setDefaultTextColor(Qt::black);
    //setFont(QFont("times", 16));
}

void Health::decrease(unsigned damage)
{
    health = health - damage;
    //setPlainText(QString::number(health));
}

int Health::getHealth()
{
    return health;
}

int Health::getMaxHealth()
{
    return maxHealth;
}
