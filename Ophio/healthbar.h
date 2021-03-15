#ifndef HEALTHBAR_H
#define HEALTHBAR_H

#include <QWidget>
#include <QProgressBar>
#include "ophio.h"

class HealthBar : public QProgressBar
{
    Q_OBJECT
public:
    HealthBar(Health *hp);
};

#endif // HEALTHBAR_H
