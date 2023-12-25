#ifndef SIGNIN_H
#define SIGNIN_H
#include <QDialog>
#include<mainwindow.h>
#include<QtSql>
#include<QSqlDatabase>

namespace Ui {
class SignIn;
}
class SignIn : public QDialog
{
    Q_OBJECT
    QSqlDatabase User_data=QSqlDatabase::addDatabase("QSQLITE");

public:
    explicit SignIn(QWidget *parent = nullptr);
    ~SignIn();

private slots:
    void on_signIn_clicked();

    void on_forgotPassword_clicked();

private:
    Ui::SignIn *ui;
};

#endif // SIGNIN_H
