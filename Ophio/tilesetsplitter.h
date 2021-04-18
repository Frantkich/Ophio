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

    int getTileSize() const;
    void setTileSize(int tileSize);

private:
    int tileSize_;
    QPixmap* tileset_;
    QJsonObject json_object_;
};

#endif // TILESETSPLITTER_H
