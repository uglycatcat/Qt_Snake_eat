#include "kernel.h"
#include <QDebug>
Kernel::Kernel(QObject *parent) : QObject(parent) {}

void Kernel::setPushButton(QPushButton *gameButton[]) {
    for (int i = 0; i < 9; ++i) {
        kButtons[i]=gameButton[i];
    }
}
void Kernel::setLabel(QLabel *label){
    klabel=label;
}
void Kernel::checkResult(){
    for (int i = 0; i < 3; ++i) {
        if(result[i][0] == result[i][1] && result[i][0] == result[i][2] && result[i][0]!=0){
            qDebug("%d赢了",result[i][0]);
            ggflag=true;
            emit checkgg();
        }
        if(result[0][i] == result[1][i] && result[0][i] == result[2][i] && result[0][i]!=0){
            qDebug("%d赢了",result[0][i]);
            ggflag=true;
            emit checkgg();
        }
    }
    if(result[0][2] == result[1][1] && result [0][2] == result[2][0] && result[1][1]!=0){
        qDebug("%d赢了",result[1][1]);
        ggflag=true;
        emit checkgg();
    }
    if(result[0][0] == result[1][1] && result [0][0] == result[2][2] && result[1][1]!=0){
        qDebug("%d赢了",result[1][1]);
        ggflag=true;
        emit checkgg();
    }
}
void Kernel::outputResult(){
    klabel->setText("GG");
}
void Kernel::onButtonClicked() {
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString content = button->text();
    QString number = button->objectName();
    if (number == "pushButton") {
        number = "pushButton_1";
    }
    if(ggflag){
        return;
    }
    QChar lastChar = number[number.length() - 1];
    QString lastCharString = QString(lastChar);
    int temp = lastCharString.toInt();
    int i=(temp-1)/3;
    int j=(temp+2)%3;
    //qDebug("横坐标为%d",j);
    //qDebug("纵坐标为%d",i);
    if(step>=9){
        klabel->setText("click restart");
    }
    if (content == "") {
        step++;
        if(step%2==0){
            button->setText("O");
            result[i][j]=1;
        }
        else{
            button->setText("X");
            result[i][j]=2;
        }
    }
    qDebug("%d",step);
    checkResult();
}
void Kernel::reStart() {
    // Find the QPushButton instance and change its text
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    for (int i = 0; i < 9; ++i) {
        kButtons[i]->setText("");
    }
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; ++j) {
            result[i][j]=0;
        }
    }
    ggflag=false;
    klabel->setText("先手为X");
    step=0;
}
