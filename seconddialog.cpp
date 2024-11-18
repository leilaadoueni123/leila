#include "seconddialog.h"
#include "ui_seconddialog.h"
#include <QLabel>
#include<QMessageBox>


secondDialog::secondDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondDialog)
{
    ui->setupUi(this);
    // Correctly set the placeholder text using setPlaceholderText
        ui->usernameregistr->setPlaceholderText("leila");
        ui->emailreg->setPlaceholderText("leila@esprit.com");
        ui->passwordreg->setPlaceholderText("*********");
}

secondDialog::~secondDialog()
{
    delete ui;
}

void secondDialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Registration", "Added successfully!");
    this->close();
}

