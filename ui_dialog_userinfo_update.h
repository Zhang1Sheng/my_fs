/********************************************************************************
** Form generated from reading UI file 'dialog_userinfo_update.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_USERINFO_UPDATE_H
#define UI_DIALOG_USERINFO_UPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog_UserInfo_update
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_4;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QDialog *Dialog_UserInfo_update)
    {
        if (Dialog_UserInfo_update->objectName().isEmpty())
            Dialog_UserInfo_update->setObjectName(QStringLiteral("Dialog_UserInfo_update"));
        Dialog_UserInfo_update->resize(816, 554);
        label = new QLabel(Dialog_UserInfo_update);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 130, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221"));
        font.setPointSize(11);
        label->setFont(font);
        label_2 = new QLabel(Dialog_UserInfo_update);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(180, 130, 121, 31));
        label_2->setFont(font);
        label_3 = new QLabel(Dialog_UserInfo_update);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 200, 81, 31));
        label_3->setFont(font);
        textEdit = new QTextEdit(Dialog_UserInfo_update);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(180, 200, 241, 31));
        label_4 = new QLabel(Dialog_UserInfo_update);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 270, 81, 31));
        label_4->setFont(font);
        textEdit_2 = new QTextEdit(Dialog_UserInfo_update);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(180, 270, 241, 31));
        textEdit_3 = new QTextEdit(Dialog_UserInfo_update);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(180, 340, 241, 31));
        textEdit_4 = new QTextEdit(Dialog_UserInfo_update);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(180, 410, 241, 31));
        label_5 = new QLabel(Dialog_UserInfo_update);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 340, 81, 31));
        label_5->setFont(font);
        label_6 = new QLabel(Dialog_UserInfo_update);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 410, 81, 31));
        label_6->setFont(font);
        pushButton = new QPushButton(Dialog_UserInfo_update);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 500, 141, 31));
        pushButton_2 = new QPushButton(Dialog_UserInfo_update);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 500, 141, 31));
        label_7 = new QLabel(Dialog_UserInfo_update);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setEnabled(false);
        label_7->setGeometry(QRect(20, 10, 81, 31));
        label_7->setFont(font);
        label_8 = new QLabel(Dialog_UserInfo_update);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(-10, 50, 831, 20));
        label_8->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/huise_line);"));
        label_9 = new QLabel(Dialog_UserInfo_update);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 80, 72, 21));
        label_9->setFont(font);

        retranslateUi(Dialog_UserInfo_update);

        QMetaObject::connectSlotsByName(Dialog_UserInfo_update);
    } // setupUi

    void retranslateUi(QDialog *Dialog_UserInfo_update)
    {
        Dialog_UserInfo_update->setWindowTitle(QApplication::translate("Dialog_UserInfo_update", "\347\224\250\346\210\267\344\277\241\346\201\257\344\277\256\346\224\271", 0));
        label->setText(QApplication::translate("Dialog_UserInfo_update", "   \347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_2->setText(QApplication::translate("Dialog_UserInfo_update", "a1353s", 0));
        label_3->setText(QApplication::translate("Dialog_UserInfo_update", "   \345\216\237\345\257\206\347\240\201\357\274\232", 0));
        textEdit->setPlaceholderText(QApplication::translate("Dialog_UserInfo_update", "\350\257\267\350\276\223\345\205\245\346\227\247\345\257\206\347\240\201", 0));
        label_4->setText(QApplication::translate("Dialog_UserInfo_update", "   \346\226\260\345\257\206\347\240\201\357\274\232", 0));
        textEdit_2->setPlaceholderText(QApplication::translate("Dialog_UserInfo_update", "\350\257\267\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", 0));
        textEdit_3->setPlaceholderText(QApplication::translate("Dialog_UserInfo_update", "\344\270\215\351\234\200\350\246\201\344\277\256\346\224\271\350\257\267\345\277\275\347\225\245", 0));
        textEdit_4->setPlaceholderText(QApplication::translate("Dialog_UserInfo_update", "138xxxxxx5212", 0));
        label_5->setText(QApplication::translate("Dialog_UserInfo_update", "\350\201\224\347\263\273\344\272\272\345\220\215\357\274\232", 0));
        label_6->setText(QApplication::translate("Dialog_UserInfo_update", "\350\201\224\347\263\273\346\226\271\345\274\217\357\274\232", 0));
        pushButton->setText(QApplication::translate("Dialog_UserInfo_update", "\344\277\256\346\224\271", 0));
        pushButton_2->setText(QApplication::translate("Dialog_UserInfo_update", "\345\217\226\346\266\210", 0));
        label_7->setText(QApplication::translate("Dialog_UserInfo_update", "\344\277\241\346\201\257\344\277\256\346\224\271", 0));
        label_8->setText(QString());
        label_9->setText(QApplication::translate("Dialog_UserInfo_update", "\344\277\256\346\224\271\347\224\250\346\210\267", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_UserInfo_update: public Ui_Dialog_UserInfo_update {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_USERINFO_UPDATE_H
