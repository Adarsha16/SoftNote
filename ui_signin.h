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

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QLabel *labelPic;
    QPushButton *signIn;
    QLineEdit *sPassword;
    QLabel *labelPass;
    QLineEdit *sUsername;

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
        signIn->setGeometry(QRect(80, 320, 91, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        signIn->setFont(font1);
        sPassword = new QLineEdit(SignIn);
        sPassword->setObjectName("sPassword");
        sPassword->setGeometry(QRect(80, 260, 171, 41));
        sPassword->setFont(font);
        sPassword->setEchoMode(QLineEdit::Password);
        labelPass = new QLabel(SignIn);
        labelPass->setObjectName("labelPass");
        labelPass->setGeometry(QRect(82, 191, 16, 22));
        labelPass->setFont(font1);
        sUsername = new QLineEdit(SignIn);
        sUsername->setObjectName("sUsername");
        sUsername->setGeometry(QRect(80, 200, 171, 41));
        sUsername->setFont(font);

        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QDialog *SignIn)
    {
        SignIn->setWindowTitle(QCoreApplication::translate("SignIn", "Dialog", nullptr));
        labelPic->setText(QString());
        signIn->setText(QCoreApplication::translate("SignIn", "Log In", nullptr));
        sPassword->setText(QString());
        labelPass->setText(QString());
        sUsername->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
