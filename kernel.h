#ifndef KERNEL_H
#define KERNEL_H

#include <QObject>
#include <QPushButton>
#include <QString>

class Kernel : public QObject {
    Q_OBJECT

public:
    void setPushButton(QPushButton *button);
    explicit Kernel(QObject *parent = nullptr);

public slots:
    void onButtonClicked();
    void reStart();
private:
    QPushButton *pushButton;
};

#endif // KERNEL_H
