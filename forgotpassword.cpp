#include "forgotpassword.h"
#include "ui_forgotpassword.h"
#include <signin.h>
#include <hashingFunction.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
 #include <QFontDatabase>

forgotPassword::forgotPassword(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::forgotPassword)
{
    ui->setupUi(this);


    QString fontPath = ":/Merriweather-Regular.ttf";
    int fontId = QFontDatabase::addApplicationFont(fontPath);
    QString fontName = QFontDatabase::applicationFontFamilies(fontId).at(0);
    ui->label->setFont(QFont(fontName, 20));
    ui->label->setText("Forgot Your Password?");

    ui->fUsername->setPlaceholderText("Enter Username");
    ui->fEmail->setPlaceholderText("Enter Email");
    ui->newPass->setPlaceholderText("Enter New Password");
    ui->rNewPass->setPlaceholderText("Confirm New Password");

    QString lineEditStyle = "QLineEdit { "
                            "   border-radius: 10px; "
                            "   border: 1px solid #555555; "

                            "   padding: 5px; "
                            "} "
                            "QLineEdit:hover { "
                            "   background-color: #e0e0e0; "
                            "}";

    ui->fUsername->setStyleSheet(lineEditStyle);
    ui->fEmail->setStyleSheet(lineEditStyle);
    ui->newPass->setStyleSheet(lineEditStyle);
    ui->rNewPass->setStyleSheet(lineEditStyle);

    QString buttonStyle = "QPushButton { "
                          "   border-radius: 10px; "
                          "   border: 1px solid #555555; "
                          "   padding: 5px; "
                          "} "
                          "QPushButton:hover { "
                          "   background-color:#e0e0e0; "
                          "}";

    ui->submitNewPass->setStyleSheet(buttonStyle);
    ui->Cancel->setStyleSheet(buttonStyle);


    setWindowTitle("Reset Password");

    User_data.setDatabaseName("User_data.db");
    User_data.setConnectOptions("ConnectOptions=QSQLITE_OPEN_URI");
    if (!User_data.open()) {
        qDebug() << "Error: Could not open database";
    }

}



forgotPassword::~forgotPassword()
{
    delete ui;
}

void forgotPassword::on_submitNewPass_clicked()
{
    QString Username = ui->fUsername->text();
    QString Email = ui->fEmail->text();
    QString rUsername;
    QString rEmail;
    QString hEmail = hashPassword(Email);
    QString fPass = ui->newPass->text();
    QString fPassRe = ui->rNewPass->text();
    QSqlQuery query;
    int id = 0;

    if (!query.exec("SELECT * FROM userData")) {
        qDebug() << "Query error: " << query.lastError().text();
    }

    while (query.next()) {
        if (Username == query.value("Username").toString()) {
            id = query.value("id").toInt();
            rUsername = query.value("Username").toString();
            rEmail = query.value("Email").toString();
            break;
        }
    }
    if (rUsername != Username || hEmail != rEmail) {
           QMessageBox::information(this, "Invalid Username or Email", "Provided Crenditials donot exist!");
    }
    else if((rUsername == Username && hEmail == rEmail) && (fPass == fPassRe))
    {
        // Update the password in the database
        QSqlQuery updateQuery;
        updateQuery.prepare("UPDATE userData SET Password = :password WHERE id = :id");
        updateQuery.bindValue(":password", hashPassword(fPass));
        updateQuery.bindValue(":id", id);

        if (updateQuery.exec()) {
            QMessageBox::information(this, "Password Reset Successful", "Your password has been successfully reset!");
        } else {
            qDebug() << "Update query error: " << updateQuery.lastError().text();
            QMessageBox::critical(this, "Error", "Failed to reset password. Please try again.");
        }
    }
    else{
        QMessageBox::information(this,"Re Password don't match","Please rewrite the password correctly!");
    }

}


void forgotPassword::on_Cancel_clicked()
{
    this->close();
}

