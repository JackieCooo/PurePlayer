#pragma once

#include <QWidget>
#include <QVBoxLayout>

#include "album_ctrl_panel.hpp"
#include "album_list.hpp"


class SideBar : public QWidget
{
Q_OBJECT

public:
    explicit SideBar(QWidget *parent = nullptr);

private:
    AlbumControlPanel *_albumControlPanel = nullptr;
    AlbumList *_albumList = nullptr;

    void _Setup();
};
