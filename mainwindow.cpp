#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore/QCoreApplication>
#include "QTextStream"
#include "dialog_download.h"
#include "dialog_userinfo_update.h"
#include "dialoglogin.h"
#include "dialog_new.h"
#include "upload.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    w=new Dialog_download();
    user=new Dialog_UserInfo_update();
    new_work=new Dialog_new();
    login=new DialogLogin();
    file_up=new upload();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_load_button_clicked()
{

}

void MainWindow::on_user_info_clicked()
{
       user->show();
}

void MainWindow::on_new_work_button_clicked()
{
      new_work->show();
}

void MainWindow::on_set_load_speed_clicked()
{
     w->show();
}


void MainWindow::on_user_login_btn_clicked()
{
    login->show();
}

void MainWindow::on_up_button_clicked()
{
    file_up->show();
}
