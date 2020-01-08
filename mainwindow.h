#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog_download.h"
#include "dialog_userinfo_update.h"
#include "dialoglogin.h"
#include "dialog_new.h"
#include "dialoglogin.h"
#include "upload.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void get_ftp_file_data();

private slots:
    void on_new_work_button_clicked();
    void on_load_button_clicked();
    void on_user_info_clicked();
    void on_set_load_speed_clicked();
    void on_user_login_btn_clicked();
    void on_up_button_clicked();

private:
    Ui::MainWindow *ui;
    Dialog_download *w;
    Dialog_UserInfo_update *user;
    Dialog_new *new_work;
    DialogLogin *login;
    upload  *file_up;

};

#endif // MAINWINDOW_H
