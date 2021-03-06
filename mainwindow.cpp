#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QActionGroup>
#include <QModbusRtuSerialMaster>
#include <QModbusReply>
#include <QTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QActionGroup *openCloseGroup = new QActionGroup(this);
    openCloseGroup->addAction(ui->actionOpen);
    openCloseGroup->addAction(ui->actionClose);
    openCloseGroup->setExclusive(true);

    modbusRtu = new QModbusRtuSerialMaster;
    serialSendDialog = new SerialSendDialog;
    serialSettingDialog = new SerialSettingDialog;

    timesample = new QTime();
    timesample->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    qDebug()<<"In Open action";
    if(!modbusRtu->connectDevice())
    {
        ui->statusBar->showMessage(tr("Serial Port %1 Open Error: %2")
                                   .arg(modbusRtu->connectionParameter(QModbusDevice::SerialPortNameParameter).toString())
                                   .arg(modbusRtu->errorString()));
    }
    else
    {
        ui->statusBar->showMessage(tr("Serial Port %1 Open OK")
                                   .arg(modbusRtu->connectionParameter(QModbusDevice::SerialPortNameParameter).toString()));
    }
}

void MainWindow::on_actionClose_triggered()
{
    qDebug()<<"In Close action";
    modbusRtu->disconnect();
    ui->statusBar->showMessage(tr("Serial Port %1 Closed")
                               .arg(modbusRtu->connectionParameter(QModbusDevice::SerialPortNameParameter).toString()));
}

void MainWindow::on_actionSend_triggered()
{
    qDebug()<<"In Send action";
}

void MainWindow::on_actionSetting_triggered()
{
    qDebug()<<"In Setting action";
    if(serialSettingDialog->exec() == 1)
    {

    }
}
