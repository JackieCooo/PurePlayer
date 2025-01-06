#include "side_bar.hpp"


SideBar::SideBar(QWidget *parent) : QWidget(parent)
{
    _Setup();
}

void SideBar::_Setup()
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setContentsMargins(5, 5, 5, 5);

    _albumControlPanel = new AlbumControlPanel(this);
    layout->addWidget(_albumControlPanel);

    _albumList = new AlbumList(this);
    layout->addWidget(_albumList);

    setLayout(layout);
}
