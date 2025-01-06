#include "topbar_btn.hpp"


TopBarBtn::TopBarBtn(QWidget *parent) : QAbstractButton(parent)
{
    setup();
}

TopBarBtn::TopBarBtn(const QColor &color, QWidget *parent) : QAbstractButton(parent), _color(color)
{
    setup();
}

void TopBarBtn::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.setBrush(QBrush(_color));
    painter.setPen(QPen(Qt::NoPen));

    if (_mouseOvered) {
        painter.fillRect(rect(), _color);
    } else {
        painter.fillRect(rect(), Qt::transparent);
    }

    e->accept();
}

void TopBarBtn::enterEvent(QEnterEvent *e)
{
    _mouseOvered = true;
    update();
    e->accept();
}

void TopBarBtn::leaveEvent(QEvent *e)
{
    _mouseOvered = false;
    update();
    e->accept();
}

void TopBarBtn::mousePressEvent(QMouseEvent *e)
{
    e->accept();
}

void TopBarBtn::mouseReleaseEvent(QMouseEvent *e)
{
    clickAction();
    e->accept();
}

void TopBarBtn::clickAction()
{

}

void TopBarBtn::setup()
{
    setFixedSize(25, 25);
}
