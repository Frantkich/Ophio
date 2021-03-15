#include "entity.h"


Entity::Entity(int maxHp, int movingRange, QString name)
{
    maxHealth = maxHp;
    health = maxHealth;
    this->movingRange = movingRange;
    this->name = name;
}

void Entity::decreaseHp(unsigned damage)
{
    health = health - damage;
}

int Entity::getHealth()
{
     return health;
}

int Entity::getMaxHealth()
{
     return maxHealth;
}

void Entity::move()
{
    /*
     * Faire en sorte que le déplacement soit max x +/- movingRange et y +/- movingRange en testant si un bord de la carte est touché
     * Highlight cases ou déplacement possible
    */
}
