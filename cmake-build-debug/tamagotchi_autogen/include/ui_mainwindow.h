/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QPushButton *pushButton_loadGame;
    QPushButton *pushButton_newGame;
    QPushButton *pushButton_exit;
    QLabel *labelImg;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(556, 525);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        pushButton_loadGame = new QPushButton(MainWindow);
        pushButton_loadGame->setObjectName(QString::fromUtf8("pushButton_loadGame"));
        pushButton_loadGame->setGeometry(QRect(140, 370, 261, 41));
        pushButton_loadGame->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_loadGame->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 95, 180);\n"
"                    border-radius: 10px;\n"
"                    color:rgb(255, 255, 255);\n"
"                "));
        pushButton_newGame = new QPushButton(MainWindow);
        pushButton_newGame->setObjectName(QString::fromUtf8("pushButton_newGame"));
        pushButton_newGame->setGeometry(QRect(140, 310, 261, 41));
        pushButton_newGame->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_newGame->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 162, 105);\n"
"                    border-radius: 10px;\n"
"                    color:rgb(255, 255, 255);\n"
"                "));
        pushButton_exit = new QPushButton(MainWindow);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(140, 430, 261, 41));
        pushButton_exit->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_exit->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 25, 75);\n"
"                    border-radius: 10px;\n"
"                    color:rgb(255, 255, 255);\n"
"                "));
        labelImg = new QLabel(MainWindow);
        labelImg->setObjectName(QString::fromUtf8("labelImg"));
        labelImg->setGeometry(QRect(180, 90, 181, 191));
        labelImg->setAutoFillBackground(false);
        labelImg->setStyleSheet(QString::fromUtf8(""));
        labelImg->setScaledContents(false);
        labelImg->setWordWrap(false);
        textBrowser = new QTextBrowser(MainWindow);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(120, 10, 291, 51));
        textBrowser->setStyleSheet(QString::fromUtf8("border:none;"));

        retranslateUi(MainWindow);
        QObject::connect(pushButton_exit, &QPushButton::clicked, MainWindow, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Tamagotchi", nullptr));
#if QT_CONFIG(accessibility)
        MainWindow->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        pushButton_loadGame->setText(QCoreApplication::translate("MainWindow", "lOAD GAME", nullptr));
        pushButton_newGame->setText(QCoreApplication::translate("MainWindow", "NEW GAME", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        labelImg->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; color:#a86b87;\">TAMAGOTCHIT</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
