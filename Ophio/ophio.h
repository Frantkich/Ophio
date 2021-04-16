#ifndef OPHIO_H
#define OPHIO_H

#include <QGridLayout>
#include "entity.h"

class Ophio : public Entity
{
public:
    Ophio(int maxHp, int movingRange, QString name, QPixmap skin);

public:
    void showHp(QGridLayout *scene);
};

#endif // OPHIO_H

