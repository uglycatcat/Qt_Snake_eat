/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLabel *label;
    QPushButton *pushButton_11;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(400, 500);
        Widget->setMinimumSize(QSize(400, 500));
        Widget->setMaximumSize(QSize(400, 500));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(30, 380, 100, 100));
        pushButton->setMinimumSize(QSize(100, 100));
        pushButton->setMaximumSize(QSize(100, 100));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(150, 380, 100, 100));
        pushButton_2->setMinimumSize(QSize(100, 100));
        pushButton_2->setMaximumSize(QSize(100, 100));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setEnabled(true);
        pushButton_3->setGeometry(QRect(270, 380, 100, 100));
        pushButton_3->setMinimumSize(QSize(100, 100));
        pushButton_3->setMaximumSize(QSize(100, 100));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setEnabled(true);
        pushButton_4->setGeometry(QRect(30, 260, 100, 100));
        pushButton_4->setMinimumSize(QSize(100, 100));
        pushButton_4->setMaximumSize(QSize(100, 100));
        pushButton_4->setFont(font);
        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setEnabled(true);
        pushButton_5->setGeometry(QRect(150, 260, 100, 100));
        pushButton_5->setMinimumSize(QSize(100, 100));
        pushButton_5->setMaximumSize(QSize(100, 100));
        pushButton_5->setFont(font);
        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setEnabled(true);
        pushButton_6->setGeometry(QRect(270, 260, 100, 100));
        pushButton_6->setMinimumSize(QSize(100, 100));
        pushButton_6->setMaximumSize(QSize(100, 100));
        pushButton_6->setFont(font);
        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setEnabled(true);
        pushButton_7->setGeometry(QRect(30, 140, 100, 100));
        pushButton_7->setMinimumSize(QSize(100, 100));
        pushButton_7->setMaximumSize(QSize(100, 100));
        pushButton_7->setFont(font);
        pushButton_8 = new QPushButton(Widget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setEnabled(true);
        pushButton_8->setGeometry(QRect(150, 140, 100, 100));
        pushButton_8->setMinimumSize(QSize(100, 100));
        pushButton_8->setMaximumSize(QSize(100, 100));
        pushButton_8->setFont(font);
        pushButton_8->setIconSize(QSize(20, 20));
        pushButton_9 = new QPushButton(Widget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setEnabled(true);
        pushButton_9->setGeometry(QRect(270, 140, 100, 100));
        pushButton_9->setMinimumSize(QSize(100, 100));
        pushButton_9->setMaximumSize(QSize(100, 100));
        pushButton_9->setFont(font);
        pushButton_10 = new QPushButton(Widget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(250, 15, 80, 50));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 30, 80, 60));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        pushButton_11 = new QPushButton(Widget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(250, 75, 80, 50));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 80, 80, 40));
        QFont font2;
        font2.setPointSize(10);
        label_2->setFont(font2);

        retranslateUi(Widget);
        QObject::connect(pushButton_10, &QPushButton::clicked, Widget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\344\272\225\345\255\227\346\243\213", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QCoreApplication::translate("Widget", "close", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\344\272\225\345\255\227\346\243\213", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Widget", "restart", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\205\210\346\211\213\344\270\272X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
