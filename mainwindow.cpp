#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "signin.h"
#include <QPixmap>
#include <QCoreApplication>
#include <QRegularExpression>
#include <QDebug>
#include<QLineEdit>
#include <QLabel>
#include <QFontDatabase>
#include <QRandomGenerator>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    QDir::setCurrent(QCoreApplication::applicationDirPath());

    ui->setupUi(this);

    const char* quotes[] = {
        "Time is the ink, and the notepad is the canvas of productivity.",
        "Efficient code, efficient schedule; both start with a clean notepad.",
        "You can make everything by writing",
        "A well-organized notepad is the secret weapon of effective time management.",
        "Code and schedules: both require thoughtful planning; both begin with a notepad.",
        "Do not repeat, I repeat DO NOT REPEAT"
    };
    QString fontPath = ":/Merriweather-Regular.ttf";
    int fontId = QFontDatabase::addApplicationFont(fontPath);
    QString fontName = QFontDatabase::applicationFontFamilies(fontId).at(0);
    ui->label_2->setFont(QFont(fontName, 36));

    int randomNumber = QRandomGenerator::global()->bounded(6);
    QString selectedString = QString::fromUtf8(quotes[randomNumber]);
    ui->label_2->setText(selectedString.trimmed());

    setWindowTitle("Welcome to SoftNote!");
    Qt::WindowFlags flags = this->windowFlags();
    flags &= ~Qt::WindowMaximizeButtonHint;
    this->setWindowFlags(flags);

    User_data.setDatabaseName("User_data.db");
    User_data.setConnectOptions("ConnectOptions=QSQLITE_OPEN_URI");
    if (!User_data.open()) {
        qDebug() << "Error: Could not open database";
    }

    ui->getUsername->setPlaceholderText("Enter Username");
    ui->getEmail->setPlaceholderText("Enter Email");
    ui->getPass->setPlaceholderText("Enter Password");
    ui->getRePass->setPlaceholderText("Confirm Password");

    QString lineEditStyle = "QLineEdit { border-radius: 10px; border: 2px solid #555555;  padding: 5px; letter-spacing: 1px; }";
    ui->getUsername->setStyleSheet(lineEditStyle);
    ui->getEmail->setStyleSheet(lineEditStyle);
    ui->getPass->setStyleSheet(lineEditStyle);
    ui->getRePass->setStyleSheet(lineEditStyle);

    QString buttonStyle = "QPushButton { border-radius: 10px; border: 1px solid #555555;  padding: 5px; }";
    ui->signIn->setStyleSheet(buttonStyle);
    ui->onSubmit->setStyleSheet(buttonStyle);

    ui->label_2->setWordWrap(true);
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


        if (uLength < 2) {
            QMessageBox::information(this, "Invalid Username!", "Username can't be less than 2 characters");
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
        QRegularExpression regex("^[0-9a-zA-Z]+([0-9a-zA-Z]*[-._+])*[0-9a-zA-Z]+@[0-9a-zA-Z]+([-.][0-9a-zA-Z]+)*([0-9a-zA-Z]*[.])[a-zA-Z]{2,6}$");
        QRegularExpressionMatch match = regex.match(Email);
        if(count > 0)
        {
            QMessageBox::information(this, "Username collision!", "Username already exists");
        }
        else if (!match.hasMatch()) {
            QMessageBox::information(this, "Invalid Email!", "Please input an valid email address");
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

