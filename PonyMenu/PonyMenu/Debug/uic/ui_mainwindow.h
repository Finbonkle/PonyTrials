/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *startButton;
    QLabel *manaLabel;
    QPushButton *manaButton;
    QLabel *jumpLabel;
    QPushButton *jumpButton;
    QPushButton *healthButton;
    QLabel *healthLabel;
    QPushButton *speedButton;
    QLabel *speedLabel;
    QPushButton *fireButton;
    QLabel *fireLabel;
    QPushButton *exitButton;
    QLabel *label_picture;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(581, 359);
        MainWindow->setStyleSheet(QStringLiteral("QLineEdit { background-color: orange }"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(20, 20, 181, 23));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("MS Sans Serif"));
        font.setBold(true);
        font.setWeight(75);
        startButton->setFont(font);
        startButton->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #e67e22; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e59866; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));
        manaLabel = new QLabel(centralwidget);
        manaLabel->setObjectName(QStringLiteral("manaLabel"));
        manaLabel->setGeometry(QRect(150, 60, 41, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("System"));
        font1.setBold(true);
        font1.setWeight(75);
        manaLabel->setFont(font1);
        manaLabel->setLayoutDirection(Qt::LeftToRight);
        manaLabel->setAlignment(Qt::AlignCenter);
        manaButton = new QPushButton(centralwidget);
        manaButton->setObjectName(QStringLiteral("manaButton"));
        manaButton->setGeometry(QRect(20, 70, 111, 23));
        manaButton->setFont(font);
        manaButton->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #fbfcfc; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #d0d3d4; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));
        jumpLabel = new QLabel(centralwidget);
        jumpLabel->setObjectName(QStringLiteral("jumpLabel"));
        jumpLabel->setGeometry(QRect(150, 180, 41, 41));
        jumpLabel->setFont(font1);
        jumpLabel->setLayoutDirection(Qt::LeftToRight);
        jumpLabel->setAlignment(Qt::AlignCenter);
        jumpButton = new QPushButton(centralwidget);
        jumpButton->setObjectName(QStringLiteral("jumpButton"));
        jumpButton->setGeometry(QRect(20, 190, 111, 23));
        jumpButton->setFont(font);
        jumpButton->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #fbfcfc; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #d0d3d4; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));
        healthButton = new QPushButton(centralwidget);
        healthButton->setObjectName(QStringLiteral("healthButton"));
        healthButton->setGeometry(QRect(20, 110, 111, 23));
        healthButton->setFont(font);
        healthButton->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #fbfcfc; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #d0d3d4; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));
        healthLabel = new QLabel(centralwidget);
        healthLabel->setObjectName(QStringLiteral("healthLabel"));
        healthLabel->setGeometry(QRect(150, 100, 41, 41));
        healthLabel->setFont(font1);
        healthLabel->setLayoutDirection(Qt::LeftToRight);
        healthLabel->setAlignment(Qt::AlignCenter);
        speedButton = new QPushButton(centralwidget);
        speedButton->setObjectName(QStringLiteral("speedButton"));
        speedButton->setGeometry(QRect(20, 150, 111, 23));
        speedButton->setFont(font);
        speedButton->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #fbfcfc; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #d0d3d4; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));
        speedLabel = new QLabel(centralwidget);
        speedLabel->setObjectName(QStringLiteral("speedLabel"));
        speedLabel->setGeometry(QRect(150, 140, 41, 41));
        speedLabel->setFont(font1);
        speedLabel->setLayoutDirection(Qt::LeftToRight);
        speedLabel->setAlignment(Qt::AlignCenter);
        fireButton = new QPushButton(centralwidget);
        fireButton->setObjectName(QStringLiteral("fireButton"));
        fireButton->setGeometry(QRect(20, 230, 111, 23));
        fireButton->setFont(font);
        fireButton->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #fbfcfc; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #d0d3d4; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));
        fireLabel = new QLabel(centralwidget);
        fireLabel->setObjectName(QStringLiteral("fireLabel"));
        fireLabel->setGeometry(QRect(150, 220, 41, 41));
        fireLabel->setFont(font1);
        fireLabel->setLayoutDirection(Qt::LeftToRight);
        fireLabel->setAlignment(Qt::AlignCenter);
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(20, 270, 181, 23));
        sizePolicy.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy);
        exitButton->setFont(font);
        exitButton->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #e67e22; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e59866; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));
        label_picture = new QLabel(centralwidget);
        label_picture->setObjectName(QStringLiteral("label_picture"));
        label_picture->setGeometry(QRect(246, 30, 291, 251));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 581, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        startButton->setText(QApplication::translate("MainWindow", "Start Trial", nullptr));
        manaLabel->setText(QApplication::translate("MainWindow", "OFF", nullptr));
        manaButton->setText(QApplication::translate("MainWindow", "Super Mana", nullptr));
        jumpLabel->setText(QApplication::translate("MainWindow", "OFF", nullptr));
        jumpButton->setText(QApplication::translate("MainWindow", "Super Jump", nullptr));
        healthButton->setText(QApplication::translate("MainWindow", "Super Health", nullptr));
        healthLabel->setText(QApplication::translate("MainWindow", "OFF", nullptr));
        speedButton->setText(QApplication::translate("MainWindow", "Super Speed", nullptr));
        speedLabel->setText(QApplication::translate("MainWindow", "OFF", nullptr));
        fireButton->setText(QApplication::translate("MainWindow", "Super Fireball", nullptr));
        fireLabel->setText(QApplication::translate("MainWindow", "OFF", nullptr));
        exitButton->setText(QApplication::translate("MainWindow", "Exit Trainer", nullptr));
        label_picture->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
