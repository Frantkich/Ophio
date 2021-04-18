#ifndef ENTITY_H
#define ENTITY_H

#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>

// Entity defines all placeable objects.
// We used QPixmap class, in order to display items, and easely manage sprites.
// We set the major part of our properties in private with aim of having more control on the code for futur development.
// We also chosed to set it constructor in protected, in order to instanciate it as virtual class.

class Entity : public QObject
{
    Q_OBJECT

protected:
    Entity(QString name, int maxHp, QPixmap sprite=QPixmap(":image/bloc.png"));

public:
    int getMaxHp() const;
    void setMaxHp(int maxHp);

    int getHp() const;
    void setHp(int hp);

    QString getName() const;
    void setName(const QString &name);

    QGraphicsPixmapItem *getSprite() const;
    void setSprite(QPixmap sprite);

private :
    QGraphicsPixmapItem *sprite_= new QGraphicsPixmapItem();
    QString name_;
    int maxHp_;
    int hp_;
};

#endif // ENTITY_H
