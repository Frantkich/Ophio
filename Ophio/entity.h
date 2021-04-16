#ifndef ENTITY_H
#define ENTITY_H

#include <QString>
#include <QObject>
#include <QPixmap>

class Entity : public QObject
{
    Q_OBJECT

public:
    Entity(int maxHp, int movingRange, QString name, QPixmap skin);

public:
    void decreaseHp(unsigned damage);
    int getHealth();
    int getMaxHealth();
    //void move();

private :
    int health;
    int maxHealth;
    int movingRange;
    QString name;
    QPixmap skin;

public slots :
    void move();
};

#endif // ENTITY_H
