#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , kernel(new Kernel(this))
{
    ui->setupUi(this);
    kernel->setPushButton(ui->pushButton_2);
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
}

Widget::~Widget()
{
    delete ui;
    delete kernel;
}
