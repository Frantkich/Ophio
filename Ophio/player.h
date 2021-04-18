#ifndef PLAYER_H
#define PLAYER_H

#include <QGridLayout>

#include "mob.h"
#include <QProgressBar>

//The player class is aime for managing and displaying the player healthbar (including a colour effect).

class Player : public Mob
{
public:
    Player(QPixmap sprite);

public:
    void showHp(QGridLayout *scene);
};

#endif // PLAYER_H

