#ifndef DIALOG_DOWNLOAD_H
#define DIALOG_DOWNLOAD_H

#include <QDialog>

namespace Ui {
class Dialog_download;
}

class Dialog_download : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_download(QWidget *parent = 0);
    ~Dialog_download();

private slots:
    void on_pushButton_2_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_textEdit_textChanged();

private:
    Ui::Dialog_download *ui;
};

#endif // DIALOG_DOWNLOAD_H
