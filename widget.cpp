#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , kernel(new Kernel(this))
{
    ui->setupUi(this);
    gameButtons[0] = ui->pushButton;
    gameButtons[1] = ui->pushButton_2;
    gameButtons[2] = ui->pushButton_3;
    gameButtons[3] = ui->pushButton_4;
    gameButtons[4] = ui->pushButton_5;
    gameButtons[5] = ui->pushButton_6;
    gameButtons[6] = ui->pushButton_7;
    gameButtons[7] = ui->pushButton_8;
    gameButtons[8] = ui->pushButton_9;
    kernel->setPushButton(gameButtons);
    kernel->setLabel(ui->label_2);
    connect(ui->pushButton, &QPushButton::clicked, kernel, &Kernel::onButtonClicked);
    connect(ui->pushButton_2, &QPushButton::clicked, kernel, &Kernel::onButtonClicked);
    connect(ui->pushButton_3, &QPushButton::clicked, kernel, &Kernel::onButtonClicked);
    connect(ui->pushButton_4, &QPushButton::clicked, kernel, &Kernel::onButtonClicked);
    connect(ui->pushButton_5, &QPushButton::clicked, kernel, &Kernel::onButtonClicked);
    connect(ui->pushButton_6, &QPushButton::clicked, kernel, &Kernel::onButtonClicked);
    connect(ui->pushButton_7, &QPushButton::clicked, kernel, &Kernel::onButtonClicked);
    connect(ui->pushButton_8, &QPushButton::clicked, kernel, &Kernel::onButtonClicked);
    connect(ui->pushButton_9, &QPushButton::clicked, kernel, &Kernel::onButtonClicked);
    connect(ui->pushButton_11, &QPushButton::clicked, kernel, &Kernel::reStart);
    connect(kernel, &Kernel::checkgg, kernel, &Kernel::outputResult);
}

Widget::~Widget()
{
    delete ui;
    delete kernel;
}
