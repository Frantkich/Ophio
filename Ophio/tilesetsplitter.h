#ifndef TILESETSPLITTER_H
#define TILESETSPLITTER_H

#include <QPixmap>
#include <QString>
#include <QFile>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>

class TilesetSplitter
{
public:
    TilesetSplitter(QString tileset_path, QString json_map_path);

public:
    QPixmap get(QString category_name, QString name);

private:
    QPixmap* tileset_;
    QJsonDocument json_map_;
};

#endif // TILESETSPLITTER_H
