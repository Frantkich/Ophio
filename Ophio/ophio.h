#ifndef OPHIO_H
#define OPHIO_H

#include <QGraphicsScene>
#include "entity.h"

class Ophio : public Entity
{
public:
    Ophio();
    void showHp(QGraphicsScene *scene);
};

#endif // OPHIO_H

