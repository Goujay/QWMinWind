#include "QWMinWind.h"

QWMinWind::QWMinWind(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    initUi();

    connect(ui.actFontBold, SIGNAL(triggered(bool)), SLOT(slot_Bold(bool)));
    connect(ui.actFontItalic, SIGNAL(triggered(bool)), SLOT(slot_Italic(bool)));
    connect(ui.actFontUnder, SIGNAL(triggered(bool)), SLOT(slot_Underline(bool)));
    connect(ui.textEdit, SIGNAL(copyAvailable(bool)), SLOT(slot_copyAvailable(bool)));
    connect(ui.textEdit, SIGNAL(selectionChanged(bool)), SLOT(slot_selectionChange(bool)));

    connect(m_pSpinBox, SIGNAL(valueChanged(int)), SLOT(slot_setFontSize(int)));
    connect(m_FontCom, SIGNAL(currentIndexChanged(const QString &)), SLOT(slot_setFontType(const QString &)));

}

void QWMinWind::initUi()
{
    m_pLabel = new QLabel;
    m_pLabel->setMinimumWidth(150);
    m_pLabel->setText("当前文件: ");
    ui.statusBar->addWidget(m_pLabel);

    m_pProgessBar = new QProgressBar;
    m_pProgessBar->setMinimumWidth(200);
    m_pProgessBar->setMinimum(5);
    m_pProgessBar->setMaximum(20);
    m_pProgessBar->setValue(ui.textEdit->font().pointSize());
    ui.statusBar->addWidget(m_pProgessBar);

    m_pSpinBox = new QSpinBox;
    m_pSpinBox->setMinimumWidth(50);
    m_pSpinBox->setMinimum(5);
    m_pSpinBox->setMaximum(20);
    m_pSpinBox->setValue(ui.textEdit->font().pointSize());
    ui.mainToolBar->addWidget(new QLabel("字体大小: "));
    ui.mainToolBar->addWidget(m_pSpinBox);

    ui.mainToolBar->addSeparator();
    ui.mainToolBar->addWidget(new QLabel("字体: "));
    m_FontCom = new QFontComboBox;
    m_FontCom->setMinimumWidth(150);
    ui.mainToolBar->addWidget(m_FontCom);

    setCentralWidget(ui.textEdit);
}

void QWMinWind::slot_Bold(bool check)
{
    QTextCharFormat form = ui.textEdit->currentCharFormat();
    if (check)
    {
        form.setFontWeight(QFont::Bold);
    }
    else
    {
        form.setFontWeight(QFont::Normal);
    }
    ui.textEdit->mergeCurrentCharFormat(form);
}

void QWMinWind::slot_Italic(bool check)
{
    QTextCharFormat form = ui.textEdit->currentCharFormat();
    form.setFontItalic(check);
    ui.textEdit->mergeCurrentCharFormat(form);
}

void QWMinWind::slot_Underline(bool check)
{
    QTextCharFormat form = ui.textEdit->currentCharFormat();
    form.setFontUnderline(check);
    ui.textEdit->mergeCurrentCharFormat(form);
}

void QWMinWind::slot_copyAvailable(bool check)
{
    ui.actionactCut->setEnabled(check);
    ui.actionactCopy->setEnabled(check);
    ui.actionactPaste->setEnabled(ui.textEdit->canPaste());
}

void QWMinWind::slot_selectionChange(bool check)
{
    QTextCharFormat form = ui.textEdit->currentCharFormat();
    ui.actFontBold->setChecked(form.font().bold());
    ui.actFontItalic->setChecked(form.fontItalic());
    ui.actFontUnder->setChecked(form.fontUnderline());
}

void QWMinWind::slot_setFontSize(int size)
{
    QTextCharFormat form;
    form.setFontPointSize(size);
    ui.textEdit->mergeCurrentCharFormat(form);
    m_pProgessBar->setValue(size);
}

void QWMinWind::slot_setFontType(const QString &arg)
{
    QTextCharFormat from;
    from.setFontFamily(arg);
    ui.textEdit->mergeCurrentCharFormat(from);
}
