/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QLabel *labelPic;
    QPushButton *signIn;
    QLabel *labelPass;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *sUsername;
    QLineEdit *sPassword;
    QPushButton *forgotPassword;

    void setupUi(QDialog *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName("SignIn");
        SignIn->resize(632, 443);
        QFont font;
        font.setPointSize(16);
        SignIn->setFont(font);
        SignIn->setFocusPolicy(Qt::NoFocus);
        labelPic = new QLabel(SignIn);
        labelPic->setObjectName("labelPic");
        labelPic->setGeometry(QRect(50, 70, 471, 81));
        signIn = new QPushButton(SignIn);
        signIn->setObjectName("signIn");
        signIn->setGeometry(QRect(80, 290, 101, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        signIn->setFont(font1);
        labelPass = new QLabel(SignIn);
        labelPass->setObjectName("labelPass");
        labelPass->setGeometry(QRect(82, 191, 16, 22));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        labelPass->setFont(font2);
        layoutWidget = new QWidget(SignIn);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 183, 301, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        sUsername = new QLineEdit(layoutWidget);
        sUsername->setObjectName("sUsername");
        sUsername->setFont(font);

        verticalLayout->addWidget(sUsername);

        sPassword = new QLineEdit(layoutWidget);
        sPassword->setObjectName("sPassword");
        sPassword->setFont(font);
        sPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(sPassword);

        forgotPassword = new QPushButton(SignIn);
        forgotPassword->setObjectName("forgotPassword");
        forgotPassword->setGeometry(QRect(230, 290, 181, 41));

        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QDialog *SignIn)
    {
        SignIn->setWindowTitle(QCoreApplication::translate("SignIn", "Dialog", nullptr));
        labelPic->setText(QString());
        signIn->setText(QCoreApplication::translate("SignIn", "Log In", nullptr));
        labelPass->setText(QString());
        sUsername->setText(QString());
        sPassword->setText(QString());
        forgotPassword->setText(QCoreApplication::translate("SignIn", "Forgot Password?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
