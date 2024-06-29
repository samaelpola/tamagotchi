/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton_save;
    QPushButton *pushButton_menu;
    QFrame *line;
    QLabel *label_img;
    QLabel *statusLabel;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_feed;
    QPushButton *pushButton_makeHug;
    QPushButton *pushButton_walk;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QProgressBar *progressBar_feedLevel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QProgressBar *progressBar_happiness;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_bladderLevel;
    QProgressBar *progressBar_bladderLevel;

    void setupUi(QWidget *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QString::fromUtf8("GameWindow"));
        GameWindow->resize(552, 525);
        GameWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        horizontalLayoutWidget = new QWidget(GameWindow);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 531, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"Ubuntu\";"));

        horizontalLayout->addWidget(label, 0, Qt::AlignLeft);

        pushButton_save = new QPushButton(horizontalLayoutWidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_save->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 132, 228);\n"
"                                border-radius: 5px;\n"
"                                color:rgb(255, 255, 255);\n"
"                                font-size: 20px;\n"
"                                height: 30px;\n"
"                            "));

        horizontalLayout->addWidget(pushButton_save);

        pushButton_menu = new QPushButton(horizontalLayoutWidget);
        pushButton_menu->setObjectName(QString::fromUtf8("pushButton_menu"));
        pushButton_menu->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_menu->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);\n"
"                                border-radius: 5px;\n"
"                                color:rgb(255, 255, 255);\n"
"                                font-size: 20px;\n"
"                                height: 30px;\n"
"                            "));

        horizontalLayout->addWidget(pushButton_menu);

        line = new QFrame(GameWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 70, 531, 20));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(3);
        line->setFrameShape(QFrame::HLine);
        label_img = new QLabel(GameWindow);
        label_img->setObjectName(QString::fromUtf8("label_img"));
        label_img->setGeometry(QRect(40, 120, 141, 161));
        label_img->setStyleSheet(QString::fromUtf8(""));
        statusLabel = new QLabel(GameWindow);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(220, 110, 321, 141));
        statusLabel->setStyleSheet(QString::fromUtf8("border: 2px solid grey;\n"
"border-radius: 5px;"));
        statusLabel->setTextFormat(Qt::AutoText);
        statusLabel->setScaledContents(true);
        statusLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        statusLabel->setWordWrap(true);
        statusLabel->setMargin(10);
        statusLabel->setIndent(-1);
        statusLabel->setOpenExternalLinks(false);
        horizontalLayoutWidget_2 = new QWidget(GameWindow);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 440, 531, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_feed = new QPushButton(horizontalLayoutWidget_2);
        pushButton_feed->setObjectName(QString::fromUtf8("pushButton_feed"));
        pushButton_feed->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_feed->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 97, 203);\n"
"                                border-radius: 5px;\n"
"                                color:rgb(255, 255, 255);\n"
"                                font-size: 20px;\n"
"                                height: 30px;\n"
"                            "));

        horizontalLayout_2->addWidget(pushButton_feed);

        pushButton_makeHug = new QPushButton(horizontalLayoutWidget_2);
        pushButton_makeHug->setObjectName(QString::fromUtf8("pushButton_makeHug"));
        pushButton_makeHug->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_makeHug->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);\n"
"                                border-radius: 5px;\n"
"                                color:rgb(255, 255, 255);\n"
"                                font-size: 20px;\n"
"                                height: 30px;\n"
"                            "));

        horizontalLayout_2->addWidget(pushButton_makeHug);

        pushButton_walk = new QPushButton(horizontalLayoutWidget_2);
        pushButton_walk->setObjectName(QString::fromUtf8("pushButton_walk"));
        pushButton_walk->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_walk->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 51, 59);\n"
"                                border-radius: 5px;\n"
"                                color:rgb(255, 255, 255);\n"
"                                font-size: 20px;\n"
"                                height: 30px;\n"
"                            "));

        horizontalLayout_2->addWidget(pushButton_walk);

        verticalLayoutWidget = new QWidget(GameWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 330, 461, 95));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(40);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_8->addWidget(label_4);

        progressBar_feedLevel = new QProgressBar(verticalLayoutWidget);
        progressBar_feedLevel->setObjectName(QString::fromUtf8("progressBar_feedLevel"));
        progressBar_feedLevel->setAutoFillBackground(false);
        progressBar_feedLevel->setStyleSheet(QString::fromUtf8(""));
        progressBar_feedLevel->setValue(24);
        progressBar_feedLevel->setInvertedAppearance(false);

        horizontalLayout_8->addWidget(progressBar_feedLevel);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(42);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_7->addWidget(label_3);

        progressBar_happiness = new QProgressBar(verticalLayoutWidget);
        progressBar_happiness->setObjectName(QString::fromUtf8("progressBar_happiness"));
        progressBar_happiness->setValue(24);

        horizontalLayout_7->addWidget(progressBar_happiness);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_bladderLevel = new QLabel(verticalLayoutWidget);
        label_bladderLevel->setObjectName(QString::fromUtf8("label_bladderLevel"));
        label_bladderLevel->setStyleSheet(QString::fromUtf8("width: 30px;"));

        horizontalLayout_5->addWidget(label_bladderLevel);

        progressBar_bladderLevel = new QProgressBar(verticalLayoutWidget);
        progressBar_bladderLevel->setObjectName(QString::fromUtf8("progressBar_bladderLevel"));
        progressBar_bladderLevel->setValue(24);

        horizontalLayout_5->addWidget(progressBar_bladderLevel);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QWidget *GameWindow)
    {
        GameWindow->setWindowTitle(QCoreApplication::translate("GameWindow", "gamewindow", nullptr));
        label->setText(QCoreApplication::translate("GameWindow", "TAMAGOTCHIT", nullptr));
        pushButton_save->setText(QCoreApplication::translate("GameWindow", "Save", nullptr));
        pushButton_menu->setText(QCoreApplication::translate("GameWindow", "Menu", nullptr));
        label_img->setText(QString());
        pushButton_feed->setText(QCoreApplication::translate("GameWindow", "Feed", nullptr));
        pushButton_makeHug->setText(QCoreApplication::translate("GameWindow", "Make a hug", nullptr));
        pushButton_walk->setText(QCoreApplication::translate("GameWindow", "Walk", nullptr));
        label_4->setText(QCoreApplication::translate("GameWindow", "Feed Level", nullptr));
        label_3->setText(QCoreApplication::translate("GameWindow", "Happiness", nullptr));
        label_bladderLevel->setText(QCoreApplication::translate("GameWindow", "Bladder Level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
