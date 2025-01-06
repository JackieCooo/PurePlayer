#pragma once

#include <QWidget>
#include <QSizePolicy>
#include <QHBoxLayout>

#include "side_bar.hpp"
#include "page_container.hpp"


class MainPanel : public QWidget
{
Q_OBJECT

public:
    explicit MainPanel(QWidget *parent = nullptr);

private:
    SideBar *_sideBar = nullptr;
    PageContainer *_pageContainer = nullptr;

    void _Setup();
};
