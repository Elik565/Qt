/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextBrowser *FileTextBrowser;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *LoadButton;
    QPushButton *EraseButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *TextLineEdit;
    QPushButton *MessageButton;
    QPushButton *SaveButton;
    QWidget *tab_3;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *NetworkLineEdit;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *RequestButton;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QTextBrowser *NetworkTextBrowser;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(631, 428);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 621, 421));
        tabWidget->setAutoFillBackground(true);
        tab_1 = new QWidget();
        tab_1->setObjectName("tab_1");
        verticalLayoutWidget = new QWidget(tab_1);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 90, 481, 191));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(5, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        FileTextBrowser = new QTextBrowser(verticalLayoutWidget);
        FileTextBrowser->setObjectName("FileTextBrowser");

        verticalLayout_2->addWidget(FileTextBrowser);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        LoadButton = new QPushButton(verticalLayoutWidget);
        LoadButton->setObjectName("LoadButton");

        horizontalLayout_3->addWidget(LoadButton);

        EraseButton = new QPushButton(verticalLayoutWidget);
        EraseButton->setObjectName("EraseButton");

        horizontalLayout_3->addWidget(EraseButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayoutWidget_2 = new QWidget(tab_1);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 0, 475, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        TextLineEdit = new QLineEdit(verticalLayoutWidget_2);
        TextLineEdit->setObjectName("TextLineEdit");

        horizontalLayout->addWidget(TextLineEdit);


        horizontalLayout_2->addLayout(horizontalLayout);

        MessageButton = new QPushButton(verticalLayoutWidget_2);
        MessageButton->setObjectName("MessageButton");

        horizontalLayout_2->addWidget(MessageButton);

        SaveButton = new QPushButton(verticalLayoutWidget_2);
        SaveButton->setObjectName("SaveButton");

        horizontalLayout_2->addWidget(SaveButton);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab_1, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayoutWidget_3 = new QWidget(tab_3);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(-1, -1, 611, 51));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName("label_3");

        horizontalLayout_5->addWidget(label_3);

        NetworkLineEdit = new QLineEdit(verticalLayoutWidget_3);
        NetworkLineEdit->setObjectName("NetworkLineEdit");

        horizontalLayout_5->addWidget(NetworkLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalLayoutWidget_4 = new QWidget(tab_3);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(0, 50, 611, 41));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        RequestButton = new QPushButton(verticalLayoutWidget_4);
        RequestButton->setObjectName("RequestButton");

        horizontalLayout_6->addWidget(RequestButton, 0, Qt::AlignmentFlag::AlignLeft);


        verticalLayout_4->addLayout(horizontalLayout_6);

        verticalLayoutWidget_5 = new QWidget(tab_3);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(0, 90, 611, 131));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_5);
        label_4->setObjectName("label_4");

        verticalLayout_5->addWidget(label_4, 0, Qt::AlignmentFlag::AlignTop);

        NetworkTextBrowser = new QTextBrowser(verticalLayoutWidget_5);
        NetworkTextBrowser->setObjectName("NetworkTextBrowser");

        verticalLayout_5->addWidget(NetworkTextBrowser);

        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260: ", nullptr));
        LoadButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        EraseButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\265\320\272\321\201\321\202: ", nullptr));
        MessageButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
        SaveButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 url:", nullptr));
        RequestButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\262\320\265\321\202 \320\275\320\260 \320\267\320\260\320\277\321\200\320\276\321\201:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
