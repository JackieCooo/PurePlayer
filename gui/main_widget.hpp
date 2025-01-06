#pragma once

#include <QWidget>
#include <QSizePolicy>
#include <QVBoxLayout>

#include "top_bar.hpp"
#include "main_panel.hpp"


class MainWidget : public QWidget
{
Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = nullptr);

private:
    TopBar *topBar = nullptr;
    MainPanel *mainPanel = nullptr;

    void setup();
};
