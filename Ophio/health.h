#ifndef HEALTH_H
#define HEALTH_H

//#include <QGraphicsTextItem>


//class Health : public QGraphicsTextItem
class Health
{
public:
    Health(int maxHp);
    void decrease(unsigned damage);
    int getHealth();
    int getMaxHealth();

private :
    int health;
    int maxHealth;
};

#endif // HEALTH_H

