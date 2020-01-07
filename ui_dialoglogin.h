/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QFrame *frame;
    QFrame *frame_2;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName(QStringLiteral("DialogLogin"));
        DialogLogin->resize(635, 442);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogLogin->sizePolicy().hasHeightForWidth());
        DialogLogin->setSizePolicy(sizePolicy);
        DialogLogin->setStyleSheet(QStringLiteral("background-color: rgb(212, 255, 255);"));
        label = new QLabel(DialogLogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 0, 161, 121));
        label->setStyleSheet(QStringLiteral("image: url(:/user_head.png);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/user_head.png")));
        label_2 = new QLabel(DialogLogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 130, 151, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        textEdit = new QTextEdit(DialogLogin);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(190, 200, 271, 31));
        textEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(DialogLogin);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(110, 190, 51, 51));
        frame->setStyleSheet(QStringLiteral("background-image: url(:/user.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(DialogLogin);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(110, 270, 51, 51));
        frame_2->setStyleSheet(QStringLiteral("background-image: url(:/password.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        textEdit_2 = new QTextEdit(DialogLogin);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(190, 280, 271, 31));
        textEdit_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(DialogLogin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 350, 271, 28));
        pushButton->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\347\255\211\347\272\277\";\n"
"background-color: rgb(85, 170, 255);"));

        retranslateUi(DialogLogin);

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QApplication::translate("DialogLogin", "Dialog", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("DialogLogin", "Fair Share", 0));
        textEdit->setHtml(QApplication::translate("DialogLogin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        textEdit->setPlaceholderText(QApplication::translate("DialogLogin", "\347\224\250\346\210\267\345\220\215", 0));
        textEdit_2->setHtml(QApplication::translate("DialogLogin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        textEdit_2->setPlaceholderText(QApplication::translate("DialogLogin", "\345\257\206\347\240\201", 0));
        pushButton->setText(QApplication::translate("DialogLogin", "\347\231\273\351\231\206", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
