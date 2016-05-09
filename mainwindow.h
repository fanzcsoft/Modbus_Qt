#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "serialsenddialog.h"
#include "serialsettingdialog.h"

class QModbusRtuSerialMaster;
class QModbusReply;
class QTime;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionClose_triggered();
    void on_actionSend_triggered();
    void on_actionSetting_triggered();
    void on_actionOpen_triggered();

private:
    Ui::MainWindow *ui;
    SerialSendDialog *serialSendDialog;
    SerialSettingDialog *serialSettingDialog;

    QModbusRtuSerialMaster *modbusRtu;
    QModbusReply *reply;
    QTime *timesample;
};

#endif // MAINWINDOW_H
