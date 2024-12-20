#include "employee.h"
#include <utility> // Inclure pour std::move
#include <QMessageBox>
#include <qDebug>
employee::employee(QString nom,QString prenom,QString poste,int id ,float salaire)
{
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->poste=poste;
    this->salaire=salaire;
}


bool employee::ajouter()
{
    // Contrôle de saisie
        if (nom.isEmpty() || prenom.isEmpty() || poste.isEmpty()) {
            QMessageBox::warning(nullptr, "Erreur", "Les champs Nom, Prénom et Poste doivent être remplis.");
            return false;
        }

        if (id <= 0) {
            QMessageBox::warning(nullptr, "Erreur", "L'ID doit être un entier positif.");
            return false;
        }

        if (salaire < 0) {
            QMessageBox::warning(nullptr, "Erreur", "Le salaire ne peut pas être négatif.");
            return false;
        }

    QSqlQuery query;
    QString res = QString::number(id);

    query.prepare("insert into employee(NOM,PRENOM,POSTE,ID,SALAIRE)" "values(:nom,:prenom,:poste,:id,:salaire)");
    query.bindValue(":id",res);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":poste",poste);
    query.bindValue(":salaire",salaire);

    return query.exec();
}



QSqlQueryModel * employee::afficher(){

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery("select * from employee");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("POSTE"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("SALAIRE"));
  return model;
}
QSqlQueryModel* employee::afficher(QSqlQuery& query)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery(std::move(query)); // Utilise la requête passée en paramètre
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("POSTE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("SALAIRE"));
    return model;
}




bool employee::supprimer(int id)
{

    QSqlQuery query;
    QString res=QString::number(id);

    query.prepare("delete from employee where ID= :id");
    query.bindValue(":id",res);

    return query.exec();
}


bool employee::modifier() {
    QSqlQuery query;
    query.prepare("UPDATE employee SET NOM = ?, PRENOM = ?, POSTE = ?, SALAIRE = ? WHERE ID = ?");
    query.addBindValue(nom);
    query.addBindValue(prenom);
    query.addBindValue(poste);
    query.addBindValue(salaire);
    query.addBindValue(id);

    return query.exec(); // Retourner le résultat de l'exécution de la requête
}
bool employee::doesIDExist(int idd) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM employee WHERE id = :id");
    query.bindValue(":id", idd);

    if (query.exec()) {
        if (query.next()) {
            int count = query.value(0).toInt();
            return count > 0; // Retourne true si l'ID existe
        }
    } else {
        qDebug() << "Erreur SQL dans doesIDExist:" ;
    }

    return false;
}

bool employee::isPasswordCorrect(int idd, const QString& password) {
    QSqlQuery query;
    query.prepare("SELECT password FROM employee WHERE id =:id");
    query.bindValue(":id", idd);

    if (query.exec()) {
        if (query.next()) {
            QString dbPassword = query.value(0).toString();
            return dbPassword == password;
        }
    } else {
        qDebug() << "Erreur SQL dans isPasswordCorrect:";
    }

    return false;
}
QString employee::getRole(int idd) {

    QSqlQuery query;
    query.prepare("SELECT poste FROM employee WHERE id = :id");
    query.bindValue(":id", idd);

    if (query.exec()) {
        if (query.next()) {
            return query.value(0).toString();  // Retourne le rôle (par ex. "employe" ou "client")
        }
    }
    return "";  // Retourne une chaîne vide si l'utilisateur n'est pas trouvé ou s'il y a une erreur
}


