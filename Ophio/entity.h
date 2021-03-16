#ifndef ENTITY_H
#define ENTITY_H

#include <QString>

class Entity
{
public:
    Entity(int maxHp, int movingRange, QString name);

public:
    void decreaseHp(unsigned damage);
    int getHealth();
    int getMaxHealth();
    void move();

private :
    int health;
    int maxHealth;
    int movingRange;
    QString name;
};

#endif // ENTITY_H
