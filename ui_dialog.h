/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QFontComboBox *text_file;
    QLabel *label_2;
    QFontComboBox *text_path;
    QPushButton *bt_sure;
    QPushButton *bt_close;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(563, 383);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 80, 41, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(11);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setMargin(0);
        text_file = new QFontComboBox(Dialog);
        text_file->setObjectName(QStringLiteral("text_file"));
        text_file->setGeometry(QRect(170, 80, 279, 22));
        text_file->setCursor(QCursor(Qt::BlankCursor));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 170, 81, 21));
        label_2->setFont(font);
        text_path = new QFontComboBox(Dialog);
        text_path->setObjectName(QStringLiteral("text_path"));
        text_path->setGeometry(QRect(170, 170, 279, 22));
        bt_sure = new QPushButton(Dialog);
        bt_sure->setObjectName(QStringLiteral("bt_sure"));
        bt_sure->setGeometry(QRect(140, 270, 93, 28));
        bt_close = new QPushButton(Dialog);
        bt_close->setObjectName(QStringLiteral("bt_close"));
        bt_close->setGeometry(QRect(320, 270, 93, 28));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", "\346\226\207\344\273\266", 0));
        text_file->setCurrentText(QApplication::translate("Dialog", "\350\257\267\351\200\211\346\213\251", 0));
        label_2->setText(QApplication::translate("Dialog", "\350\256\276\347\275\256\350\267\257\345\276\204", 0));
        text_path->setCurrentText(QApplication::translate("Dialog", "\350\257\267\351\200\211\346\213\251", 0));
        bt_sure->setText(QApplication::translate("Dialog", "\347\241\256\350\256\244", 0));
        bt_close->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
