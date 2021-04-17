#ifndef PLAYER_H
#define PLAYER_H

#include <QGridLayout>
#include "mob.h"

class Player : public Mob
{
public:
    Player();

public:
    void showHp(QGridLayout *scene);
};

#endif // PLAYER_H

