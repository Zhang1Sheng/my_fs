#include "dialog_download.h"
#include "dialog_userinfo_update.h"
#include "upload.h"
#include "dialog_new.h"
#include "dialoglogin.h"
#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow c;
    c.show();

    return a.exec();
}
