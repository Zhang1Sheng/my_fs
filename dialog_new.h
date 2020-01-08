#ifndef DIALOG_NEW_H
#define DIALOG_NEW_H
#include<QString>
#include<QHash>
#include<QDialog>
#include<Qftp>
class QFtp;
class QFile;
class QUrlInfo;
class QTreeWidgetItem;
namespace Ui {
class Dialog_new;
}

class Dialog_new : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_new(QWidget *parent = 0);
    ~Dialog_new();

private slots:
    void on_bt_path_clicked();
    void on_bt_concel_clicked();
    void ftpCommandStarted(int);
    void ftpCommandFinished(int,bool);
    //将服务器上的文件添加到Tree Widget部件中
    void addToList(const QUrlInfo &urlInfo);

private:
    Ui::Dialog_new *ui;
    QFtp *ftp;//存储一个路径是否为目录信息
    QHash <QString,QString>  isDirectory;
        //存储现在的路径
    QString currentPath;
        //表示下载的文件
    QFile *file;

};

#endif // DIALOG_NEW_H
