#pragma once

#include "album_ctrl_btn.hpp"

class AlbumAddBtn : public AlbumControlBtn
{
Q_OBJECT

public:
    explicit AlbumAddBtn(QWidget *parent = nullptr);

private:
    void _Setup();
};
