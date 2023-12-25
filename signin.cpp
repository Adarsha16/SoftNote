#include "signin.h"
#include "ui_signin.h"
#include <forgotpassword.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include<QPixmap>
#include <hashingFunction.h>

QString currentUser;
int currentUserId;
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
    QString lineEditStyle = "QLineEdit { "
        "   border-radius: 10px; "
        "   border: 1px solid #555555; "
        "   padding: 5px; "
        "} "
        "QLineEdit:hover { "
        "   background-color: #e0e0e0; "
        "}";

    ui->sPassword->setStyleSheet(lineEditStyle);
    ui->sUsername->setStyleSheet(lineEditStyle);

    QString buttonStyle = "QPushButton { "
                          "   border-radius: 10px; "
                          "   border: 1px solid #555555; "
                          "   padding: 5px; "
                          "} "
                          "QPushButton:hover { "
                          "   background-color:#e0e0e0; "
                          "}";

    ui->signIn->setStyleSheet(buttonStyle);
    ui->forgotPassword->setStyleSheet(buttonStyle);

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
    QString checkPassword = hashPassword(Password);
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
    else if (rUsername == Username && rPassword == checkPassword) {

        currentUser = Username;
        currentUserId = id;

        QProcess noteAppProcess;
       // noteAppProcess.startDetached("C:/Users/LENOVO/Documents/SignUp/SoftNote/notepad/tryingagain.exe");
        QString notepadPath = QCoreApplication::applicationDirPath() + "/notepad/tryingagain.exe";

        // Check if the file exists before attempting to start the process
        if (QFile::exists(notepadPath)) {
            // Start the process detached
            QProcess::startDetached(notepadPath);
        } else {
            qDebug() << "Error: File not found - " << notepadPath;
        }
        this->close();
        }

        else {

            QMessageBox::information(this, "Invalid Password!", "Wrong password. Try again");
        }
    }



void SignIn::on_forgotPassword_clicked()
{
    forgotPassword resetPassword;
    resetPassword.setModal(true);
    resetPassword.exec();
}

