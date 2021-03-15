#include "enemy.h"
#include <QRandomGenerator>

Enemy::Enemy(bool isMelee, int damage)
    : Entity(100, 0, "enemy")
{
    this->isMelee = isMelee;
    this->damage = damage;
}

void Enemy::attack(int x, int y)
{
    /* Attaque la case ciblée (test si quelqu'un, si oui -> degats) */
}

void Enemy::attackRange()
{
    if (this->isMelee) {
        /* Highlight les cases ou il peut attaquer */
    }
    else {
        /* Highlight les cases ou il peut attaquer */
    }
}

void Enemy::spawn()
{
    /*
     * afficher enemy aux coordonnées randoms
     * Génération des valeurs randoms dans le max taille
    */
    int x = QRandomGenerator::global()->generate();
    int y = QRandomGenerator::global()->generate();
    /* Test si quelque chose est déjà dans la case */

    /* Si oui rerandom */

    /* Si non afficher sur cette case */
}
