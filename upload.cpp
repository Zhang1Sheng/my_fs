#include "upload.h"
#include "ui_upload.h"
#include<QFileDialog>
#include <QDebug>

upload::upload(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::upload)
{
    ui->setupUi(this);
}

upload::~upload()
{
    delete ui;
}

void upload::on_bt_upload_cancel_clicked()
{
    this->close();
}

void upload::on_bt_upload_path_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("选择文件"),"E:/STUDY/SoftwarePractice/Ui_Program/Upload",tr("Image(*.jpg *.xmp *.bmp);;Text(*.txt)"));
    qDebug()<<"filename : "<<fileName;
    ui->text_upload_path->setText(fileName);

}

void upload::on_bt_upload_confirm_clicked()
{
    QString path = "ftp://192.168.153.1/";
    int portNumber = 21;
    qDebug() << "确认上传！";
    QString filepath = ui->text_upload_path->toPlainText();
    qDebug() << filepath;
    fp = new QFile(filepath);
    fp -> open(QIODevice::ReadOnly);
    QByteArray byte_file = fp -> readAll();
    QNetworkAccessManager *accessManager = new QNetworkAccessManager(this);
    accessManager->setNetworkAccessible(QNetworkAccessManager::Accessible);

    //从文件路径中得到文件名
    QFileInfo info = QFileInfo(filepath);
    QString filename = info.fileName();
    qDebug() << "文件名字为：" << filename;
    QUrl url(path + filename);
    url.setPort(portNumber);
    QNetworkRequest request(url);
    reply = accessManager->put(request, byte_file);
    connect(accessManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
    connect(reply, SIGNAL(error(QNetworkReply::NetworkError)),this,SLOT(loadError(QNetworkReply::NetworkError)));
}


void upload::replyFinished(QNetworkReply*)    //删除指针，更新和关闭文件
{
    if(reply->error() == QNetworkReply::NoError)
        {
            reply->deleteLater();
            fp->flush();
            fp->close();
            QMessageBox::information(NULL, tr("提示"), tr("上传成功"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        }
        else
        {
            QMessageBox::critical(NULL, tr("Error"), "Failed!!!");
        }
}

void upload::loadError(QNetworkReply::NetworkError)    //传输中的错误输出
{
     qDebug()<<"Error: "<<reply->error();
}

