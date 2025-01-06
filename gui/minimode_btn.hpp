#pragma once

#include "topbar_btn.hpp"


class MinimodeBtn : public TopBarBtn
{
Q_OBJECT

public:
    explicit MinimodeBtn(QWidget *parent = nullptr);

private:
    void setup();
};
