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
    TilesetSplitter(QString tilesetPath, QString jsonMapPath);

public:
    QPixmap getSprites(QString path);

private:
    QPixmap* tileset_;
    QJsonObject json_object_;
};

#endif // TILESETSPLITTER_H
