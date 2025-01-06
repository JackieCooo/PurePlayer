#pragma once

#include "topbar_btn.hpp"


class MinimizeBtn : public TopBarBtn
{
Q_OBJECT

public:
    explicit MinimizeBtn(QWidget *parent = nullptr);

private:
    void setup();
};
