#ifndef DIALOGDASHBOARD_H
#define DIALOGDASHBOARD_H
#include <QDialog>
#include <QSqlQueryModel>
#include <QPrinter>
#include <QPainter>
#include <QFileDialog>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QAbstractItemModel>
#include "employee.h"

namespace Ui {
class Dialogdashboard;
}

class Dialogdashboard : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogdashboard(QWidget *parent = nullptr);
    ~Dialogdashboard();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void generatePdf(QString employeeId); // Déclaration de la méthode pour générer le PDF
    void on_pushButton_11_clicked();

private:
    Ui::Dialogdashboard *ui;
    employee etmp;
    void calculateSalaryStatistics();
     QVBoxLayout *mainLayout;
};

#endif // DIALOGDASHBOARD_H
