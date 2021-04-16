#ifndef ENEMY_H
#define ENEMY_H

#include "entity.h"

class Enemy : public Entity
{
public:
    Enemy(int maxHp, int movingRange, QString name, QPixmap skin, bool isMelee, int damage);

public:
    void attack(int x, int y);
    void attackRange();
    void spawn();

private :
    bool isMelee;
    int damage;
};

#endif // ENEMY_H
