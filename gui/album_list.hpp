#pragma once

#include <QListWidget>


class AlbumList : public QListWidget
{
Q_OBJECT

public:
    explicit AlbumList(QWidget *parent = nullptr);

private:
    void setup();

};
