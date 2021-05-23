/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *serialReceivetextEdit;
    QTextEdit *serialSendtextEdit;
    QGroupBox *serialReceivegroupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *serialPortNamelabel;
    QLabel *serialBaudratelabel;
    QVBoxLayout *verticalLayout;
    QComboBox *serialPortNamecomboBox;
    QComboBox *serialBaudratecomboBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *serialHexDisplaycheckBox;
    QPushButton *serialCleanReceivepushButton;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *serialOpenradioButton;
    QPushButton *serialOnClickpushButton;
    QGroupBox *serialSendgroupBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *serialHexSendcheckBox;
    QPushButton *serialCleanSendpushButton;
    QPushButton *serialSendpushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        serialReceivetextEdit = new QTextEdit(centralwidget);
        serialReceivetextEdit->setObjectName(QString::fromUtf8("serialReceivetextEdit"));
        serialReceivetextEdit->setGeometry(QRect(10, 20, 771, 301));
        serialSendtextEdit = new QTextEdit(centralwidget);
        serialSendtextEdit->setObjectName(QString::fromUtf8("serialSendtextEdit"));
        serialSendtextEdit->setGeometry(QRect(370, 340, 411, 201));
        serialReceivegroupBox = new QGroupBox(centralwidget);
        serialReceivegroupBox->setObjectName(QString::fromUtf8("serialReceivegroupBox"));
        serialReceivegroupBox->setGeometry(QRect(20, 330, 171, 211));
        layoutWidget = new QWidget(serialReceivegroupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 154, 161));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        serialPortNamelabel = new QLabel(layoutWidget);
        serialPortNamelabel->setObjectName(QString::fromUtf8("serialPortNamelabel"));

        verticalLayout_2->addWidget(serialPortNamelabel);

        serialBaudratelabel = new QLabel(layoutWidget);
        serialBaudratelabel->setObjectName(QString::fromUtf8("serialBaudratelabel"));

        verticalLayout_2->addWidget(serialBaudratelabel);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        serialPortNamecomboBox = new QComboBox(layoutWidget);
        serialPortNamecomboBox->setObjectName(QString::fromUtf8("serialPortNamecomboBox"));

        verticalLayout->addWidget(serialPortNamecomboBox);

        serialBaudratecomboBox = new QComboBox(layoutWidget);
        serialBaudratecomboBox->setObjectName(QString::fromUtf8("serialBaudratecomboBox"));

        verticalLayout->addWidget(serialBaudratecomboBox);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        serialHexDisplaycheckBox = new QCheckBox(layoutWidget);
        serialHexDisplaycheckBox->setObjectName(QString::fromUtf8("serialHexDisplaycheckBox"));

        horizontalLayout->addWidget(serialHexDisplaycheckBox);

        serialCleanReceivepushButton = new QPushButton(layoutWidget);
        serialCleanReceivepushButton->setObjectName(QString::fromUtf8("serialCleanReceivepushButton"));

        horizontalLayout->addWidget(serialCleanReceivepushButton);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        serialOpenradioButton = new QRadioButton(layoutWidget);
        serialOpenradioButton->setObjectName(QString::fromUtf8("serialOpenradioButton"));

        horizontalLayout_2->addWidget(serialOpenradioButton);

        serialOnClickpushButton = new QPushButton(layoutWidget);
        serialOnClickpushButton->setObjectName(QString::fromUtf8("serialOnClickpushButton"));

        horizontalLayout_2->addWidget(serialOnClickpushButton);


        verticalLayout_4->addLayout(horizontalLayout_2);

        serialSendgroupBox = new QGroupBox(centralwidget);
        serialSendgroupBox->setObjectName(QString::fromUtf8("serialSendgroupBox"));
        serialSendgroupBox->setGeometry(QRect(199, 329, 141, 211));
        layoutWidget1 = new QWidget(serialSendgroupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 30, 95, 161));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        serialHexSendcheckBox = new QCheckBox(layoutWidget1);
        serialHexSendcheckBox->setObjectName(QString::fromUtf8("serialHexSendcheckBox"));

        verticalLayout_3->addWidget(serialHexSendcheckBox);

        serialCleanSendpushButton = new QPushButton(layoutWidget1);
        serialCleanSendpushButton->setObjectName(QString::fromUtf8("serialCleanSendpushButton"));

        verticalLayout_3->addWidget(serialCleanSendpushButton);

        serialSendpushButton = new QPushButton(layoutWidget1);
        serialSendpushButton->setObjectName(QString::fromUtf8("serialSendpushButton"));

        verticalLayout_3->addWidget(serialSendpushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        serialReceivegroupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\345\214\272", nullptr));
        serialPortNamelabel->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267", nullptr));
        serialBaudratelabel->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        serialHexDisplaycheckBox->setText(QCoreApplication::translate("MainWindow", "HEX", nullptr));
        serialCleanReceivepushButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\347\252\227\345\217\243", nullptr));
        serialOpenradioButton->setText(QString());
        serialOnClickpushButton->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        serialSendgroupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\217\221\345\260\204\345\214\272", nullptr));
        serialHexSendcheckBox->setText(QCoreApplication::translate("MainWindow", "HEX", nullptr));
        serialCleanSendpushButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\347\252\227\345\217\243", nullptr));
        serialSendpushButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
