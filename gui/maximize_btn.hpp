#pragma once

#include "topbar_btn.hpp"


class MaximizeBtn : public TopBarBtn
{
Q_OBJECT

public:
    explicit MaximizeBtn(QWidget *parent = nullptr);

private:
    void setup();
};
