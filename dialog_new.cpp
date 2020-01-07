#include "dialog_new.h"
#include "ui_dialog_new.h"
#include <QString>
#include <QFileDialog>
#include <QDebug>

Dialog_new::Dialog_new(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_new)
{
    ui->setupUi(this);
}

Dialog_new::~Dialog_new()
{
    delete ui;
}



void Dialog_new::on_bt_path_clicked()
{
    QString pathName;
    pathName = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                     "E:/STUDY/SoftwarePractice/Ui_Program/Download",
                                                     QFileDialog::ShowDirsOnly
                                                     | QFileDialog::DontResolveSymlinks);
    ui->text_path->setText(pathName);
    qDebug()<< pathName;
}

void Dialog_new::on_bt_concel_clicked()
{
    this->close();
}
