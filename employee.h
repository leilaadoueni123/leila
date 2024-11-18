#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
class employee
{
    QString nom,prenom,poste;
    int id;
    float salaire;

public:
    employee(){}
    employee(QString, QString, QString, int, float salaire);

    //getters
    QString getnom(){return nom;}
    QString getprenom(){return prenom;}
    QString getposte(){return poste;}
    int getID(){return id;}
    float getsalaire(){return salaire;}



    //setters
         void setnom(QString n ){nom=n;}
         void setprenom(QString pr){prenom= pr;}
         void setposte(QString p ){poste= p;}
         void setID(int id){this->id=id;}
         void setsalaire(float s){salaire=s;}


         //fonctionnalite

         bool ajouter();
         QSqlQueryModel*afficher();
         QSqlQueryModel*afficher(QSqlQuery& query);
         bool supprimer(int);
         bool modifier();

         bool doesIDExist(int idd);
         bool isPasswordCorrect(int idd, const QString& password);
         QString getRole(int idd);

  };


#endif // EMPLOYEE_H
