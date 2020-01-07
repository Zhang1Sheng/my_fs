#include "dialog_userinfo_update.h"
#include "ui_dialog_userinfo_update.h"

Dialog_UserInfo_update::Dialog_UserInfo_update(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_UserInfo_update)
{
    ui->setupUi(this);
}

Dialog_UserInfo_update::~Dialog_UserInfo_update()
{
    delete ui;
}

void Dialog_UserInfo_update::on_pushButton_2_clicked()
{
    this->close();
}
