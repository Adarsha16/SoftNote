#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QtDebug>
#include<QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QSqlDatabase User_data=QSqlDatabase::addDatabase("QSQLITE");

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_onSubmit_clicked();

    void on_signIn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
