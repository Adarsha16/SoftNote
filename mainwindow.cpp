#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "signin.h"
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    QDir::setCurrent(QCoreApplication::applicationDirPath());

    ui->setupUi(this);

    setWindowTitle("Welcome to SoftNote!");

    QPixmap pix (":/images/Header.png");
    ui->Pic->setPixmap(pix);



    User_data.setDatabaseName("User_data.db");
    User_data.setConnectOptions("ConnectOptions=QSQLITE_OPEN_URI");
    if (!User_data.open()) {
        qDebug() << "Error: Could not open database";
    }

    ui->getUsername->setPlaceholderText("Enter Username");
    ui->getEmail->setPlaceholderText("Enter Email");
    ui->getPass->setPlaceholderText("Enter Password");
    ui->getRePass->setPlaceholderText("Confirm Password");

}

MainWindow::~MainWindow()
{
    User_data.close();
    delete ui;

}


void MainWindow::on_onSubmit_clicked()
{
        QString Username = ui->getUsername->text();
        QString Email = ui->getEmail->text();
        QString Password = ui->getPass->text();
        QString rPassword = ui->getRePass->text();
        int uLength = Username.length();
        int pLength = Password.length();
        QString tUsername = Username;
        int count = 0;

        QSqlQuery query;

        query.exec("CREATE TABLE IF NOT EXISTS userData ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "Username TEXT, "
                   "Password TEXT, "
                   "Email TEXT)");

        if (uLength < 6) {
            QMessageBox::information(this, "Invalid Username!", "Username can't be less than 6 characters");
        }
        if (!query.exec("SELECT * FROM userData")) {
            qDebug() << "Query error: " << query.lastError().text();
        }
        while(query.next()){
            if(tUsername == query.value("Username"))
            {
                count++;
            }
        }
        if(count > 0)
        {
            QMessageBox::information(this, "Username collision!", "Username already exists");
        }
        else if (!(Email.contains('@') && Email.contains('.'))) {
            QMessageBox::information(this, "Invalid Email!", "Email must contain '@' and '.'");
        }
        else if(pLength < 8)
        {
            QMessageBox::information(this, "Invalid Password!", "Passwords can't be less than 8 characters!");
        }
        else if (Password != rPassword) {
            QMessageBox::information(this, "Re-password!", "Re-entered password doesn't match!");
        }
        else if(count==0) {

            query.prepare("INSERT INTO userData(Username, Password, Email) VALUES (:Username, :Password, :Email)");
            query.bindValue(":Username", Username);
            query.bindValue(":Password", Password);
            query.bindValue(":Email", Email);

            if (!query.exec()) {
                qDebug() << "Data insertion error: " << query.lastError().text();
            }

            QMessageBox::information(this, "Account creation", "Account created succesfully!");
        }
        else
        {
               qDebug() << "Failed to create the account!";
        }
    }



void MainWindow::on_signIn_clicked()
{
        SignIn logIn;
        logIn.setModal(true);
        logIn.exec();
}

