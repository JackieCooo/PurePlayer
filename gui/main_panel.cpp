#include "main_panel.hpp"


MainPanel::MainPanel(QWidget *parent) : QWidget(parent)
{
    _Setup();
}

void MainPanel::_Setup()
{
    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->setSpacing(0);
    layout->setContentsMargins(0, 0, 0, 0);

    _sideBar = new SideBar(this);
    layout->addWidget(_sideBar, 1);

    _pageContainer = new PageContainer(this);
    layout->addWidget(_pageContainer, 3);

    setLayout(layout);
}
