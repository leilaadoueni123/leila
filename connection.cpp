#include "connection.h"
#include <qDebug>
Connection::Connection(){}

bool Connection::createconnection()
{

db = QSqlDatabase::addDatabase("QODBC");
bool test=false;
db.setDatabaseName("projet");//inserer le nom de la source de donnÃ©es
db.setUserName("yessine");//inserer nom de l'utilisateur
db.setPassword("oracle");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;
else
    qDebug() << "Erreur de connexion :" << db.lastError().text();
    return  test;
}

void Connection::closeConnection(){db.close();}
