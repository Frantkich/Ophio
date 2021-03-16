#include "ophio.h"
#include "entity.h"
#include <QProgressBar>
#include <QGraphicsScene>

Ophio::Ophio()
    : Entity(100, 0, "Ophio")
{
}

void Ophio::showHp(QGraphicsScene *scene)
{
    /* ProgressBar pour la barre de pv */
    QProgressBar *hpBar = new QProgressBar();
    hpBar->setRange(0, this->getMaxHealth());
    hpBar->setValue(this->getHealth());
    hpBar->setFixedSize(140,25);
    hpBar->setTextVisible(false);
    if (this->getHealth() < (this->getMaxHealth()/5)) { hpBar->setStyleSheet("QProgressBar::chunk{background-color:red}"); }
    else if (this->getHealth() < (this->getMaxHealth()/2)) { hpBar->setStyleSheet("QProgressBar::chunk{background-color:orange}"); }
    else { hpBar->setStyleSheet("QProgressBar::chunk{background-color:green}"); }
    hpBar->move((scene->width()-100), 10);
    scene->addWidget(hpBar);
}
