#include "download.h"

Download::Download(QObject *parent) : QObject(parent)
{

}

void Download::download_file()
{
    fp= new QFile("D:/test3.txt");
    fp->open(QIODevice::WriteOnly);
    QNetworkAccessManager *accessManager = new QNetworkAccessManager(this);
    accessManager->setNetworkAccessible(QNetworkAccessManager::Accessible);
    QString path ="ftp://192.168.153.1/test3.txt";//文件在在站点上的路径
    int portNumber = 21;
    QUrl url(path);
    url.setPort(portNumber);
    QNetworkRequest request(url);
    reply = accessManager->get(request);
    qDebug() << "确认下载！";
    qDebug()<<reply->readAll();
    connect((QObject *)reply, SIGNAL(readyRead()), this, SLOT(readContent()));
    connect(accessManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
    connect(reply, SIGNAL(error(QNetworkReply::NetworkError)),this,SLOT(loadError(QNetworkReply::NetworkError)));



}

void Download::readContent()    //下载时向本地文件中写入数据
{
    qDebug()<<"下载中";
    fp->write(reply->readAll());
}
void Download::replyFinished(QNetworkReply*)    //删除指针，更新和关闭文件
{
    if(reply->error() == QNetworkReply::NoError)
        {
            reply->deleteLater();
            fp->flush();
            fp->close();
            qDebug()<<"下载成功";
        }
        else
        {
            QMessageBox::critical(NULL, "Error", "Failed!!!");
        }
}
void Download::loadError(QNetworkReply::NetworkError)    //传输中的错误输出
{
     qDebug()<<"Error: "<<reply->error();
}
