#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
class employee
{
    QString nom,prenom,poste;
    QString id;
    float salaire;

public:
    employee(){}
    employee(QString, QString, QString, QString, float salaire);

    //getters
    QString getnom(){return nom;}
    QString getprenom(){return prenom;}
    QString getposte(){return poste;}
    QString getID(){return id;}
    float getsalaire(){return salaire;}



    //setters
         void setnom(QString n ){nom=n;}
         void setprenom(QString pr){prenom= pr;}
         void setposte(QString p ){poste= p;}
         void setID(QString id){this->id=id;}
         void setsalaire(float s){salaire=s;}


         //fonctionnalite

         bool ajouter();
         QSqlQueryModel*afficher();
         QSqlQueryModel*afficher(QSqlQuery& query);
         bool supprimer(QString);
         bool modifier();

         bool doesIDExist(QString idd);
         bool isPasswordCorrect(QString idd, const QString& password);
         QString getRole(QString idd);

  };


#endif // EMPLOYEE_H
