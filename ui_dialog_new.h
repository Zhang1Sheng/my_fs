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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog_new
{
public:
    QPushButton *bt_confirm;
    QPushButton *bt_concel;
    QPushButton *bt_selectfile;
    QTableWidget *tableWidget;
    QPushButton *bt_path;
    QTextEdit *text_path;

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
        bt_selectfile->setGeometry(QRect(80, 120, 93, 28));
        tableWidget = new QTableWidget(Dialog_new);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(210, 40, 391, 192));
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        bt_path = new QPushButton(Dialog_new);
        bt_path->setObjectName(QStringLiteral("bt_path"));
        bt_path->setGeometry(QRect(80, 310, 93, 28));
        text_path = new QTextEdit(Dialog_new);
        text_path->setObjectName(QStringLiteral("text_path"));
        text_path->setGeometry(QRect(210, 300, 391, 41));

        retranslateUi(Dialog_new);

        QMetaObject::connectSlotsByName(Dialog_new);
    } // setupUi

    void retranslateUi(QDialog *Dialog_new)
    {
        Dialog_new->setWindowTitle(QApplication::translate("Dialog_new", "Dialog", 0));
        bt_confirm->setText(QApplication::translate("Dialog_new", "\347\241\256\350\256\244", 0));
        bt_concel->setText(QApplication::translate("Dialog_new", "\345\217\226\346\266\210", 0));
        bt_selectfile->setText(QApplication::translate("Dialog_new", "\351\200\211\346\213\251\346\226\207\344\273\266", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Dialog_new", "\346\226\207\344\273\266\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Dialog_new", "\346\226\260\345\273\272\345\210\227", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Dialog_new", "\346\226\207\344\273\266\345\244\247\345\260\217", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("Dialog_new", "1", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("Dialog_new", "2", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("Dialog_new", "3", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("Dialog_new", "4", 0));
        bt_path->setText(QApplication::translate("Dialog_new", "\350\256\276\347\275\256\350\267\257\345\276\204", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_new: public Ui_Dialog_new {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_NEW_H
