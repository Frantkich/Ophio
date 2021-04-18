#include "tilesetsplitter.h"

TilesetSplitter::TilesetSplitter(QString tilesetPath, QString jsonMapPath)
{
    tileset_ = new QPixmap(tilesetPath);
    QFile* file = new QFile(jsonMapPath);

    file->open(QIODevice::ReadOnly | QIODevice::Text);
    json_object_ = QJsonDocument::fromJson(QString(file->readAll()).toUtf8()).object();
    file->close();
}

QPixmap TilesetSplitter::getSprites(QString path)
{
    QStringList list = path.split("/");
    int tile_size = json_object_.value("tile_size").toInt();

    QJsonObject category = json_object_.value( list[0] ).toObject();
    QJsonObject obj = category.value( list[1] ).toObject();

    if ( not(obj.empty()) ) {
        return tileset_->copy( QRect(obj.value("pos_x").toInt() * tile_size,
                                     obj.value("pos_y").toInt() * tile_size,
                                     obj.value("width").toInt() * tile_size,
                                     obj.value("height").toInt() * tile_size));
    }
    else {
        qDebug() << "WARMING:" << "sprite ->" << path << "does not exist";
        return QPixmap(":image/bloc.png");
    }
}
