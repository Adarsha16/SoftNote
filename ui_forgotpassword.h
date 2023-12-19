/********************************************************************************
** Form generated from reading UI file 'forgotpassword.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASSWORD_H
#define UI_FORGOTPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_forgotPassword
{
public:
    QPushButton *submitNewPass;
    QPushButton *Cancel;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *fUsername;
    QLineEdit *fEmail;
    QLineEdit *newPass;
    QLineEdit *rNewPass;

    void setupUi(QDialog *forgotPassword)
    {
        if (forgotPassword->objectName().isEmpty())
            forgotPassword->setObjectName("forgotPassword");
        forgotPassword->resize(474, 437);
        submitNewPass = new QPushButton(forgotPassword);
        submitNewPass->setObjectName("submitNewPass");
        submitNewPass->setGeometry(QRect(90, 360, 191, 41));
        QFont font;
        font.setPointSize(16);
        submitNewPass->setFont(font);
        Cancel = new QPushButton(forgotPassword);
        Cancel->setObjectName("Cancel");
        Cancel->setGeometry(QRect(300, 360, 101, 41));
        Cancel->setFont(font);
        label = new QLabel(forgotPassword);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 401, 61));
        widget = new QWidget(forgotPassword);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(80, 140, 301, 201));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        fUsername = new QLineEdit(widget);
        fUsername->setObjectName("fUsername");
        fUsername->setFont(font);

        verticalLayout->addWidget(fUsername);

        fEmail = new QLineEdit(widget);
        fEmail->setObjectName("fEmail");
        fEmail->setFont(font);

        verticalLayout->addWidget(fEmail);

        newPass = new QLineEdit(widget);
        newPass->setObjectName("newPass");
        newPass->setFont(font);
        newPass->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(newPass);

        rNewPass = new QLineEdit(widget);
        rNewPass->setObjectName("rNewPass");
        rNewPass->setFont(font);
        rNewPass->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(rNewPass);


        retranslateUi(forgotPassword);

        QMetaObject::connectSlotsByName(forgotPassword);
    } // setupUi

    void retranslateUi(QDialog *forgotPassword)
    {
        forgotPassword->setWindowTitle(QCoreApplication::translate("forgotPassword", "Dialog", nullptr));
        submitNewPass->setText(QCoreApplication::translate("forgotPassword", "Change Password", nullptr));
        Cancel->setText(QCoreApplication::translate("forgotPassword", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("forgotPassword", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class forgotPassword: public Ui_forgotPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
