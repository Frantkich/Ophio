#include "entity.h"

Entity::Entity(QString name, int maxHp, QPixmap sprite) :
    name_(name),
    maxHp_(maxHp)
{
    sprite_->setPixmap(sprite);
    hp_ = maxHp;
}


int Entity::getHp() const {
    return hp_;
}

void Entity::setHp(int hp) {
    hp_ = hp;
}

QString Entity::getName() const
{
    return name_;
}

void Entity::setName(const QString &name)
{
    name_ = name;
}

void Entity::setSprite(QPixmap sprite)
{
    sprite_->setPixmap(sprite);
}

int Entity::getMaxHp() const {
    return maxHp_;
}

void Entity::setMaxHp(int maxHp) {
    maxHp_ = maxHp;
}
