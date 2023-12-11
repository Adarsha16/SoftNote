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
#include <QtWidgets/QFrame>
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
    QFrame *SignUp;
    QLabel *Pic;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *getUsername;
    QLineEdit *getEmail;
    QLineEdit *getPass;
    QLineEdit *getRePass;
    QPushButton *signIn;
    QPushButton *onSubmit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(966, 741);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        SignUp = new QFrame(centralwidget);
        SignUp->setObjectName("SignUp");
        SignUp->setGeometry(QRect(40, 20, 761, 591));
        Pic = new QLabel(SignUp);
        Pic->setObjectName("Pic");
        Pic->setGeometry(QRect(30, 40, 661, 191));
        QFont font;
        font.setPointSize(15);
        Pic->setFont(font);
        label = new QLabel(SignUp);
        label->setObjectName("label");
        label->setGeometry(QRect(81, 496, 31, 22));
        QFont font1;
        font1.setPointSize(16);
        font1.setItalic(true);
        label->setFont(font1);
        layoutWidget = new QWidget(SignUp);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 250, 251, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        getUsername = new QLineEdit(layoutWidget);
        getUsername->setObjectName("getUsername");
        QFont font2;
        font2.setPointSize(16);
        getUsername->setFont(font2);

        verticalLayout->addWidget(getUsername);

        getEmail = new QLineEdit(layoutWidget);
        getEmail->setObjectName("getEmail");
        getEmail->setFont(font2);

        verticalLayout->addWidget(getEmail);

        getPass = new QLineEdit(layoutWidget);
        getPass->setObjectName("getPass");
        getPass->setFont(font2);
        getPass->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(getPass);

        getRePass = new QLineEdit(layoutWidget);
        getRePass->setObjectName("getRePass");
        getRePass->setFont(font2);
        getRePass->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(getRePass);

        signIn = new QPushButton(SignUp);
        signIn->setObjectName("signIn");
        signIn->setGeometry(QRect(80, 530, 211, 41));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        signIn->setFont(font3);
        onSubmit = new QPushButton(SignUp);
        onSubmit->setObjectName("onSubmit");
        onSubmit->setGeometry(QRect(80, 450, 241, 41));
        onSubmit->setFont(font3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 966, 17));
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
        Pic->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "OR", nullptr));
        signIn->setText(QCoreApplication::translate("MainWindow", "Log-in to SoftNote", nullptr));
        onSubmit->setText(QCoreApplication::translate("MainWindow", "Create a new account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
