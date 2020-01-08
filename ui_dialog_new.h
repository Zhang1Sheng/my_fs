/********************************************************************************
** Form generated from reading UI file 'dialog_new.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_NEW_H
#define UI_DIALOG_NEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_new
{
public:
    QPushButton *bt_confirm;
    QPushButton *bt_concel;
    QPushButton *bt_selectfile;
    QPushButton *bt_path;
    QTextEdit *text_path;
    QLabel *label;
    QTreeWidget *fileList;

    void setupUi(QDialog *Dialog_new)
    {
        if (Dialog_new->objectName().isEmpty())
            Dialog_new->setObjectName(QStringLiteral("Dialog_new"));
        Dialog_new->resize(674, 485);
        bt_confirm = new QPushButton(Dialog_new);
        bt_confirm->setObjectName(QStringLiteral("bt_confirm"));
        bt_confirm->setGeometry(QRect(130, 380, 101, 41));
        bt_concel = new QPushButton(Dialog_new);
        bt_concel->setObjectName(QStringLiteral("bt_concel"));
        bt_concel->setGeometry(QRect(420, 380, 101, 41));
        bt_selectfile = new QPushButton(Dialog_new);
        bt_selectfile->setObjectName(QStringLiteral("bt_selectfile"));
        bt_selectfile->setGeometry(QRect(30, 120, 93, 28));
        bt_path = new QPushButton(Dialog_new);
        bt_path->setObjectName(QStringLiteral("bt_path"));
        bt_path->setGeometry(QRect(80, 310, 93, 28));
        text_path = new QTextEdit(Dialog_new);
        text_path->setObjectName(QStringLiteral("text_path"));
        text_path->setGeometry(QRect(210, 310, 391, 31));
        label = new QLabel(Dialog_new);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 245, 411, 31));
        fileList = new QTreeWidget(Dialog_new);
        fileList->setObjectName(QStringLiteral("fileList"));
        fileList->setGeometry(QRect(160, 30, 481, 221));
        fileList->setMinimumSize(QSize(481, 0));
        fileList->setMaximumSize(QSize(481, 16777215));
        fileList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        retranslateUi(Dialog_new);

        QMetaObject::connectSlotsByName(Dialog_new);
    } // setupUi

    void retranslateUi(QDialog *Dialog_new)
    {
        Dialog_new->setWindowTitle(QApplication::translate("Dialog_new", "Dialog", 0));
        bt_confirm->setText(QApplication::translate("Dialog_new", "\347\241\256\350\256\244", 0));
        bt_concel->setText(QApplication::translate("Dialog_new", "\345\217\226\346\266\210", 0));
        bt_selectfile->setText(QApplication::translate("Dialog_new", "\351\200\211\346\213\251\346\226\207\344\273\266", 0));
        bt_path->setText(QApplication::translate("Dialog_new", "\350\256\276\347\275\256\350\267\257\345\276\204", 0));
        label->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = fileList->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("Dialog_new", "\344\277\256\346\224\271\346\227\245\346\234\237", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("Dialog_new", "\345\244\247\345\260\217", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("Dialog_new", "\346\226\207\344\273\266", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_new: public Ui_Dialog_new {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_NEW_H
