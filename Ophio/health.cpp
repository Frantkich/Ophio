#include "health.h"

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
