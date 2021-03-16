#include "tilesetsplitter.h"

TilesetSplitter::TilesetSplitter(QString path, QString json_file, int tile_size)
{
    QFile* file = new QFile(json_file);
    file->open(QIODevice::ReadOnly | QIODevice::Text);
    QString file_content = file->readAll();
    this->json_map = QJsonDocument::fromJson(file_content.toUtf8());
    file->close();

    QPixmap* tileset = new QPixmap(path);

    for (int y = 0; y < tileset->height(); y+= tile_size)
    {
        QVector<QPixmap> new_row;
        for (int x = 0;  x < tileset->width(); x+= tile_size)
        {
            QRect rect(x, y, tile_size, tile_size);
            new_row.push_back( tileset->copy(rect) );
        }

        this->tiles_list.push_back(new_row);
    }

}

void TilesetSplitter::get(QString category_name, QString name)
{
    QJsonObject json_object = this->json_map.object();
    QJsonObject category = json_object.value(category_name).toObject();
    QJsonObject obj = category.value(name).toObject();

    //QVector<QPixmap> tile_row;
    //for (int size_t = 0; size_t < obj.value("nb_sprite"); size_t++){
        QRectF tile = QRectF(0, 0, 16 * obj.value("width").toInt(), 16 * obj.value("height").toInt());

        for (int y = obj.value("y").toInt(); y < obj.value("y").toInt() + obj.value("height").toInt(); y++){
            QPainter* painter = new QPainter();
            for (int x = obj.value("x").toInt(); x < obj.value("x").toInt() + obj.value("width").toInt(); x++){
                QRectF source(x * 16, y * 16, 16, 16);
                painter->drawPixmap(tile, this->tiles_list[x][y], source);
            }
        }
    //}
}
