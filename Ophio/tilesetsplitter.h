#ifndef TILESETSPLITTER_H
#define TILESETSPLITTER_H

#include <QPixmap>
#include <QString>
#include <QVector>
#include <QFile>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>

class TilesetSplitter
{
public:
    TilesetSplitter(QString path, QString json_map, int tile_size);

    QVector< QVector<QPixmap> > tiles_list;

    QFile* json_map;

    void get(QString name);
};

#endif // TILESETSPLITTER_H
