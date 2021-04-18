#ifndef TILESETSPLITTER_H
#define TILESETSPLITTER_H

#include <QPixmap>
#include <QFile>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>

class TilesetSplitter
{
public:
    TilesetSplitter(QString tileset_path, QString json_map_path);

public:
    QPixmap get(QString name);

public:
    QPixmap* tileset_;
    QJsonDocument json_map_;
};

#endif // TILESETSPLITTER_H
