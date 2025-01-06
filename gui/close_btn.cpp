#include "close_btn.hpp"


CloseBtn::CloseBtn(QWidget *parent) : TopBarBtn(QColor(255, 0, 0), parent)
{
    setup();
}

void CloseBtn::clickAction()
{
    qApp->exit();
}

void CloseBtn::setup()
{

}
