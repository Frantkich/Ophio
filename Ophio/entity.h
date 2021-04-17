#ifndef ENTITY_H
#define ENTITY_H

#include <QString>
#include <QObject>
#include <QPixmap>

class Entity : public QObject
{
    Q_OBJECT

protected:
    Entity(QString name, int maxHp, QPixmap sprite=QPixmap(":image/bloc.png"));

public :
    void spawn();
    void move();

public:
    QPixmap getSprite() const;
    void setSprite(const QPixmap &sprite);

    int getMaxHp() const;
    void setMaxHp(int maxHp);

    int getHp() const;
    void setHp(int hp);

private :
    QString name_;
    QPixmap sprite_;
    int maxHp_;
    int hp_;
};

#endif // ENTITY_H
