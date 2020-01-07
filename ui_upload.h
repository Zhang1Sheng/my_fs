/********************************************************************************
** Form generated from reading UI file 'upload.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPLOAD_H
#define UI_UPLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_upload
{
public:
    QPushButton *bt_upload_path;
    QPushButton *bt_upload_confirm;
    QPushButton *bt_upload_cancel;
    QTextEdit *text_upload_path;

    void setupUi(QDialog *upload)
    {
        if (upload->objectName().isEmpty())
            upload->setObjectName(QStringLiteral("upload"));
        upload->resize(594, 414);
        bt_upload_path = new QPushButton(upload);
        bt_upload_path->setObjectName(QStringLiteral("bt_upload_path"));
        bt_upload_path->setGeometry(QRect(420, 110, 151, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font.setPointSize(12);
        bt_upload_path->setFont(font);
        bt_upload_confirm = new QPushButton(upload);
        bt_upload_confirm->setObjectName(QStringLiteral("bt_upload_confirm"));
        bt_upload_confirm->setGeometry(QRect(110, 290, 111, 31));
        bt_upload_confirm->setFont(font);
        bt_upload_cancel = new QPushButton(upload);
        bt_upload_cancel->setObjectName(QStringLiteral("bt_upload_cancel"));
        bt_upload_cancel->setGeometry(QRect(330, 290, 111, 31));
        bt_upload_cancel->setFont(font);
        text_upload_path = new QTextEdit(upload);
        text_upload_path->setObjectName(QStringLiteral("text_upload_path"));
        text_upload_path->setGeometry(QRect(30, 110, 371, 31));

        retranslateUi(upload);

        QMetaObject::connectSlotsByName(upload);
    } // setupUi

    void retranslateUi(QDialog *upload)
    {
        upload->setWindowTitle(QApplication::translate("upload", "Dialog", 0));
        bt_upload_path->setText(QApplication::translate("upload", "\351\200\211\346\213\251\346\226\207\344\273\266\350\267\257\345\276\204", 0));
        bt_upload_confirm->setText(QApplication::translate("upload", "\347\241\256\345\256\232", 0));
        bt_upload_cancel->setText(QApplication::translate("upload", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class upload: public Ui_upload {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPLOAD_H
