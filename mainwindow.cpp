#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPropertyAnimation>
#include <QLabel>
#include<QMessageBox>
#include<QDebug>
#include "connection.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int ret=A.connect_arduino(); // lancer la connexion à arduino
        switch(ret){
        case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
            break;
        case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
           break;
        case(-1):qDebug() << "arduino is not available";
        }
         QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));

    ui->idlogin->setPlaceholderText("Please Enter your Email Adress");
    ui->passwordlogin->setPlaceholderText("Please Enter Your Password");



    // Connect the linkActivated signal of the QLabel to the slot
    QLabel *signInLabel = ui->label_2; // Make sure this matches the object name in Qt Designer

    Connection c;
    if (c.createconnection()){
          QMessageBox::information(this,"alerte","connected successfully");
       }
       else{
           QMessageBox::information(this,"alerte","not connected");
       }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_label_2_linkActivated(const QString &link)
{
    if (link == "#signup") {
        SecondDialog = new  secondDialog(this);
        SecondDialog-> show();

        qDebug() << "Sign In logic triggered";
        // For example, you could open a sign-up dialog or navigate to another window.
    }
}







void MainWindow::on_login_clicked()

    {
        // Récupération de l'ID et du mot de passe depuis les champs de texte
        QString idd = ui->idlogin->text();
        QString password = ui->passwordlogin->text();

        employee e;

        if (e.doesIDExist(idd) && e.isPasswordCorrect(idd, password)) {
            // Vérification du poste (rôle) de l'utilisateur
            QString role = e.getRole(idd);  // Supposons que getRole retourne le rôle de l'utilisateur (par ex. "employé" ou "client")

            if (role == "employe") {
                // Si c'est un employé, ouvrir la fenêtre Dialogdashboard
                ddb = new Dialogdashboard(this);
                ddb->show();
                this->close();  // Ferme la fenêtre de login
            }
            else if (role == "client") {
                // Si c'est un client, ouvrir la fenêtre client
                c = new client(this);
                c->show();
                this->close();  // Ferme la fenêtre de login
            }

            QMessageBox::information(this, "Login", "Connected successfully");

        } else {
            // Si l'ID ou le mot de passe est incorrect
            QMessageBox::critical(nullptr, QObject::tr("Non valide"),
                                  QObject::tr("ID ou mot de passe incorrect : accès interdit.\n"
                                              "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
        }


}


void MainWindow::update_label()
{
    // Lire les données d'Arduino
    QByteArray data = A.read_from_arduino();
    QString receivedData = QString::fromUtf8(data).trimmed(); // Supprimer les espaces, \r, \n
    if (!receivedData.isEmpty()) {
        QSqlQuery query;
        query.prepare("SELECT COUNT(*) FROM employee WHERE ID = :ID");
        query.bindValue(":ID", receivedData);

        if (query.exec() && query.next()) {
            int count = query.value(0).toInt();
            if (count > 0) {
                A.write_to_arduino("4");
                query.prepare("UPDATE employee SET DATE_E = CURRENT_TIMESTAMP WHERE ID = :ID");
                query.bindValue(":ID", receivedData);
                query.exec();
                ddb = new Dialogdashboard(this);
                ddb->show();
            }
            else {
                A.write_to_arduino("3");
            }
        }
    }
}

