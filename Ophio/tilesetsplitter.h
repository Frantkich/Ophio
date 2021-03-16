#ifndef TILESETSPLITTER_H
#define TILESETSPLITTER_H

#include <QPixmap>
#include <QString>
#include <QVector>
#include <QFile>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QPainter>

class TilesetSplitter
{
public:
    TilesetSplitter(QString path, QString json_map, int tile_size);

public:
    void get(QString name);

public:
    QVector< QVector<QPixmap> > tiles_list;

    QJsonDocument json_map;

    void get(QString category_name, QString name);
};

#endif // TILESETSPLITTER_H
