#ifndef MOB_H
#define MOB_H

#include "entity.h"

class Mob : public Entity
{
    Q_OBJECT
public:
    Mob(QString name, int maxHp, int movingRange, int damage, int attackRange, bool isPlayer=0, QPixmap sprite=QPixmap(":image/bloc.png"));

public:
    int movingRange() const;
    void setMovingRange(int movingRange);

    int damage() const;
    void setDamage(int damage);


    int attackRange() const;
    void setAttackRange(int attackRange);

    bool isPlayer() const;
    void setIsPlayer(bool isPlayer);

private:
    int movingRange_;
    int damage_;
    int attackRange_;
    bool isPlayer_;
};

#endif // MOB_H
