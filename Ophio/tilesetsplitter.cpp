#include "tilesetsplitter.h"

TilesetSplitter::TilesetSplitter(QString tileset_path, QString json_map_path)
{
    this->tileset = new QPixmap(tileset_path);

    QFile* file = new QFile(json_map_path);
    file->open(QIODevice::ReadOnly | QIODevice::Text);
    QString file_content = file->readAll();
    this->json_map = QJsonDocument::fromJson(file_content.toUtf8());
    file->close();
}

QPixmap* TilesetSplitter::getTileset()
{
    return this->tileset;
}

QJsonDocument TilesetSplitter::getJsonMap()
{
    return this->json_map;
}

QPixmap TilesetSplitter::get(QString category_name, QString name)
{
    QJsonObject json_object = this->json_map.object();

    int tile_size = json_object.value("tile_size").toInt();
    QJsonObject category = json_object.value(category_name).toObject();
    QJsonObject obj = category.value(name).toObject();

    QRect tile_shape( obj.value("pos_x").toInt(), obj.value("pos_y").toInt(), obj.value("width").toInt() * tile_size, obj.value("height").toInt() * tile_size);
    qDebug() << obj.value("pos_x").toInt();
    return getTileset()->copy(tile_shape);
}
