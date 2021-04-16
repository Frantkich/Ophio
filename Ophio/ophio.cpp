#include "ophio.h"
#include "entity.h"
#include <QProgressBar>
#include <QGraphicsScene>

Ophio::Ophio(int maxHp, int movingRange, QString name, QPixmap skin)
    : Entity(maxHp, movingRange, name, skin)
{
}

void Ophio::showHp(QGridLayout *layout)
{
    /* ProgressBar pour la barre de pv */
    QProgressBar *hpBar = new QProgressBar();
    hpBar->setRange(0, this->getMaxHealth());
    hpBar->setValue(this->getHealth());
    hpBar->setFixedSize(140,30);
    hpBar->setTextVisible(false);
    if (this->getHealth() < (this->getMaxHealth()/5)) { hpBar->setStyleSheet("QProgressBar::chunk{background-color:red}"); }
    else if (this->getHealth() < (this->getMaxHealth()/2)) { hpBar->setStyleSheet("QProgressBar::chunk{background-color:orange}"); }
    else { hpBar->setStyleSheet("QProgressBar::chunk{background-color:green}"); }
    layout->addWidget(hpBar, 0, 2, 1, 1, Qt::AlignHCenter);
}
