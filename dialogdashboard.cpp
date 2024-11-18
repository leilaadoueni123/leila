#include "dialogdashboard.h"
#include "ui_dialogdashboard.h"
#include<QMessageBox>
#include <QTableView>
#include <QApplication>
#include <QPrinter>
#include <QPainter>
#include <QFileDialog>
#include <QPdfWriter>   // Ajouté pour QPdfWriter
#include <QSqlQuery>    // Ajouté pour QSqlQuery
#include <QSqlError>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QByteArray>
#include <QDebug>
#include <QVBoxLayout>
#include <QTableWidget>
#include <QChartView>                 // Inclus pour QChartView
#include <QPieSeries>                 // Inclus pour QPieSeries
Dialogdashboard::Dialogdashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogdashboard)
{
    ui->setupUi(this);
    // Ajoutez les éléments au QComboBox pour le tri
       ui->comboBox->addItem("Poste");
       ui->comboBox->addItem("Salaire");
    connect(ui->pushButton_9, &QPushButton::clicked, this, &Dialogdashboard::on_pushButton_9_clicked);
    ui->tableView->setModel(etmp.afficher());
    ui->gb_modifier->hide();
    }


Dialogdashboard::~Dialogdashboard()
{
    delete ui;
}

void Dialogdashboard::on_pushButton_3_clicked()
{
    int id=ui->lineEdit_2->text().toInt();
    QString nom=ui->lineEdit->text();
    QString prenom=ui->lineEdit_4->text();
    QString poste=ui->lineEdit_5->text();
    float salaire=ui->lineEdit_3->text().toFloat();
    employee e(nom,prenom,poste,id,salaire);

    bool test=e.ajouter();
    if(test)
    {
        ui->tableView->setModel(etmp.afficher());
               QMessageBox::information(this, "Success", "Employee added successfully!");
           } else {
               QMessageBox::warning(this, "Failure", "Failed to add employee.");
    }

}


void Dialogdashboard::on_pushButton_6_clicked()//supprimer
{
    int id=ui->lineEdit_11->text().toInt();
   bool test=etmp.supprimer(id);

        if (test) {

            ui->tableView->setModel(etmp.afficher());
               QMessageBox::information(this, "Success", "Employee supprimer successfully!");
           } else {
               QMessageBox::warning(this, "Failure", "Failed to add employee.");
    }

}


void Dialogdashboard::on_pushButton_5_clicked()
{
    int id=ui->lineEdit_8->text().toInt();
    QString nom=ui->lineEdit_6->text();
    QString prenom=ui->lineEdit_7->text();
    QString poste=ui->lineEdit_9->text();
    float salaire=ui->lineEdit_10->text().toFloat();
    employee e(nom,prenom,poste,id,salaire);
    bool test = e.modifier();

    if (test) {
        ui->tableView->setModel(etmp.afficher());
        QMessageBox::information(this, "Succès", "Employé modifié avec succès !");
        ui->gb_modifier->hide();
    } else {
        QMessageBox::warning(this, "Échec", "Échec de la modification de l'employé.");
    }
}


void Dialogdashboard::on_pushButton_7_clicked()
{
    ui->gb_modifier->show();
}

void Dialogdashboard::on_pushButton_8_clicked()//pdf
{
    int employeeId = ui->lineEdit_14->text().toInt(); // Champ pour l'ID de l'employé
    generatePdf(employeeId); // Appel de la fonction pour générer le PDF
}
void Dialogdashboard::generatePdf(int employeeId)
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save Payslip"), "", tr("PDF Files (*.pdf);;All Files (*)"));

    if (fileName.isEmpty()) {
        return;
    }

    QPdfWriter pdfWriter(fileName);
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));
    pdfWriter.setResolution(300);

    QPainter painter(&pdfWriter);
    QFont font("Arial", 12);
    painter.setFont(font);

    // Requête pour récupérer les données de l'employé
    QSqlQuery query;
    query.prepare("SELECT NOM, PRENOM, POSTE, SALAIRE FROM EMPLOYEE WHERE ID = :id");
    query.bindValue(":id", employeeId);

    if (!query.exec() || !query.next()) {
        QMessageBox::warning(this, "Database Error", query.lastError().text());
        return;
    }

    // Dessiner le contenu de la fiche de paie
    painter.drawText(100, 30, "Fiche de Paie");
    painter.drawText(100, 80, "Nom: " + query.value("NOM").toString());
    painter.drawText(100, 120, "Prénom: " + query.value("PRENOM").toString());
    painter.drawText(100, 160, "Poste: " + query.value("POSTE").toString());
    painter.drawText(100, 200, "ID: " + QString::number(employeeId));
    // Séparation visuelle
    painter.drawLine(250, 250, 400, 280); // Ligne de séparation


    // Détails de la rémunération
    double salary = query.value("SALAIRE").toDouble();
    double deductions = salary * 0.1;  // Exemple de déduction de 10%
    double netPay = salary - deductions;

    painter.drawText(100, 450, "Salaire Brut: " + QString::number(salary, 'f', 2));
    painter.drawText(100, 450, "Deductions: " + QString::number(deductions, 'f', 2));
    painter.drawText(100, 400, "Net à Payer: " + QString::number(netPay, 'f', 2));

    painter.end();
    QMessageBox::information(this, tr("PDF Generated"), tr("The payslip has been saved as a PDF."));
}

void Dialogdashboard::on_pushButton_9_clicked()//recherche
{
    int id = ui->lineEdit_12->text().toInt();
        QString nom = ui->lineEdit_13->text();

        QSqlQuery query;
        if (id > 0) {
            query.prepare("SELECT * FROM EMPLOYEE WHERE ID = :id");
            query.bindValue(":id", id);
        } else if (!nom.isEmpty()) {
            query.prepare("SELECT * FROM EMPLOYEE WHERE NOM LIKE :nom");
            query.bindValue(":nom", "%" + nom + "%");
        } else {
            QMessageBox::warning(this, "Input Error", "Please enter an ID or a Name to search.");
            return;
        }

        if (!query.exec()) {
            QMessageBox::warning(this, "Database Error", query.lastError().text());
            return;
        }
        QSqlQueryModel *model=new QSqlQueryModel();
        if (query.next()) {

        } else {
            QMessageBox::information(this, "No Results", "No employee found with the given criteria.");
        }
        model->setQuery(std::move(query));
        ui->tableView->setModel(model);
}


void Dialogdashboard::on_pushButton_10_clicked()//tri
{
    QString criterion = ui->comboBox->currentText(); // Supposons que comboBox_tri contient "Poste" et "Salaire"
       QSqlQuery query;

       if (criterion == "Poste") {
           query.prepare("SELECT * FROM EMPLOYEE ORDER BY POSTE");
       } else if (criterion == "Salaire") {
           query.prepare("SELECT * FROM EMPLOYEE ORDER BY SALAIRE");
       } else {
           QMessageBox::warning(this, "Selection Error", "Please select a valid sorting criterion.");
           return;
       }

       if (!query.exec()) {
           QMessageBox::warning(this, "Database Error", query.lastError().text());
           return;
       }

       // Mettez à jour votre tableView avec les résultats triés
       ui->tableView->setModel(etmp.afficher(query)); // Assurez-vous que la méthode 'afficher' peut accepter une requête
}

void Dialogdashboard::calculateSalaryStatistics()
{
   QSqlQuery query("SELECT POSTE, SALAIRE FROM EMPLOYEE");
    QMap<QString, QPair<double, int>> posteStats;

    while (query.next()) {
        QString poste = query.value("POSTE").toString();
        double salaire = query.value("SALAIRE").toDouble();

        if (!posteStats.contains(poste)) {
            posteStats[poste] = qMakePair(0.0, 0);
        }

        posteStats[poste].first += salaire;
        posteStats[poste].second++;
    }

    for (auto& value : posteStats) {
        value.first /= value.second;
    }

    // Créer une fenêtre pour afficher les statistiques
    QWidget *statsWindow = new QWidget(this);
    statsWindow->setWindowTitle("Statistiques des Salaires par Poste");
    QVBoxLayout *layout = new QVBoxLayout(statsWindow);

    // Tableau pour afficher les données
    QTableWidget *table = new QTableWidget(statsWindow);
    table->setRowCount(posteStats.size());
    table->setColumnCount(3);
    table->setHorizontalHeaderLabels(QStringList() << "Poste" << "Salaire Moyen" << "Nombre d'Employés");

    int row = 0;
    for (auto it = posteStats.begin(); it != posteStats.end(); ++it) {
        table->setItem(row, 0, new QTableWidgetItem(it.key()));
        table->setItem(row, 1, new QTableWidgetItem(QString::number(it.value().first, 'f', 2)));
        table->setItem(row, 2, new QTableWidgetItem(QString::number(it.value().second)));
        row++;
    }

    layout->addWidget(table);

    // Graphique circulaire
    QPieSeries *series = new QPieSeries(statsWindow);
    for (auto it = posteStats.begin(); it != posteStats.end(); ++it) {
        series->append(it.key() + " (" + QString::number(it.value().second) + ")", it.value().first);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition des Salaires par Poste");

    QChartView *chartView = new QChartView(chart, statsWindow);
    chartView->setRenderHint(QPainter::Antialiasing);
    layout->addWidget(chartView);

    statsWindow->setLayout(layout);
    statsWindow->resize(800,600);
    statsWindow->show();
}



void Dialogdashboard::on_pushButton_11_clicked()

{
    calculateSalaryStatistics(); // Appeler la méthode pour calculer et afficher les statistiques
}
