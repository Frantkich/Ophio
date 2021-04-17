#ifndef ENTITY_H
#define ENTITY_H

#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>

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
