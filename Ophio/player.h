#ifndef PLAYER_H
#define PLAYER_H

#include <QGridLayout>

#include "mob.h"
#include <QProgressBar>

class Player : public Mob
{
public:
    Player(QPixmap sprite);

public:
    void showHp(QGridLayout *scene);
};

#endif // PLAYER_H

