#include "album_ctrl_panel.hpp"


AlbumControlPanel::AlbumControlPanel(QWidget *parent) : QWidget(parent)
{
    _Setup();
}

void AlbumControlPanel::_Setup()
{
    setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    setFixedHeight(30);

    QHBoxLayout *layout = new QHBoxLayout(this);

    setLayout(layout);
}
