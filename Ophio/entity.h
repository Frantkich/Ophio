#ifndef ENTITY_H
#define ENTITY_H

#include <QString>
#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>

class Entity : public QObject
{
    Q_OBJECT
protected:
    Entity(QString name, int maxHp, QPixmap sprite=QPixmap(":image/bloc.png"));

public :
    QGraphicsPixmapItem *sprite_= new QGraphicsPixmapItem();

public:
    int getMaxHp() const;
    void setMaxHp(int maxHp);

    int getHp() const;
    void setHp(int hp);

    QString getName() const;
    void setName(const QString &name);

    void setSprite(QPixmap sprite);

private :
    QString name_;
    int maxHp_;
    int hp_;
};

#endif // ENTITY_H
