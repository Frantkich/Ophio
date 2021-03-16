#include "tilesetsplitter.h"

TilesetSplitter::TilesetSplitter(QString path, QString json_file, int tile_size)
{
    this->json_map = new QFile(json_file);
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

void TilesetSplitter::get(QString name)
{
    this->json_map->open(QIODevice::ReadOnly | QIODevice::Text);
    QString file = this->json_map->readAll();
    this->json_map->close();

    QJsonDocument json_doc = QJsonDocument::fromJson(file.toUtf8());
    QJsonObject json_object = json_doc.object();

    QJsonObject knight = json_object["knight"].toObject();
    qDebug() << knight["width"];
}
