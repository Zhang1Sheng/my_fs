#ifndef UPLOAD_H
#define UPLOAD_H

#include <QDialog>
#include <QFile>
#include <QString>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QDebug>
#include <QMessageBox>
#include <QProgressBar>
#include <QFileInfo>

namespace Ui {
class upload;
}

class upload : public QDialog
{
    Q_OBJECT

public:
    explicit upload(QWidget *parent = 0);
    ~upload();

private slots:
    void on_bt_upload_cancel_clicked();

    void on_bt_upload_path_clicked();

    void on_bt_upload_confirm_clicked();
    void replyFinished(QNetworkReply*);
    void loadError(QNetworkReply::NetworkError);

private:
    Ui::upload *ui;
    QFile *fp; //需要上传的文件的指针
    QNetworkReply *reply;
};

#endif // UPLOAD_H
