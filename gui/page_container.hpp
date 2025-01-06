#pragma once

#include <QStackedWidget>


class PageContainer : public QStackedWidget
{
Q_OBJECT

public:
    explicit PageContainer(QWidget *parent = nullptr);

private:
    void setup();
};
