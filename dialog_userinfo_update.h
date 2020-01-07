#ifndef DIALOG_USERINFO_UPDATE_H
#define DIALOG_USERINFO_UPDATE_H

#include <QDialog>

namespace Ui {
class Dialog_UserInfo_update;
}

class Dialog_UserInfo_update : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_UserInfo_update(QWidget *parent = 0);
    ~Dialog_UserInfo_update();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Dialog_UserInfo_update *ui;
};

#endif // DIALOG_USERINFO_UPDATE_H
