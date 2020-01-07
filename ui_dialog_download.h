/********************************************************************************
** Form generated from reading UI file 'dialog_download.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DOWNLOAD_H
#define UI_DIALOG_DOWNLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog_download
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSlider *horizontalSlider;
    QTextEdit *textEdit;
    QLabel *label_3;
    QLabel *label_7;

    void setupUi(QDialog *Dialog_download)
    {
        if (Dialog_download->objectName().isEmpty())
            Dialog_download->setObjectName(QStringLiteral("Dialog_download"));
        Dialog_download->resize(700, 451);
        label = new QLabel(Dialog_download);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 110, 91, 16));
        label_2 = new QLabel(Dialog_download);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(560, 180, 41, 16));
        pushButton = new QPushButton(Dialog_download);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 350, 191, 41));
        pushButton_2 = new QPushButton(Dialog_download);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 350, 191, 41));
        horizontalSlider = new QSlider(Dialog_download);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(140, 160, 301, 22));
        horizontalSlider->setMinimum(60);
        horizontalSlider->setMaximum(10240);
        horizontalSlider->setOrientation(Qt::Horizontal);
        textEdit = new QTextEdit(Dialog_download);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(460, 170, 91, 31));
        label_3 = new QLabel(Dialog_download);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 190, 31, 16));
        label_7 = new QLabel(Dialog_download);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(420, 190, 41, 16));

        retranslateUi(Dialog_download);

        QMetaObject::connectSlotsByName(Dialog_download);
    } // setupUi

    void retranslateUi(QDialog *Dialog_download)
    {
        Dialog_download->setWindowTitle(QApplication::translate("Dialog_download", "\350\256\276\347\275\256\344\270\213\350\275\275\351\200\237\345\272\246", 0));
        label->setText(QApplication::translate("Dialog_download", "\346\234\200\345\244\247\344\270\213\350\275\275\351\200\237\345\272\246", 0));
        label_2->setText(QApplication::translate("Dialog_download", "KB/S", 0));
        pushButton->setText(QApplication::translate("Dialog_download", "\347\241\256\350\256\244", 0));
        pushButton_2->setText(QApplication::translate("Dialog_download", "\345\217\226\346\266\210", 0));
        label_3->setText(QApplication::translate("Dialog_download", "60KB", 0));
        label_7->setText(QApplication::translate("Dialog_download", "10MB", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_download: public Ui_Dialog_download {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DOWNLOAD_H
