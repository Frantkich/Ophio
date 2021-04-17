#include "entity.h"


Entity::Entity(QString name, int maxHp, QPixmap sprite) :
    name_(name),
    maxHp_(maxHp),
    sprite_(sprite)
{
    hp_ = maxHp;
}

int Entity::getHp() const {
    return hp_;
}

void Entity::setHp(int hp) {
    hp_ = hp;
}


int Entity::getMaxHp() const {
    return maxHp_;
}

void Entity::setMaxHp(int maxHp) {
    maxHp_ = maxHp;
}

QPixmap Entity::getSprite() const {
    return sprite_;
}

void Entity::setSprite(const QPixmap &sprite) {
    sprite_ = sprite;
}


void Entity::move() {
    /*
     * Faire en sorte que le déplacement soit max x +/- movingRange et y +/- movingRange en testant si un bord de la carte est touché
     * Highlight cases ou déplacement possible
    */
}
