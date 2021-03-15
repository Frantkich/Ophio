#ifndef TILESETSPLITTER_H
#define TILESETSPLITTER_H

#include <QPixmap>
#include <QString>
#include <QVector>

class TilesetSplitter
{
public:
    TilesetSplitter(QString path, int tile_size);

    QVector< QVector<QPixmap> > tiles_list;
};

#endif // TILESETSPLITTER_H
