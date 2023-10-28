/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *SignUp;
    QLabel *Pic;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *Username;
    QLineEdit *getUsername;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Email;
    QLineEdit *getEmail;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Password;
    QLineEdit *getPass;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Re_pass;
    QLineEdit *getRePass;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *onSubmit;
    QPushButton *signIn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(966, 741);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        SignUp = new QGroupBox(centralwidget);
        SignUp->setObjectName("SignUp");
        SignUp->setGeometry(QRect(40, 20, 761, 591));
        Pic = new QLabel(SignUp);
        Pic->setObjectName("Pic");
        Pic->setGeometry(QRect(30, 40, 661, 191));
        QFont font;
        font.setPointSize(15);
        Pic->setFont(font);
        widget = new QWidget(SignUp);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 300, 244, 140));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Username = new QLabel(widget);
        Username->setObjectName("Username");
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        Username->setFont(font1);

        horizontalLayout->addWidget(Username);

        getUsername = new QLineEdit(widget);
        getUsername->setObjectName("getUsername");

        horizontalLayout->addWidget(getUsername);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        Email = new QLabel(widget);
        Email->setObjectName("Email");
        Email->setFont(font1);

        horizontalLayout_2->addWidget(Email);

        getEmail = new QLineEdit(widget);
        getEmail->setObjectName("getEmail");

        horizontalLayout_2->addWidget(getEmail);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        Password = new QLabel(widget);
        Password->setObjectName("Password");
        Password->setFont(font1);

        horizontalLayout_3->addWidget(Password);

        getPass = new QLineEdit(widget);
        getPass->setObjectName("getPass");
        getPass->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(getPass);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        Re_pass = new QLabel(widget);
        Re_pass->setObjectName("Re_pass");
        Re_pass->setFont(font1);

        horizontalLayout_4->addWidget(Re_pass);

        getRePass = new QLineEdit(widget);
        getRePass->setObjectName("getRePass");
        getRePass->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(getRePass);


        verticalLayout->addLayout(horizontalLayout_4);

        widget1 = new QWidget(SignUp);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 480, 352, 38));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        onSubmit = new QPushButton(widget1);
        onSubmit->setObjectName("onSubmit");
        onSubmit->setFont(font1);

        horizontalLayout_5->addWidget(onSubmit);

        signIn = new QPushButton(widget1);
        signIn->setObjectName("signIn");
        signIn->setFont(font1);

        horizontalLayout_5->addWidget(signIn);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 966, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        SignUp->setTitle(QString());
        Pic->setText(QString());
        Username->setText(QCoreApplication::translate("MainWindow", "Username     ", nullptr));
        Email->setText(QCoreApplication::translate("MainWindow", "Email             ", nullptr));
        Password->setText(QCoreApplication::translate("MainWindow", "Password      ", nullptr));
        Re_pass->setText(QCoreApplication::translate("MainWindow", "Re-Password", nullptr));
        onSubmit->setText(QCoreApplication::translate("MainWindow", "Create a new account", nullptr));
        signIn->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
