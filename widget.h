#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "kernel.h"
#include"QLabel"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    Kernel *kernel;
    QPushButton *gameButtons[9];
    QLabel *label;
};
#endif // WIDGET_H
