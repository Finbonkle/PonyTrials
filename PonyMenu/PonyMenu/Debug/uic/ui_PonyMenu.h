/********************************************************************************
** Form generated from reading UI file 'PonyMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PONYMENU_H
#define UI_PONYMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PonyMenuClass
{
public:
    QWidget *centralWidget;
    QLineEdit *display;
    QPushButton *Button7;
    QPushButton *Button4;
    QPushButton *Button1;
    QPushButton *Clear;
    QPushButton *Button2;
    QPushButton *Button0;
    QPushButton *Button8;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Button3;
    QPushButton *ChangeSign;
    QPushButton *Button9;
    QPushButton *Multiply;
    QPushButton *Add;
    QPushButton *Subtract;
    QPushButton *Divide;
    QPushButton *MemClear;
    QPushButton *MemGet;
    QPushButton *Equals;
    QPushButton *MemAdd;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PonyMenuClass)
    {
        if (PonyMenuClass->objectName().isEmpty())
            PonyMenuClass->setObjectName(QStringLiteral("PonyMenuClass"));
        PonyMenuClass->resize(473, 287);
        centralWidget = new QWidget(PonyMenuClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        display = new QLineEdit(centralWidget);
        display->setObjectName(QStringLiteral("display"));
        display->setGeometry(QRect(40, 20, 391, 61));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Lato Semibold"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        display->setFont(font);
        display->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QStringLiteral("Button7"));
        Button7->setGeometry(QRect(40, 100, 75, 23));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
        Button7->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QStringLiteral("Button4"));
        Button4->setGeometry(QRect(40, 130, 75, 23));
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);
        Button4->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QStringLiteral("Button1"));
        Button1->setGeometry(QRect(40, 160, 75, 23));
        sizePolicy1.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy1);
        Button1->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QStringLiteral("Clear"));
        Clear->setGeometry(QRect(40, 190, 75, 23));
        sizePolicy1.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy1);
        Clear->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QStringLiteral("Button2"));
        Button2->setGeometry(QRect(120, 160, 75, 23));
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);
        Button2->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QStringLiteral("Button0"));
        Button0->setGeometry(QRect(120, 190, 75, 23));
        sizePolicy1.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy1);
        Button0->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QStringLiteral("Button8"));
        Button8->setGeometry(QRect(120, 100, 75, 23));
        sizePolicy1.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy1);
        Button8->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QStringLiteral("Button5"));
        Button5->setGeometry(QRect(120, 130, 75, 23));
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);
        Button5->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QStringLiteral("Button6"));
        Button6->setGeometry(QRect(200, 130, 75, 23));
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);
        Button6->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QStringLiteral("Button3"));
        Button3->setGeometry(QRect(200, 160, 75, 23));
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);
        Button3->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        ChangeSign = new QPushButton(centralWidget);
        ChangeSign->setObjectName(QStringLiteral("ChangeSign"));
        ChangeSign->setGeometry(QRect(200, 190, 75, 23));
        sizePolicy1.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy1);
        ChangeSign->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QStringLiteral("Button9"));
        Button9->setGeometry(QRect(200, 100, 75, 23));
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);
        Button9->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Multiply = new QPushButton(centralWidget);
        Multiply->setObjectName(QStringLiteral("Multiply"));
        Multiply->setGeometry(QRect(280, 130, 75, 23));
        sizePolicy1.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy1);
        Multiply->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #ff8c00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Add = new QPushButton(centralWidget);
        Add->setObjectName(QStringLiteral("Add"));
        Add->setGeometry(QRect(280, 160, 75, 23));
        sizePolicy1.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy1);
        Add->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #ff8c00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Subtract = new QPushButton(centralWidget);
        Subtract->setObjectName(QStringLiteral("Subtract"));
        Subtract->setGeometry(QRect(280, 190, 75, 23));
        sizePolicy1.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy1);
        Subtract->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #ff8c00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Divide = new QPushButton(centralWidget);
        Divide->setObjectName(QStringLiteral("Divide"));
        Divide->setGeometry(QRect(280, 100, 75, 23));
        sizePolicy1.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy1);
        Divide->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #ff8c00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        MemClear = new QPushButton(centralWidget);
        MemClear->setObjectName(QStringLiteral("MemClear"));
        MemClear->setGeometry(QRect(360, 130, 75, 23));
        sizePolicy1.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy1);
        MemClear->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #ff8c00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        MemGet = new QPushButton(centralWidget);
        MemGet->setObjectName(QStringLiteral("MemGet"));
        MemGet->setGeometry(QRect(360, 160, 75, 23));
        sizePolicy1.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy1);
        MemGet->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #ff8c00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Equals = new QPushButton(centralWidget);
        Equals->setObjectName(QStringLiteral("Equals"));
        Equals->setGeometry(QRect(360, 190, 75, 23));
        sizePolicy1.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy1);
        Equals->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #ff8c00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        MemAdd = new QPushButton(centralWidget);
        MemAdd->setObjectName(QStringLiteral("MemAdd"));
        MemAdd->setGeometry(QRect(360, 100, 75, 23));
        sizePolicy1.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy1);
        MemAdd->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #ff8c00;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #a9a9a9;\n"
"	border:1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        PonyMenuClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PonyMenuClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 473, 21));
        PonyMenuClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(PonyMenuClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PonyMenuClass->setStatusBar(statusBar);

        retranslateUi(PonyMenuClass);

        QMetaObject::connectSlotsByName(PonyMenuClass);
    } // setupUi

    void retranslateUi(QMainWindow *PonyMenuClass)
    {
        PonyMenuClass->setWindowTitle(QApplication::translate("PonyMenuClass", "PonyMenu", nullptr));
        display->setText(QApplication::translate("PonyMenuClass", "0.0", nullptr));
        Button7->setText(QApplication::translate("PonyMenuClass", "7", nullptr));
        Button4->setText(QApplication::translate("PonyMenuClass", "4", nullptr));
        Button1->setText(QApplication::translate("PonyMenuClass", "1", nullptr));
        Clear->setText(QApplication::translate("PonyMenuClass", "AC", nullptr));
        Button2->setText(QApplication::translate("PonyMenuClass", "2", nullptr));
        Button0->setText(QApplication::translate("PonyMenuClass", "0", nullptr));
        Button8->setText(QApplication::translate("PonyMenuClass", "8", nullptr));
        Button5->setText(QApplication::translate("PonyMenuClass", "5", nullptr));
        Button6->setText(QApplication::translate("PonyMenuClass", "6", nullptr));
        Button3->setText(QApplication::translate("PonyMenuClass", "3", nullptr));
        ChangeSign->setText(QApplication::translate("PonyMenuClass", "+/-", nullptr));
        Button9->setText(QApplication::translate("PonyMenuClass", "9", nullptr));
        Multiply->setText(QApplication::translate("PonyMenuClass", "*", nullptr));
        Add->setText(QApplication::translate("PonyMenuClass", "+", nullptr));
        Subtract->setText(QApplication::translate("PonyMenuClass", "-", nullptr));
        Divide->setText(QApplication::translate("PonyMenuClass", "/", nullptr));
        MemClear->setText(QApplication::translate("PonyMenuClass", "M-", nullptr));
        MemGet->setText(QApplication::translate("PonyMenuClass", "M", nullptr));
        Equals->setText(QApplication::translate("PonyMenuClass", "=", nullptr));
        MemAdd->setText(QApplication::translate("PonyMenuClass", "M+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PonyMenuClass: public Ui_PonyMenuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PONYMENU_H
