#include "dialog_new.h"
#include "ui_dialog_new.h"
#include <QString>
#include <QFileDialog>
#include <QDebug>
#include <QFtp>
#include<QTreeWidgetItem>
Dialog_new::Dialog_new(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_new)
{
    ui->setupUi(this);
    ui->fileList->clear();
    currentPath.clear();
    isDirectory.clear();
    ftp=new QFtp(this);
    connect(ftp,SIGNAL(commandStarted(int)),this,SLOT(ftpCommandStarted(int)));
    connect(ftp,SIGNAL(commandFinished(int,bool)),this,SLOT(ftpCommandFinished(int,bool)));
    connect(ftp,SIGNAL(listInfo(QUrlInfo)),this,SLOT(addToList(QUrlInfo)));
    QString ftpServer ="192.168.153.1";
    ftp->connectToHost(ftpServer,21);
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

void Dialog_new::ftpCommandStarted(int)
{
    int id=ftp->currentCommand();
    switch (id) {
    case QFtp::ConnectToHost:
        ui->label->setText(tr("connecting to the qftp..."));
        break;
    case QFtp::Login:
        ui->label->setText(tr("logining ..."));
        break;
    case QFtp::Get:
        ui->label->setText(tr("loading ..."));
        break;
    case QFtp::Close:
        ui->label->setText(tr("run to close ..."));
    default:
        break;
    }
}

void Dialog_new::ftpCommandFinished(int,bool error)
{
    if(ftp->currentCommand()==QFtp::ConnectToHost){
        if(error)
            ui->label->setText(tr("connection has found error: %1").arg(ftp->errorString()));
        else
        ui->label->setText(tr("connecting successful"));
    }
    else if(ftp->currentCommand()==QFtp::Login){
        if(error)
            ui->label->setText(tr("login has found error: %1").arg(ftp->errorString()));
        else
            ui->label->setText(tr("login successful"));
    }
    else if(ftp->currentCommand()==QFtp::Get){
        if(error)
             ui->label->setText(tr("load has found error: %1").arg(ftp->errorString()));
        else{
             ui->label->setText(tr("load successful"));
             file->close();
        }

    }
    else if(ftp->currentCommand()==QFtp::List){
        if(isDirectory.isEmpty())
        {
//            ui->fileList->addTopLevelItem(new QTreeWidgetItem(QStringList()<fileList->setEnabled(false)>));
            ui->label->setText(tr("folder is empty"));
        }
    }
    else if(ftp->currentCommand()==QFtp::Close){
       ui->label->setText(tr("closed"));
    }


}

void Dialog_new::addToList(const QUrlInfo &urlInfo)
{
    QTreeWidgetItem *item=new QTreeWidgetItem;
    item->setText(0,urlInfo.name());
    item->setText(1,QString::number(urlInfo.size()));
    item->setText(2,urlInfo.lastModified().toString("yyyy-MM-dd"));
    QPixmap pixmap;
    item->setIcon(0,pixmap);
    qDebug()<<"0000000";
    isDirectory[urlInfo.name()]=urlInfo.isDir();
    ui->fileList->addTopLevelItem(item);
    if(! ui->fileList->currentItem()){
        ui->fileList->setCurrentItem(ui->fileList->topLevelItem(0));
        ui->fileList->setEnabled(true);
    }

}

