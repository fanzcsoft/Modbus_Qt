#include "serialsettingdialog.h"
#include "ui_serialsettingdialog.h"

SerialSettingDialog::SerialSettingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SerialSettingDialog)
{
    ui->setupUi(this);
}

SerialSettingDialog::~SerialSettingDialog()
{
    delete ui;
}
