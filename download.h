#ifndef DOWNLOAD_H
#define DOWNLOAD_H

#include <QObject>
#include <QFile>
#include <QString>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QDebug>
#include <QMessageBox>
class Download : public QObject
{
    Q_OBJECT
public:
    explicit Download(QObject *parent = 0);
    void download_file();

signals:

public slots:
    void readContent();
    void replyFinished(QNetworkReply*);
    void loadError(QNetworkReply::NetworkError);

private:
    QFile *fp; //需要上传的文件的指针
    QNetworkReply *reply;//ftp返回的上传结果
};

#endif // DOWNLOAD_H
