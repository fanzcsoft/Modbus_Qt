#ifndef SERIALSETTINGDIALOG_H
#define SERIALSETTINGDIALOG_H

#include <QDialog>

namespace Ui {
class SerialSettingDialog;
}

class SerialSettingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SerialSettingDialog(QWidget *parent = 0);
    ~SerialSettingDialog();

private:
    Ui::SerialSettingDialog *ui;
};

#endif // SERIALSETTINGDIALOG_H
