#include "healthbar.h"

HealthBar::HealthBar(Health *health)
{
    this->setRange(0, health->getHealth());
}
