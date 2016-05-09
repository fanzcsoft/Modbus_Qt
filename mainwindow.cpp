#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QActionGroup>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QActionGroup *openCloseGroup = new QActionGroup(this);
    openCloseGroup->addAction(ui->actionOpen);
    openCloseGroup->addAction(ui->actionClose);
    openCloseGroup->setExclusive(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    qDebug()<<"In Open action";
}

void MainWindow::on_actionClose_triggered()
{
    qDebug()<<"In Close action";
}

void MainWindow::on_actionSend_triggered()
{
    qDebug()<<"In Send action";
}

void MainWindow::on_actionSetting_triggered()
{
    qDebug()<<"In Setting action";
}
