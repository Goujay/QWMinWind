#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QWMinWind.h"
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QFontComboBox>

class QWMinWind : public QMainWindow
{
    Q_OBJECT

public:
    QWMinWind(QWidget *parent = Q_NULLPTR);
    void initUi();

protected slots:
    void slot_Bold(bool check);
    void slot_Italic(bool check);
    void slot_Underline(bool check);
    void slot_copyAvailable(bool check);
    void slot_selectionChange(bool check);

    void slot_setFontSize(int size);
    void slot_setFontType(const QString &arg);

private:
    Ui::QWMinWindClass ui;
    QLabel   *m_pLabel;
    QProgressBar  *m_pProgessBar;
    QSpinBox *m_pSpinBox;
    QFontComboBox *m_FontCom;
};
