#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <seconddialog.h>
#include<dialogdashboard.h>
#include "employee.h"
#include "client.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_label_2_linkActivated(const QString &link);





    void on_login_clicked();

private:
    Ui::MainWindow *ui;
    secondDialog *SecondDialog;
    Dialogdashboard *ddb;
    client *c;
    employee etmp;
};
#endif // MAINWINDOW_H
