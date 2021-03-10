#ifndef OPHIO_H
#define OPHIO_H

#include <QGraphicsScene>

class Ophio
{
public:
    Ophio(int maxHp);
    void decreaseHp(unsigned damage);
    int getHealth();
    int getMaxHealth();
    void showHp(QGraphicsScene *scene);

private :
    int health;
    int maxHealth;
};

#endif // OPHIO_H

