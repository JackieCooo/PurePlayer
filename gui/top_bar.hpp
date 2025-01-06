#pragma once

#include <QWidget>
#include <QSizePolicy>
#include <QHBoxLayout>

#include "close_btn.hpp"
#include "minimize_btn.hpp"
#include "maximize_btn.hpp"
#include "minimode_btn.hpp"


class TopBar : public QWidget
{
Q_OBJECT

public:
    explicit TopBar(QWidget *parent = nullptr);

private:
    CloseBtn *closeBtn = nullptr;
    MinimizeBtn *minimizeBtn = nullptr;
    MaximizeBtn *maximizeBtn = nullptr;
    MinimodeBtn *minimodeBtn = nullptr;

    void setup();
};
