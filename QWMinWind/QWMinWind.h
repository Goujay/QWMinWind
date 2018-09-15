#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QWMinWind.h"

class QWMinWind : public QMainWindow
{
    Q_OBJECT

public:
    QWMinWind(QWidget *parent = Q_NULLPTR);

private:
    Ui::QWMinWindClass ui;
};
