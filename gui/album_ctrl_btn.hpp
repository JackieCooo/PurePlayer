#pragma once

#include <QAbstractButton>


class AlbumControlBtn : public QAbstractButton
{
Q_OBJECT

public:
    explicit AlbumControlBtn(QWidget *parent = nullptr);

private:
    void _Setup();
};
