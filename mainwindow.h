#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <seconddialog.h>
#include<dialogdashboard.h>
#include "employee.h"
#include "client.h"
#include "arduino.h"

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
    void update_label();


private:
    Ui::MainWindow *ui;
    secondDialog *SecondDialog;
    Dialogdashboard *ddb;
    client *c;
    employee etmp;
    QByteArray data;
    Arduino A;
};
#endif // MAINWINDOW_H
