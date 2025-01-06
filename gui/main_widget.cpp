#include "main_widget.hpp"


MainWidget::MainWidget(QWidget *parent) : QWidget(parent)
{
    setup();
}

void MainWidget::setup()
{
    setFixedSize(800, 600);
    setWindowFlags(Qt::FramelessWindowHint);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);

    topBar = new TopBar(this);
    layout->addWidget(topBar);

    mainPanel = new MainPanel(this);
    layout->addWidget(mainPanel);

    setLayout(layout);
}
