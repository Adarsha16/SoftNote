#include "signin.h"
#include "ui_signin.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include<QPixmap>


SignIn::SignIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn)
{
    QDir::setCurrent(QCoreApplication::applicationDirPath());

    ui->setupUi(this);

    setWindowTitle("Log In to SoftNote");

    QPixmap pix (":/images/logIn.png");
    ui->labelPic->setPixmap(pix);

    ui->sUsername->setPlaceholderText("Enter Username");
    ui->sPassword->setPlaceholderText("Enter Password");

    QString lineEditStyle = "QLineEdit { border-radius: 10px; border: 2px solid #555555;  padding: 65px 5px; }";
    ui->sPassword->setStyleSheet(lineEditStyle);
    ui->sUsername->setStyleSheet(lineEditStyle);

    QString buttonStyle = "QPushButton { border-radius: 10px; border: 1px solid #555555;  padding: 5px; }";
    ui->signIn->setStyleSheet(buttonStyle);

    User_data.setDatabaseName("User_data.db");
    User_data.setConnectOptions("ConnectOptions=QSQLITE_OPEN_URI");
    if (!User_data.open()) {
        qDebug() << "Error: Could not open database";
    }

}

SignIn::~SignIn()
{
    User_data.close();
    delete ui;
}

void SignIn::on_signIn_clicked()
{
    QString Username = ui->sUsername->text();
    QString Password = ui->sPassword->text();
    QString rUsername;
    QString rPassword;
    QSqlQuery query;
    int id = 0;

    if (!query.exec("SELECT * FROM userData")) {
        qDebug() << "Query error: " << query.lastError().text();
}

    while (query.next()) {
        if (Username == query.value("Username").toString()) {
            id = query.value("id").toInt();
            rUsername = query.value("Username").toString();
            rPassword = query.value("Password").toString();
            break;
    }
}

if (id == 0) {
    QMessageBox::information(this, "Invalid Username!", "Username provided doesn't exist!");
        }
    else if (rUsername == Username && rPassword == Password) {
            QMessageBox::information(this, "Login Successful!", "You are now logged in");
        }
        else {

            QMessageBox::information(this, "Invalid Password!", "Wrong password. Try again");
        }
    }


