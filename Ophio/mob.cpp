#include "mob.h"

Mob::Mob(QString name, int maxHp, int movingRange, int damage, int attackRange, bool isPlayer, QPixmap sprite):
    Entity(name, maxHp, sprite),
    movingRange_(movingRange),
    damage_(damage),
    attackRange_(attackRange),
    isPlayer_(isPlayer)
{
}

int Mob::movingRange() const
{
    return movingRange_;
}

void Mob::setMovingRange(int movingRange)
{
    movingRange_ = movingRange;
}

int Mob::damage() const
{
    return damage_;
}

void Mob::setDamage(int damage)
{
    damage_ = damage;
}

int Mob::attackRange() const
{
    return attackRange_;
}

void Mob::setAttackRange(int attackRange)
{
    attackRange_ = attackRange;
}

bool Mob::isPlayer() const
{
    return isPlayer_;
}

void Mob::setIsPlayer(bool isPlayer)
{
    isPlayer_ = isPlayer;
}
