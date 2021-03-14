#include "tilesetsplitter.h"

TilesetSplitter::TilesetSplitter(QString path)
{

    this->tileset = new QPixmap(path);
}

QVector< QVector<QPixmap> > TilesetSplitter::split (int tile_size, int x_min, int y_min, int x_max, int y_max){

    QVector< QVector<QPixmap> > tiles_list;

    if ( x_max == 0){ x_max = this->tileset->width(); }
    if ( y_max == 0){ y_max = this->tileset->height(); }

    for (int y = y_min ; y < y_max ; y+= tile_size)
    {

        QVector<QPixmap> new_row;

        for (int x = x_min ; x < x_max ; x+= tile_size)
        {
            QRect rect(x, y, tile_size, tile_size);
            new_row.push_back( this->tileset->copy(rect) );
        }

        tiles_list.push_back(new_row);
    }

    return tiles_list;
}
