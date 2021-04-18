#include "tilesetsplitter.h"

TilesetSplitter::TilesetSplitter(QString tilesetPath, QString jsonMapPath)
{
    tileset_ = new QPixmap(tilesetPath);
    QFile* file = new QFile(jsonMapPath);

    file->open(QIODevice::ReadOnly | QIODevice::Text);
    json_object_ = QJsonDocument::fromJson(QString(file->readAll()).toUtf8()).object();
    file->close();
    tileSize_ = json_object_.value("tileSize").toInt();
}

QPixmap TilesetSplitter::getSprites(QString path)
{
    QJsonObject obj = json_object_;
    foreach (QString key, path.split("/")) {
        obj = obj.value( key ).toObject();
    }

    if ( obj.value("width").toInt() ) {
        return tileset_->copy( QRect(obj.value("pos_x").toInt() * tileSize_,
                                     obj.value("pos_y").toInt() * tileSize_,
                                     obj.value("width").toInt() * tileSize_,
                                     obj.value("height").toInt() * tileSize_));
    }
    else {
        qDebug() << "WARMING:" << "sprite ->" << path << "does not exist";
        return QPixmap(":image/not_found.png");
    }
}

int TilesetSplitter::getTileSize() const
{
    return tileSize_;
}

void TilesetSplitter::setTileSize(int tileSize)
{
    tileSize_ = tileSize;
}
