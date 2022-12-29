/********************************************************************************
** Form generated from reading UI file 'mytexteditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTEXTEDITOR_H
#define UI_MYTEXTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyTextEditor
{
public:
    QAction *actionBold;
    QAction *actionColor;
    QAction *actionNormal;
    QAction *actionFont;
    QAction *actionItalic;
    QAction *actionUnderline;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuText;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyTextEditor)
    {
        if (MyTextEditor->objectName().isEmpty())
            MyTextEditor->setObjectName(QString::fromUtf8("MyTextEditor"));
        MyTextEditor->resize(400, 300);
        actionBold = new QAction(MyTextEditor);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionBold->setCheckable(true);
        actionBold->setChecked(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/icons/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon);
        actionColor = new QAction(MyTextEditor);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        actionColor->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/icons/c.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon1);
        actionNormal = new QAction(MyTextEditor);
        actionNormal->setObjectName(QString::fromUtf8("actionNormal"));
        actionNormal->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/icons/n.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNormal->setIcon(icon2);
        actionFont = new QAction(MyTextEditor);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        actionFont->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/icons/musical-symbol-of-letter-f.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon3);
        actionItalic = new QAction(MyTextEditor);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        actionItalic->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/icons/i.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon4);
        actionUnderline = new QAction(MyTextEditor);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        actionUnderline->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Images/icons/u.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon5);
        centralWidget = new QWidget(MyTextEditor);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(80, 0, 104, 70));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        textEdit->setFont(font);
        MyTextEditor->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyTextEditor);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuText = new QMenu(menuBar);
        menuText->setObjectName(QString::fromUtf8("menuText"));
        MyTextEditor->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyTextEditor);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyTextEditor->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyTextEditor);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyTextEditor->setStatusBar(statusBar);

        menuBar->addAction(menuText->menuAction());
        menuText->addAction(actionBold);
        mainToolBar->addAction(actionNormal);
        mainToolBar->addAction(actionBold);
        mainToolBar->addAction(actionColor);
        mainToolBar->addAction(actionFont);
        mainToolBar->addAction(actionItalic);
        mainToolBar->addAction(actionUnderline);

        retranslateUi(MyTextEditor);

        QMetaObject::connectSlotsByName(MyTextEditor);
    } // setupUi

    void retranslateUi(QMainWindow *MyTextEditor)
    {
        MyTextEditor->setWindowTitle(QCoreApplication::translate("MyTextEditor", "MyTextEditor", nullptr));
        actionBold->setText(QCoreApplication::translate("MyTextEditor", "Bold", nullptr));
#if QT_CONFIG(shortcut)
        actionBold->setShortcut(QCoreApplication::translate("MyTextEditor", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionColor->setText(QCoreApplication::translate("MyTextEditor", "Color", nullptr));
#if QT_CONFIG(tooltip)
        actionColor->setToolTip(QCoreApplication::translate("MyTextEditor", "color", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNormal->setText(QCoreApplication::translate("MyTextEditor", "Normal", nullptr));
        actionFont->setText(QCoreApplication::translate("MyTextEditor", "Font", nullptr));
        actionItalic->setText(QCoreApplication::translate("MyTextEditor", "Italic", nullptr));
        actionUnderline->setText(QCoreApplication::translate("MyTextEditor", "Underline", nullptr));
        menuText->setTitle(QCoreApplication::translate("MyTextEditor", "Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyTextEditor: public Ui_MyTextEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTEXTEDITOR_H
