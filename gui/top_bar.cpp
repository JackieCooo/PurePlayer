#include "top_bar.hpp"


TopBar::TopBar(QWidget *parent) : QWidget(parent)
{
    setup();
}

void TopBar::setup()
{
    setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);
    layout->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

    minimodeBtn = new MinimodeBtn(this);
    layout->addWidget(minimodeBtn);

    minimizeBtn = new MinimizeBtn(this);
    layout->addWidget(minimizeBtn);

    maximizeBtn = new MaximizeBtn(this);
    layout->addWidget(maximizeBtn);

    closeBtn = new CloseBtn(this);
    layout->addWidget(closeBtn);

    setLayout(layout);
}
