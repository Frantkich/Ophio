#include "enemy.h"

Enemy::Enemy(bool isMelee, int damage)
    : Entity(100, 0, "enemy")
{
    this->isMelee = isMelee;
    this->damage = damage;
}

void Enemy::attack(int x, int y)
{
    /* Attaque la case ciblée (test si quelqu'un, si oui -> degats) */
}

void Enemy::attackRange()
{
    if (isMelee = 0) {
        /* Highlight les cases ou il peut attaquer */
    }
    else {
        /* Highlight les cases ou il peut attaquer */
    }
}
