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
        int idd = ui->idlogin->text().toInt();
        QString password = ui->passwordlogin->text();

        employee e;

        // Vérification si l'ID et le mot de passe sont valides
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

