#ifndef TILESETSPLITTER_H
#define TILESETSPLITTER_H

#include <QPixmap>
#include <QString>
#include <QVector>

class TilesetSplitter
{
public:
    TilesetSplitter(QString path);

    QPixmap* tileset;

    QVector< QVector<QPixmap> > split(int tile_size, int x_min= 0, int y_min = 0, int x_max = 0, int y_max = 0);
};

#endif // TILESETSPLITTER_H
