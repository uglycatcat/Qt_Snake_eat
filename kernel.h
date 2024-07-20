#ifndef KERNEL_H
#define KERNEL_H

#include <QObject>
#include <QPushButton>
#include <QString>
#include<Qlabel.h>
#include <QThread>
class Kernel : public QObject {
    Q_OBJECT

public:
    void setPushButton(QPushButton *gameButtons[]);
    void setLabel(QLabel *label);
    explicit Kernel(QObject *parent = nullptr);

signals:
    void checkgg();

public slots:
    void onButtonClicked();
    void reStart();
    void checkResult();
    void outputResult();
private:
    QPushButton *kButtons[9];
    QLabel *klabel;
    int step=0;
    int result[3][3];
    bool ggflag=false;
};

#endif // KERNEL_H
