#include "dialog_download.h"
#include "ui_dialog_download.h"

Dialog_download::Dialog_download(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_download)
{
    ui->setupUi(this);
}

Dialog_download::~Dialog_download()
{
    delete ui;
}

void Dialog_download::on_pushButton_2_clicked()
{
     this->close();
}


void Dialog_download::on_horizontalSlider_valueChanged(int value)
{
    //textEdit的内容为字符类型，而slider的值为int型，所以需要转化
    QString text;
    ui->textEdit->setText(text.setNum(value));
}

void Dialog_download::on_textEdit_textChanged()
{
    //textEdit的内容为字符类型，而slider的值为int型，所以需要转化
    QString text;
    text=ui->textEdit->toPlainText();
    int pos=text.toInt();
    ui->horizontalSlider->setValue(pos);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::End);
    ui->textEdit->setTextCursor(cursor);
}


