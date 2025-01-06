#pragma once

#include <QAbstractButton>
#include <QPaintEvent>
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>

#include <functional>


class TopBarBtn : public QAbstractButton
{
Q_OBJECT

public:
    explicit TopBarBtn(QWidget *parent = nullptr);
    TopBarBtn(const QColor &color, QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *e) override;
    void enterEvent(QEnterEvent *e) override;
    void leaveEvent(QEvent *e) override;
    void mousePressEvent(QMouseEvent *e) override;
    void mouseReleaseEvent(QMouseEvent *e) override;
    virtual void clickAction();

private:
    bool _mouseOvered = false;
    QColor _color {};

    void setup();
};
