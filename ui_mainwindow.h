/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QWidget *widget_3;
    QTableWidget *tableWidget;
    QWidget *widget_2;
    QPushButton *new_work_button;
    QPushButton *load_button;
    QPushButton *up_button;
    QPushButton *stop_button;
    QPushButton *delete_button;
    QWidget *widget_4;
    QWidget *widget_5;
    QLineEdit *search_text_2;
    QPushButton *search_button_2;
    QPushButton *already_flie_but_2;
    QPushButton *delete_file_but_2;
    QPushButton *current_file_load_btn_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *widget;
    QLineEdit *search_text;
    QPushButton *search_button;
    QPushButton *already_flie_but;
    QPushButton *delete_file_but;
    QPushButton *current_file_load_btn;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget_6;
    QPushButton *new_work_button_2;
    QPushButton *load_button_2;
    QPushButton *up_button_2;
    QPushButton *stop_button_2;
    QPushButton *delete_button_2;
    QPushButton *pushButton_7;
    QPushButton *user_info;
    QPushButton *pushButton_8;
    QPushButton *set_load_speed;
    QPushButton *user_login_btn;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(704, 476);
        MainWindow->setIconSize(QSize(20, 20));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        tableWidget = new QTableWidget(widget_3);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 8)
            tableWidget->setRowCount(8);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEnabled(false);
        tableWidget->setGeometry(QRect(150, 90, 521, 291));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setRowCount(8);
        tableWidget->setColumnCount(5);
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(150, 10, 421, 71));
        new_work_button = new QPushButton(widget_2);
        new_work_button->setObjectName(QStringLiteral("new_work_button"));
        new_work_button->setGeometry(QRect(10, 10, 71, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/new_load.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        new_work_button->setIcon(icon);
        new_work_button->setIconSize(QSize(70, 70));
        load_button = new QPushButton(widget_2);
        load_button->setObjectName(QStringLiteral("load_button"));
        load_button->setGeometry(QRect(180, 10, 61, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/load.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        load_button->setIcon(icon1);
        load_button->setIconSize(QSize(60, 50));
        up_button = new QPushButton(widget_2);
        up_button->setObjectName(QStringLiteral("up_button"));
        up_button->setGeometry(QRect(100, 10, 61, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/up.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        up_button->setIcon(icon2);
        up_button->setIconSize(QSize(60, 60));
        stop_button = new QPushButton(widget_2);
        stop_button->setObjectName(QStringLiteral("stop_button"));
        stop_button->setGeometry(QRect(260, 10, 51, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/stop.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        stop_button->setIcon(icon3);
        stop_button->setIconSize(QSize(60, 60));
        delete_button = new QPushButton(widget_2);
        delete_button->setObjectName(QStringLiteral("delete_button"));
        delete_button->setGeometry(QRect(330, 10, 41, 41));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/delete.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        delete_button->setIcon(icon4);
        delete_button->setIconSize(QSize(56, 50));
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(-170, -30, 181, 191));
        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(-250, -60, 261, 131));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        widget_5->setFont(font);
        widget_5->setStyleSheet(QStringLiteral(""));
        search_text_2 = new QLineEdit(widget_5);
        search_text_2->setObjectName(QStringLiteral("search_text_2"));
        search_text_2->setGeometry(QRect(40, 110, 81, 20));
        search_button_2 = new QPushButton(widget_5);
        search_button_2->setObjectName(QStringLiteral("search_button_2"));
        search_button_2->setEnabled(true);
        search_button_2->setGeometry(QRect(10, 110, 21, 21));
        QIcon icon5;
        icon5.addFile(QStringLiteral("img/search.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        search_button_2->setIcon(icon5);
        search_button_2->setIconSize(QSize(25, 30));
        already_flie_but_2 = new QPushButton(widget_5);
        already_flie_but_2->setObjectName(QStringLiteral("already_flie_but_2"));
        already_flie_but_2->setGeometry(QRect(40, 180, 81, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(9);
        font1.setKerning(false);
        already_flie_but_2->setFont(font1);
        already_flie_but_2->setLayoutDirection(Qt::RightToLeft);
        already_flie_but_2->setIconSize(QSize(40, 30));
        delete_file_but_2 = new QPushButton(widget_5);
        delete_file_but_2->setObjectName(QStringLiteral("delete_file_but_2"));
        delete_file_but_2->setGeometry(QRect(40, 210, 81, 23));
        delete_file_but_2->setIconSize(QSize(40, 30));
        current_file_load_btn_2 = new QPushButton(widget_5);
        current_file_load_btn_2->setObjectName(QStringLiteral("current_file_load_btn_2"));
        current_file_load_btn_2->setGeometry(QRect(40, 140, 81, 23));
        pushButton_4 = new QPushButton(widget_5);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 140, 21, 23));
        QIcon icon6;
        icon6.addFile(QStringLiteral("img/curreng_load.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon6);
        pushButton_4->setIconSize(QSize(30, 30));
        pushButton_5 = new QPushButton(widget_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 180, 21, 23));
        QIcon icon7;
        icon7.addFile(QStringLiteral("img/file_load.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon7);
        pushButton_5->setIconSize(QSize(22, 22));
        pushButton_6 = new QPushButton(widget_5);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 210, 21, 23));
        QIcon icon8;
        icon8.addFile(QStringLiteral("img/delete_but.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon8);
        pushButton_6->setIconSize(QSize(30, 30));
        widget = new QWidget(widget_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 131, 321));
        widget->setFont(font);
        widget->setStyleSheet(QStringLiteral(""));
        search_text = new QLineEdit(widget);
        search_text->setObjectName(QStringLiteral("search_text"));
        search_text->setGeometry(QRect(40, 110, 91, 20));
        search_button = new QPushButton(widget);
        search_button->setObjectName(QStringLiteral("search_button"));
        search_button->setEnabled(true);
        search_button->setGeometry(QRect(10, 110, 21, 21));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/search.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        search_button->setIcon(icon9);
        search_button->setIconSize(QSize(25, 30));
        already_flie_but = new QPushButton(widget);
        already_flie_but->setObjectName(QStringLiteral("already_flie_but"));
        already_flie_but->setGeometry(QRect(40, 180, 91, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Algerian"));
        font2.setPointSize(9);
        font2.setKerning(false);
        already_flie_but->setFont(font2);
        already_flie_but->setLayoutDirection(Qt::RightToLeft);
        already_flie_but->setIconSize(QSize(40, 30));
        delete_file_but = new QPushButton(widget);
        delete_file_but->setObjectName(QStringLiteral("delete_file_but"));
        delete_file_but->setGeometry(QRect(40, 210, 91, 23));
        QFont font3;
        font3.setPointSize(8);
        delete_file_but->setFont(font3);
        delete_file_but->setIconSize(QSize(40, 30));
        current_file_load_btn = new QPushButton(widget);
        current_file_load_btn->setObjectName(QStringLiteral("current_file_load_btn"));
        current_file_load_btn->setGeometry(QRect(40, 140, 91, 23));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 140, 21, 23));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/curreng_load.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon10);
        pushButton->setIconSize(QSize(30, 30));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 180, 21, 23));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/prefix1/file_load.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon11);
        pushButton_2->setIconSize(QSize(22, 22));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 210, 21, 23));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/prefix1/delete_but.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon12);
        pushButton_3->setIconSize(QSize(30, 30));
        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(322, -248, 326, 202));
        new_work_button_2 = new QPushButton(widget_6);
        new_work_button_2->setObjectName(QStringLiteral("new_work_button_2"));
        new_work_button_2->setGeometry(QRect(10, 10, 71, 41));
        QIcon icon13;
        icon13.addFile(QStringLiteral("img/new_load.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        new_work_button_2->setIcon(icon13);
        new_work_button_2->setIconSize(QSize(70, 70));
        load_button_2 = new QPushButton(widget_6);
        load_button_2->setObjectName(QStringLiteral("load_button_2"));
        load_button_2->setGeometry(QRect(100, 10, 61, 41));
        QIcon icon14;
        icon14.addFile(QStringLiteral("img/load.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        load_button_2->setIcon(icon14);
        load_button_2->setIconSize(QSize(60, 50));
        up_button_2 = new QPushButton(widget_6);
        up_button_2->setObjectName(QStringLiteral("up_button_2"));
        up_button_2->setGeometry(QRect(180, 10, 61, 41));
        QIcon icon15;
        icon15.addFile(QStringLiteral("img/up.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        up_button_2->setIcon(icon15);
        up_button_2->setIconSize(QSize(60, 60));
        stop_button_2 = new QPushButton(widget_6);
        stop_button_2->setObjectName(QStringLiteral("stop_button_2"));
        stop_button_2->setGeometry(QRect(260, 10, 51, 41));
        QIcon icon16;
        icon16.addFile(QStringLiteral("img/stop.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        stop_button_2->setIcon(icon16);
        stop_button_2->setIconSize(QSize(60, 60));
        delete_button_2 = new QPushButton(widget_6);
        delete_button_2->setObjectName(QStringLiteral("delete_button_2"));
        delete_button_2->setGeometry(QRect(330, 10, 51, 41));
        QIcon icon17;
        icon17.addFile(QStringLiteral("img/delete.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        delete_button_2->setIcon(icon17);
        delete_button_2->setIconSize(QSize(52, 52));
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 240, 16, 23));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/new/prefix1/user.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon18);
        pushButton_7->setIconSize(QSize(25, 25));
        user_info = new QPushButton(widget);
        user_info->setObjectName(QStringLiteral("user_info"));
        user_info->setGeometry(QRect(40, 240, 91, 23));
        user_info->setFont(font3);
        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 270, 21, 23));
        QIcon icon19;
        icon19.addFile(QStringLiteral("img/load_but.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon19);
        pushButton_8->setIconSize(QSize(30, 30));
        set_load_speed = new QPushButton(widget);
        set_load_speed->setObjectName(QStringLiteral("set_load_speed"));
        set_load_speed->setGeometry(QRect(40, 270, 91, 23));
        user_login_btn = new QPushButton(widget);
        user_login_btn->setObjectName(QStringLiteral("user_login_btn"));
        user_login_btn->setGeometry(QRect(40, 30, 61, 51));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/new/prefix1/user_img.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        user_login_btn->setIcon(icon20);
        user_login_btn->setIconSize(QSize(70, 70));

        gridLayout_3->addWidget(widget_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\347\274\226\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\247\345\260\217", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\344\270\213\350\275\275\350\277\233\345\272\246", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\345\267\262\344\270\213\350\275\275\346\227\266\351\227\264", 0));
        new_work_button->setText(QString());
        load_button->setText(QString());
        up_button->setText(QString());
        stop_button->setText(QString());
        delete_button->setText(QString());
        search_button_2->setText(QString());
        already_flie_but_2->setText(QApplication::translate("MainWindow", "\345\267\262\344\270\213\350\275\275", 0));
        delete_file_but_2->setText(QApplication::translate("MainWindow", "\345\267\262\345\210\240\351\231\244\347\232\204\344\273\273\345\212\241", 0));
        current_file_load_btn_2->setText(QApplication::translate("MainWindow", "\346\255\243\345\234\250\344\270\213\350\275\275", 0));
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        search_button->setText(QString());
        already_flie_but->setText(QApplication::translate("MainWindow", "\345\267\262\344\270\213\350\275\275", 0));
        delete_file_but->setText(QApplication::translate("MainWindow", "\345\267\262\345\210\240\351\231\244\347\232\204\344\273\273\345\212\241", 0));
        current_file_load_btn->setText(QApplication::translate("MainWindow", "\346\255\243\345\234\250\344\270\213\350\275\275", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        new_work_button_2->setText(QString());
        load_button_2->setText(QString());
        up_button_2->setText(QString());
        stop_button_2->setText(QString());
        delete_button_2->setText(QString());
        pushButton_7->setText(QString());
        user_info->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\344\277\241\346\201\257\347\256\241\347\220\206", 0));
        pushButton_8->setText(QString());
        set_load_speed->setText(QApplication::translate("MainWindow", "\344\270\213\350\275\275\350\256\276\347\275\256", 0));
        user_login_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
