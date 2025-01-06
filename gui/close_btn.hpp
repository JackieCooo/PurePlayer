#pragma once

#include "topbar_btn.hpp"

#include <QColor>
#include <QApplication>


class CloseBtn : public TopBarBtn
{
Q_OBJECT

public:
    explicit CloseBtn(QWidget *parent = nullptr);

protected:
    void clickAction() override;

private:
    void setup();
};
