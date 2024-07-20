#include "kernel.h"

Kernel::Kernel(QObject *parent) : QObject(parent) {}
int step=0;

void Kernel::setPushButton(QPushButton *button) {
    pushButton = button;
}
void Kernel::onButtonClicked() {
    // Find the QPushButton instance and change its text
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString content = button->text();
    if (content == "") {
        step++;
        if(step%2==0){
            button->setText("V");
        }
        else{
            button->setText("X");
        }


    }
}
void Kernel::reStart() {
    // Find the QPushButton instance and change its text
    QPushButton *button = qobject_cast<QPushButton*>(sender());

}
