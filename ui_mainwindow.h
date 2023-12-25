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
    QPushButton *onSubmit;
    QLabel *label_2;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *getUsername;
    QLineEdit *getEmail;
    QLineEdit *getPass;
    QLineEdit *getRePass;
    QPushButton *signIn;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(742, 776);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        SignUp = new QFrame(centralwidget);
        SignUp->setObjectName("SignUp");
        SignUp->setGeometry(QRect(-20, -10, 781, 741));
        onSubmit = new QPushButton(SignUp);
        onSubmit->setObjectName("onSubmit");
        onSubmit->setGeometry(QRect(210, 580, 321, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        onSubmit->setFont(font);
        label_2 = new QLabel(SignUp);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 40, 681, 251));
        QFont font1;
        font1.setPointSize(46);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:rgba(153, 153, 153, 1)"));
        label_2->setTextFormat(Qt::MarkdownText);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2->setWordWrap(true);
        label = new QLabel(SignUp);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 630, 41, 22));
        QFont font2;
        font2.setPointSize(16);
        font2.setItalic(true);
        label->setFont(font2);
        layoutWidget = new QWidget(SignUp);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(200, 310, 341, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, 10, 0, 10);
        getUsername = new QLineEdit(layoutWidget);
        getUsername->setObjectName("getUsername");
        QFont font3;
        font3.setPointSize(16);
        getUsername->setFont(font3);
        getUsername->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(getUsername);

        getEmail = new QLineEdit(layoutWidget);
        getEmail->setObjectName("getEmail");
        getEmail->setFont(font3);

        verticalLayout->addWidget(getEmail);

        getPass = new QLineEdit(layoutWidget);
        getPass->setObjectName("getPass");
        getPass->setFont(font3);
        getPass->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(getPass);

        getRePass = new QLineEdit(layoutWidget);
        getRePass->setObjectName("getRePass");
        getRePass->setFont(font3);
        getRePass->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(getRePass);

        signIn = new QPushButton(SignUp);
        signIn->setObjectName("signIn");
        signIn->setGeometry(QRect(210, 660, 321, 41));
        signIn->setFont(font);
        signIn->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(SignUp);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(600, 20, 151, 31));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/SoftNote.png")));
        label_3->setWordWrap(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 742, 17));
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
        onSubmit->setText(QCoreApplication::translate("MainWindow", "Create a new account", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "You can make anything by writing", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "OR", nullptr));
        signIn->setText(QCoreApplication::translate("MainWindow", "Log-in to SoftNote", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
