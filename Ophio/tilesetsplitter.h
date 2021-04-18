#ifndef TILESETSPLITTER_H
#define TILESETSPLITTER_H

#include <QPixmap>
#include <QFile>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>

//This class is used for splitting a tileset, and retrieve a sprite according to it name and a ceratin jsonMap.
//The idea was to have the most modular system of sprite managing, in order to easely manage different tileset.
//This explains why we developed JsonMap system, which can be compare as a tileset structure direct access.

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
