#include "tilesetsplitter.h"

TilesetSplitter::TilesetSplitter(QString tileset_path, QString json_map_path)
{
    this->tileset_ = new QPixmap(tileset_path);
    QFile* file = new QFile(json_map_path);

    file->open(QIODevice::ReadOnly | QIODevice::Text);
    QString file_content = file->readAll();
    this->json_map_ = QJsonDocument::fromJson(file_content.toUtf8());

    file->close();
}

QPixmap TilesetSplitter::get(QString name)
{
    QJsonObject json_object = this->json_map_.object();
    QStringList list = name.split("/");
    int tile_size = json_object.value("tile_size").toInt();

    QJsonObject category = json_object.value( list[0] ).toObject();
    QJsonObject obj = category.value( list[1] ).toObject();

    //If the tileName is misled, return the default bloc as pixmap.
    if ( obj.value("width").toInt() != 0 ){
        QRect tile_shape( obj.value("pos_x").toInt(), obj.value("pos_y").toInt(), obj.value("width").toInt() * tile_size, obj.value("height").toInt() * tile_size);
        //qDebug() << obj.value("width").toInt();
        return this->tileset_->copy(tile_shape);
    }
    else {
        return QPixmap(":image/bloc.png");
    }
}
