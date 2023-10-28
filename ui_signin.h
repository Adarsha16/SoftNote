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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QGroupBox *signIn_grouped;
    QPushButton *signIn;
    QLabel *labelPic;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *userLabel;
    QLineEdit *sUsername;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPass;
    QLineEdit *sPassword;

    void setupUi(QDialog *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName("SignIn");
        SignIn->resize(632, 443);
        signIn_grouped = new QGroupBox(SignIn);
        signIn_grouped->setObjectName("signIn_grouped");
        signIn_grouped->setGeometry(QRect(30, 140, 361, 261));
        signIn = new QPushButton(signIn_grouped);
        signIn->setObjectName("signIn");
        signIn->setGeometry(QRect(50, 120, 80, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        signIn->setFont(font);
        labelPic = new QLabel(SignIn);
        labelPic->setObjectName("labelPic");
        labelPic->setGeometry(QRect(48, 30, 471, 81));
        widget = new QWidget(SignIn);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(80, 180, 217, 68));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        userLabel = new QLabel(widget);
        userLabel->setObjectName("userLabel");
        userLabel->setFont(font);

        horizontalLayout->addWidget(userLabel);

        sUsername = new QLineEdit(widget);
        sUsername->setObjectName("sUsername");

        horizontalLayout->addWidget(sUsername);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelPass = new QLabel(widget);
        labelPass->setObjectName("labelPass");
        labelPass->setFont(font);

        horizontalLayout_2->addWidget(labelPass);

        sPassword = new QLineEdit(widget);
        sPassword->setObjectName("sPassword");
        sPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(sPassword);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QDialog *SignIn)
    {
        SignIn->setWindowTitle(QCoreApplication::translate("SignIn", "Dialog", nullptr));
        signIn_grouped->setTitle(QString());
        signIn->setText(QCoreApplication::translate("SignIn", "Log In", nullptr));
        labelPic->setText(QString());
        userLabel->setText(QCoreApplication::translate("SignIn", "Username", nullptr));
        sUsername->setText(QString());
        labelPass->setText(QCoreApplication::translate("SignIn", "Password ", nullptr));
        sPassword->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
