/********************************************************************************
** Form generated from reading UI file 'QWMinWind.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMINWIND_H
#define UI_QWMINWIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMinWindClass
{
public:
    QAction *actionactCut;
    QAction *actionactCopy;
    QAction *actionactPaste;
    QAction *actFontBold;
    QAction *actFontItalic;
    QAction *actFontUnder;
    QAction *actionactClose;
    QAction *actionactOpen;
    QAction *actionactClear;
    QAction *actionactFont;
    QAction *actionactNew;
    QAction *actionactToolBarLab;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QSpinBox *spinBox;
    QMenuBar *menuBar;
    QMenu *menufile;
    QMenu *menuedit;
    QMenu *menustyle;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QWMinWindClass)
    {
        if (QWMinWindClass->objectName().isEmpty())
            QWMinWindClass->setObjectName(QStringLiteral("QWMinWindClass"));
        QWMinWindClass->resize(600, 400);
        actionactCut = new QAction(QWMinWindClass);
        actionactCut->setObjectName(QStringLiteral("actionactCut"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/QWMinWind/images/cut.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionactCut->setIcon(icon);
        actionactCopy = new QAction(QWMinWindClass);
        actionactCopy->setObjectName(QStringLiteral("actionactCopy"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/QWMinWind/images/120.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionactCopy->setIcon(icon1);
        actionactPaste = new QAction(QWMinWindClass);
        actionactPaste->setObjectName(QStringLiteral("actionactPaste"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/QWMinWind/images/paste.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionactPaste->setIcon(icon2);
        actFontBold = new QAction(QWMinWindClass);
        actFontBold->setObjectName(QStringLiteral("actFontBold"));
        actFontBold->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/QWMinWind/images/BLD.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actFontBold->setIcon(icon3);
        actFontItalic = new QAction(QWMinWindClass);
        actFontItalic->setObjectName(QStringLiteral("actFontItalic"));
        actFontItalic->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/QWMinWind/images/ITL.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actFontItalic->setIcon(icon4);
        actFontUnder = new QAction(QWMinWindClass);
        actFontUnder->setObjectName(QStringLiteral("actFontUnder"));
        actFontUnder->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/QWMinWind/images/UNDRLN.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actFontUnder->setIcon(icon5);
        actionactClose = new QAction(QWMinWindClass);
        actionactClose->setObjectName(QStringLiteral("actionactClose"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/QWMinWind/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionactClose->setIcon(icon6);
        actionactOpen = new QAction(QWMinWindClass);
        actionactOpen->setObjectName(QStringLiteral("actionactOpen"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/QWMinWind/images/open3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionactOpen->setIcon(icon7);
        actionactClear = new QAction(QWMinWindClass);
        actionactClear->setObjectName(QStringLiteral("actionactClear"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/QWMinWind/images/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionactClear->setIcon(icon8);
        actionactFont = new QAction(QWMinWindClass);
        actionactFont->setObjectName(QStringLiteral("actionactFont"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/QWMinWind/images/20.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionactFont->setIcon(icon9);
        actionactNew = new QAction(QWMinWindClass);
        actionactNew->setObjectName(QStringLiteral("actionactNew"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/QWMinWind/images/new2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionactNew->setIcon(icon10);
        actionactToolBarLab = new QAction(QWMinWindClass);
        actionactToolBarLab->setObjectName(QStringLiteral("actionactToolBarLab"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/QWMinWind/images/430.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionactToolBarLab->setIcon(icon11);
        centralWidget = new QWidget(QWMinWindClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(60, 30, 481, 251));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(10, 330, 42, 22));
        QWMinWindClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QWMinWindClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menufile = new QMenu(menuBar);
        menufile->setObjectName(QStringLiteral("menufile"));
        menuedit = new QMenu(menuBar);
        menuedit->setObjectName(QStringLiteral("menuedit"));
        menustyle = new QMenu(menuBar);
        menustyle->setObjectName(QStringLiteral("menustyle"));
        QWMinWindClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QWMinWindClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QWMinWindClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QWMinWindClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QWMinWindClass->setStatusBar(statusBar);

        menuBar->addAction(menufile->menuAction());
        menuBar->addAction(menuedit->menuAction());
        menuBar->addAction(menustyle->menuAction());
        menufile->addAction(actionactNew);
        menufile->addSeparator();
        menufile->addAction(actionactOpen);
        menufile->addAction(actionactClose);
        menuedit->addAction(actionactCut);
        menuedit->addAction(actionactCopy);
        menuedit->addAction(actionactPaste);
        menuedit->addAction(actionactClear);
        menustyle->addAction(actFontBold);
        menustyle->addAction(actFontItalic);
        menustyle->addAction(actFontUnder);
        menustyle->addSeparator();
        menustyle->addAction(actionactToolBarLab);
        mainToolBar->addAction(actionactNew);
        mainToolBar->addAction(actionactOpen);
        mainToolBar->addAction(actionactClear);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionactCut);
        mainToolBar->addAction(actionactCopy);
        mainToolBar->addAction(actionactPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actFontItalic);
        mainToolBar->addAction(actFontBold);
        mainToolBar->addAction(actFontUnder);
        mainToolBar->addSeparator();

        retranslateUi(QWMinWindClass);
        QObject::connect(actionactCut, SIGNAL(triggered()), textEdit, SLOT(cut()));
        QObject::connect(actionactCopy, SIGNAL(triggered()), textEdit, SLOT(copy()));
        QObject::connect(actionactPaste, SIGNAL(triggered()), textEdit, SLOT(paste()));
        QObject::connect(actionactClose, SIGNAL(triggered()), textEdit, SLOT(close()));
        QObject::connect(actionactClear, SIGNAL(triggered()), textEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(QWMinWindClass);
    } // setupUi

    void retranslateUi(QMainWindow *QWMinWindClass)
    {
        QWMinWindClass->setWindowTitle(QApplication::translate("QWMinWindClass", "QWMinWind", Q_NULLPTR));
        actionactCut->setText(QApplication::translate("QWMinWindClass", "actCut", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionactCut->setToolTip(QApplication::translate("QWMinWindClass", "actionactCut", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionactCut->setShortcut(QApplication::translate("QWMinWindClass", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionactCopy->setText(QApplication::translate("QWMinWindClass", "actCopy", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionactCopy->setToolTip(QApplication::translate("QWMinWindClass", "actionactCopy", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionactCopy->setShortcut(QApplication::translate("QWMinWindClass", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionactPaste->setText(QApplication::translate("QWMinWindClass", "actPaste", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionactPaste->setShortcut(QApplication::translate("QWMinWindClass", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actFontBold->setText(QApplication::translate("QWMinWindClass", "actFontBold", Q_NULLPTR));
        actFontItalic->setText(QApplication::translate("QWMinWindClass", "actFontItalic", Q_NULLPTR));
        actFontUnder->setText(QApplication::translate("QWMinWindClass", "actFontUnder", Q_NULLPTR));
        actionactClose->setText(QApplication::translate("QWMinWindClass", "actClose", Q_NULLPTR));
        actionactOpen->setText(QApplication::translate("QWMinWindClass", "actOpen", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionactOpen->setShortcut(QApplication::translate("QWMinWindClass", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionactClear->setText(QApplication::translate("QWMinWindClass", "actClear", Q_NULLPTR));
        actionactFont->setText(QApplication::translate("QWMinWindClass", "actFont", Q_NULLPTR));
        actionactNew->setText(QApplication::translate("QWMinWindClass", "actNew", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionactNew->setShortcut(QApplication::translate("QWMinWindClass", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionactToolBarLab->setText(QApplication::translate("QWMinWindClass", "actToolBarLab", Q_NULLPTR));
        menufile->setTitle(QApplication::translate("QWMinWindClass", "file", Q_NULLPTR));
        menuedit->setTitle(QApplication::translate("QWMinWindClass", "edit", Q_NULLPTR));
        menustyle->setTitle(QApplication::translate("QWMinWindClass", "style", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWMinWindClass: public Ui_QWMinWindClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMINWIND_H
