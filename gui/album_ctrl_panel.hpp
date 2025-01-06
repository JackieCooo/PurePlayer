#pragma once

#include <QWidget>
#include <QHBoxLayout>
#include <QSizePolicy>


class AlbumControlPanel : public QWidget
{
Q_OBJECT

public:
    explicit AlbumControlPanel(QWidget *parent = nullptr);

private:
    void _Setup();
};
