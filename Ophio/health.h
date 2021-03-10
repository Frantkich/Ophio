#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsScene>

class Health
{
public:
    Health(int maxHp);
    void decrease(unsigned damage);
    int getHealth();
    int getMaxHealth();
    void showHp(Health* health, QGraphicsScene *scene);

private :
    int health;
    int maxHealth;
};

#endif // HEALTH_H

