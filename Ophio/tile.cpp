#include "tile.h"

Tile::Tile()
{
    setPixmap(QPixmap(":image/bloc.png"));

    QTransform txf = QTransform();

    txf.scale(4, 2);
    setTransform(txf,false);

    txf.translate(boundingRect().width()/2, 0);
    txf.rotate(45, Qt::ZAxis);
    txf.translate(-boundingRect().width()/2, 0);

    setTransform(txf,false);
}
