/********************************************************************************
** Form generated from reading UI file 'dialogdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDASHBOARD_H
#define UI_DIALOGDASHBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogdashboard
{
public:
    QWidget *widget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLineEdit *lineEdit_15;
    QLabel *label_13;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit_11;
    QTableView *tableView;
    QWidget *widget_2;
    QGroupBox *dashboard;
    QGroupBox *groupBoxtaches;
    QVBoxLayout *verticalLayout;
    QPushButton *employeebo;
    QPushButton *clenitbot;
    QPushButton *supplierbot;
    QPushButton *servicesbot;
    QPushButton *reclamationbot;
    QGroupBox *groupBoxsettings;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *homepushbotton;
    QGroupBox *gb_modifier;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_8;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_12;
    QLineEdit *lineEdit_16;
    QLabel *label_14;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QPushButton *pushButton_9;
    QComboBox *comboBox;
    QPushButton *pushButton_10;
    QLineEdit *lineEdit_14;
    QPushButton *pushButton_11;

    void setupUi(QDialog *Dialogdashboard)
    {
        if (Dialogdashboard->objectName().isEmpty())
            Dialogdashboard->setObjectName("Dialogdashboard");
        Dialogdashboard->resize(1486, 731);
        Dialogdashboard->setStyleSheet(QString::fromUtf8("#Dialogdashboard{\n"
"	border-image:url(:/images/format.jpg);\n"
"\n"
"}"));
        widget = new QWidget(Dialogdashboard);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-20, 0, 1701, 911));
        widget->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(98, 161, 255,0.8);"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(250, 90, 311, 581));
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox {\n"
"    border: none; /* Pas de bordure */\n"
"    border-radius: 8px; /* Coins arrondis */\n"
"    padding: 10px; /* Espacement interne */\n"
"    margin: 10px; /* Espacement externe */\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); /* D\303\251grad\303\251 de bleu clair */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin; /* Position du titre */\n"
"    left: 10px; /* D\303\251calage \303\240 gauche */\n"
"    padding: 0 5px; /* Espacement autour du titre */\n"
"    color: #1976D2; /* Couleur du titre */\n"
"    font-size: 16px; /* Taille du titre */\n"
"    font-weight: bold; /* Titre en gras */\n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 181, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); /* Fond bleu clair */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    padding: 10px; /* Espacement interne */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-weight: bold; /* Texte en gras */\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 100, 161, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); /* Fond bleu clair */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    padding: 10px; /* Espacement interne */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-weight: bold; /* Texte en gras */\n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 190, 201, 41));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); /* Fond bleu clair */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    padding: 10px; /* Espacement interne */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-weight: bold; /* Texte en gras */\n"
"}"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 280, 121, 41));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); /* Fond bleu clair */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    padding: 10px; /* Espacement interne */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-weight: bold; /* Texte en gras */\n"
"}"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 370, 181, 41));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); /* Fond bleu clair */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    padding: 10px; /* Espacement interne */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-weight: bold; /* Texte en gras */\n"
"}"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 70, 231, 26));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(30, 240, 241, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(30, 410, 241, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(30, 150, 231, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(30, 330, 241, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 520, 111, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #003366; /* Bleu marin */\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 5px;\n"
"    box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.2); /* Ombre */\n"
"    transition: background-color 0.3s, transform 0.2s; /* Transition */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #002244; /* Bleu marin plus fonc\303\251 */\n"
"    transform: translateY(-2px); /* L\303\251g\303\250re \303\251l\303\251vation */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #001122; /* Bleu marin encore plus fonc\303\251 */\n"
"    transform: translateY(0); /* R\303\251trogradation */\n"
"}"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(160, 520, 111, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #003366; /* Bleu marin */\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 5px;\n"
"    box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.2); /* Ombre */\n"
"    transition: background-color 0.3s, transform 0.2s; /* Transition */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #002244; /* Bleu marin plus fonc\303\251 */\n"
"    transform: translateY(-2px); /* L\303\251g\303\250re \303\251l\303\251vation */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #001122; /* Bleu marin encore plus fonc\303\251 */\n"
"    transform: translateY(0); /* R\303\251trogradation */\n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 0, 291, 41));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #003366; /* Bleu marin */\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 5px;\n"
"    box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.2); /* Ombre */\n"
"    transition: background-color 0.3s, transform 0.2s; /* Transition */\n"
"color: #ffffff; /* Texte bleu fonc\303\251 */\n"
"    padding: 10px; /* Espacement interne */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-weight: bold; /* Texte en gras */\n"
"\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: #002244; /* Bleu marin plus fonc\303\251 */\n"
"    transform: translateY(-2px); /* L\303\251g\303\250re \303\251l\303\251vation */\n"
"}\n"
"\n"
"QLabel:pressed {\n"
"    background-color: #001122; /* Bleu marin encore plus fonc\303\251 */\n"
"    transform: translateY(0); /* R\303\251trogradation */\n"
"}"));
        lineEdit_15 = new QLineEdit(groupBox);
        lineEdit_15->setObjectName("lineEdit_15");
        lineEdit_15->setGeometry(QRect(30, 480, 241, 31));
        lineEdit_15->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(30, 440, 181, 41));
        label_13->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); /* Fond bleu clair */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    padding: 10px; /* Espacement interne */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-weight: bold; /* Texte en gras */\n"
"}"));
        label->raise();
        label_2->raise();
        label_3->raise();
        label_7->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        lineEdit_5->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        label_8->raise();
        label_4->raise();
        lineEdit_15->raise();
        label_13->raise();
        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(1380, 80, 111, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #003366; /* Bleu marin */\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 5px;\n"
"    box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.2); /* Ombre */\n"
"    transition: background-color 0.3s, transform 0.2s; /* Transition */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #002244; /* Bleu marin plus fonc\303\251 */\n"
"    transform: translateY(-2px); /* L\303\251g\303\250re \303\251l\303\251vation */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #001122; /* Bleu marin encore plus fonc\303\251 */\n"
"    transform: translateY(0); /* R\303\251trogradation */\n"
"}"));
        lineEdit_11 = new QLineEdit(widget);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setGeometry(QRect(1280, 90, 91, 31));
        lineEdit_11->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(910, 130, 581, 251));
        tableView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    border: none; /* Pas de bordure */\n"
"    border-radius: 8px; /* Coins arrondis */\n"
"    padding: 10px; /* Espacement interne */\n"
"    margin: 10px; /* Espacement externe */\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); /* D\303\251grad\303\251 de bleu clair */\n"
"}\n"
"\n"
"QQTableView::title {\n"
"    subcontrol-origin: margin; /* Position du titre */\n"
"    left: 10px; /* D\303\251calage \303\240 gauche */\n"
"    padding: 0 5px; /* Espacement autour du titre */\n"
"    color: #1976D2; /* Couleur du titre */\n"
"    font-size: 16px; /* Taille du titre */\n"
"    font-weight: bold; /* Titre en gras */\n"
"}\n"
""));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, -10, 1541, 81));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: #003366; /* Bleu marin */\n"
"border: none; /* Pas de bordure */\n"
"border-radius: 5px;\n"
"font-size: 12pt;"));
        dashboard = new QGroupBox(widget);
        dashboard->setObjectName("dashboard");
        dashboard->setGeometry(QRect(10, 0, 221, 791));
        dashboard->setStyleSheet(QString::fromUtf8("background-color: #003366; /* Bleu marin */\n"
"border: none; /* Pas de bordure */\n"
"border-radius: 5px;\n"
"font-size: 12pt;\n"
""));
        groupBoxtaches = new QGroupBox(dashboard);
        groupBoxtaches->setObjectName("groupBoxtaches");
        groupBoxtaches->setGeometry(QRect(30, 90, 151, 381));
        groupBoxtaches->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: transparent; /* Transparent */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    border: 2px solid #0D47A1; /* Bordure bleu fonc\303\251 */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    font-size: 16px; /* Taille de la police */\n"
"}\n"
"\n"
"QGroupBox::drop-down {\n"
"    border: none; /* Pas de bordure pour le menu d\303\251roulant */\n"
"}\n"
"\n"
"QGroupBox::view {\n"
"    background-color: #ffffff; /* Fond blanc pour la liste d\303\251roulante */\n"
"    selection-background-color: #e1f5fe; /* Fond bleu tr\303\250s clair lors de la s\303\251lection */\n"
"    selection-color: #0D47A1; /* Texte bleu fonc\303\251 lors de la s\303\251lection */\n"
"}"));
        verticalLayout = new QVBoxLayout(groupBoxtaches);
        verticalLayout->setObjectName("verticalLayout");
        employeebo = new QPushButton(groupBoxtaches);
        employeebo->setObjectName("employeebo");
        employeebo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;  /* Remove background */\n"
"    border: none;                   /* Remove borders */\n"
"    font-family: 'Poppins';          /* Example font, you can choose any */\n"
"    font-size: 8pt;                 /* Adjust the size */\n"
"    color: white;                  /* Set the text color */\n"
"    font-weight: bold;               /* Make the text bold */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: #0772af;                  /* Change color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    color: #38b6ff;                  /* Change color when pressed */\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/employe.png"), QSize(), QIcon::Normal, QIcon::Off);
        employeebo->setIcon(icon);
        employeebo->setIconSize(QSize(40, 40));

        verticalLayout->addWidget(employeebo);

        clenitbot = new QPushButton(groupBoxtaches);
        clenitbot->setObjectName("clenitbot");
        clenitbot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;  /* Remove background */\n"
"    border: none;                   /* Remove borders */\n"
"    font-family: 'Poppins';          /* Example font, you can choose any */\n"
"    font-size: 8pt;                 /* Adjust the size */\n"
"    color: white;                  /* Set the text color */\n"
"    font-weight: bold;               /* Make the text bold */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: #0772af;                  /* Change color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    color: #38b6ff;                  /* Change color when pressed */\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/clinetic.png"), QSize(), QIcon::Normal, QIcon::Off);
        clenitbot->setIcon(icon1);
        clenitbot->setIconSize(QSize(40, 40));

        verticalLayout->addWidget(clenitbot);

        supplierbot = new QPushButton(groupBoxtaches);
        supplierbot->setObjectName("supplierbot");
        supplierbot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;  /* Remove background */\n"
"    border: none;                   /* Remove borders */\n"
"    font-family: 'Poppins';          /* Example font, you can choose any */\n"
"    font-size: 8pt;                 /* Adjust the size */\n"
"    color: white;                  /* Set the text color */\n"
"    font-weight: bold;               /* Make the text bold */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: #0772af;                  /* Change color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    color: #38b6ff;                  /* Change color when pressed */\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/trackicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        supplierbot->setIcon(icon2);
        supplierbot->setIconSize(QSize(40, 40));

        verticalLayout->addWidget(supplierbot);

        servicesbot = new QPushButton(groupBoxtaches);
        servicesbot->setObjectName("servicesbot");
        servicesbot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;  /* Remove background */\n"
"    border: none;                   /* Remove borders */\n"
"    font-family: 'Poppins';          /* Example font, you can choose any */\n"
"    font-size: 8pt;                 /* Adjust the size */\n"
"    color: white;                  /* Set the text color */\n"
"    font-weight: bold;               /* Make the text bold */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: #0772af;                  /* Change color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    color: #38b6ff;                  /* Change color when pressed */\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/servicess.png"), QSize(), QIcon::Normal, QIcon::Off);
        servicesbot->setIcon(icon3);
        servicesbot->setIconSize(QSize(40, 40));

        verticalLayout->addWidget(servicesbot);

        reclamationbot = new QPushButton(groupBoxtaches);
        reclamationbot->setObjectName("reclamationbot");
        reclamationbot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;  /* Remove background */\n"
"    border: none;                   /* Remove borders */\n"
"    font-family: 'Poppins';         /* Set the font */\n"
"    font-size: 8pt;                 /* Adjust the size */\n"
"    color: white;                   /* Set the text color */\n"
"    font-weight: bold;              /* Make the text bold */\n"
"    text-align: right;              /* Align text to the right */\n"
"    padding-right: 30px;            /* Add padding to move text away from the right edge */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: #0772af;                 /* Change color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    color: #38b6ff;                 /* Change color when pressed */\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/reclamationicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        reclamationbot->setIcon(icon4);
        reclamationbot->setIconSize(QSize(40, 40));

        verticalLayout->addWidget(reclamationbot);

        groupBoxsettings = new QGroupBox(dashboard);
        groupBoxsettings->setObjectName("groupBoxsettings");
        groupBoxsettings->setGeometry(QRect(30, 490, 151, 101));
        groupBoxsettings->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: transparent; /* Transparent */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    border: 2px solid #0D47A1; /* Bordure bleu fonc\303\251 */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    font-size: 16px; /* Taille de la police */\n"
"}\n"
"\n"
"QGroupBox::drop-down {\n"
"    border: none; /* Pas de bordure pour le menu d\303\251roulant */\n"
"}\n"
"\n"
"QGroupBox::view {\n"
"    background-color: #ffffff; /* Fond blanc pour la liste d\303\251roulante */\n"
"    selection-background-color: #e1f5fe; /* Fond bleu tr\303\250s clair lors de la s\303\251lection */\n"
"    selection-color: #0D47A1; /* Texte bleu fonc\303\251 lors de la s\303\251lection */\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(groupBoxsettings);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton = new QPushButton(groupBoxsettings);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;  /* Remove background */\n"
"    border: none;                   /* Remove borders */\n"
"    font-family: 'Poppins';          /* Example font, you can choose any */\n"
"    font-size: 8pt;                 /* Adjust the size */\n"
"    color: white;                  /* Set the text color */\n"
"    font-weight: bold;               /* Make the text bold */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: #0772af;                  /* Change color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    color: #38b6ff;                  /* Change color when pressed */\n"
"}\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(40, 40));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBoxsettings);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent;  /* Remove background */\n"
"    border: none;                   /* Remove borders */\n"
"    font-family: 'Poppins';          /* Example font, you can choose any */\n"
"    font-size: 8pt;                 /* Adjust the size */\n"
"    color: white;                  /* Set the text color */\n"
"    font-weight: bold;               /* Make the text bold */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: #0772af;                  /* Change color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    color: #38b6ff;                  /* Change color when pressed */\n"
"}\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/logouticon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon6);
        pushButton_2->setIconSize(QSize(40, 40));

        verticalLayout_2->addWidget(pushButton_2);

        homepushbotton = new QPushButton(dashboard);
        homepushbotton->setObjectName("homepushbotton");
        homepushbotton->setGeometry(QRect(-30, 0, 261, 71));
        homepushbotton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background:qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); ; /* D\303\251grad\303\251 de bleu */\n"
"    color: white; /* Texte blanc */\n"
"    border: none; /* Pas de bordure */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    transition: background 0.3s, transform 0.2s; /* Transition */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #42A5F5, stop:1 #1976D2); /* D\303\251grad\303\251 plus fonc\303\251 */\n"
"    transform: translateY(-2px); /* L\303\251g\303\250re \303\251l\303\251vation */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #1E88E5, stop:1 #0D47A1); /* D\303\251grad\303\251 tr\303\250s fonc\303\251 */\n"
"    transform: translateY(0); /* R\303\251trogradation */\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/homebuttonicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        homepushbotton->setIcon(icon7);
        homepushbotton->setIconSize(QSize(40, 40));
        gb_modifier = new QGroupBox(widget);
        gb_modifier->setObjectName("gb_modifier");
        gb_modifier->setGeometry(QRect(580, 130, 301, 561));
        gb_modifier->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox {\n"
"    border: none; /* Pas de bordure */\n"
"    border-radius: 8px; /* Coins arrondis */\n"
"    padding: 10px; /* Espacement interne */\n"
"    margin: 10px; /* Espacement externe */\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); /* D\303\251grad\303\251 de bleu clair */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin; /* Position du titre */\n"
"    left: 10px; /* D\303\251calage \303\240 gauche */\n"
"    padding: 0 5px; /* Espacement autour du titre */\n"
"    color: #1976D2; /* Couleur du titre */\n"
"    font-size: 16px; /* Taille du titre */\n"
"    font-weight: bold; /* Titre en gras */\n"
"}"));
        lineEdit_6 = new QLineEdit(gb_modifier);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(30, 75, 151, 31));
        lineEdit_6->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        lineEdit_7 = new QLineEdit(gb_modifier);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(30, 150, 151, 26));
        lineEdit_7->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        lineEdit_9 = new QLineEdit(gb_modifier);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(40, 300, 131, 31));
        lineEdit_9->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        lineEdit_10 = new QLineEdit(gb_modifier);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(40, 380, 131, 31));
        lineEdit_10->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        label_6 = new QLabel(gb_modifier);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 110, 141, 41));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); /* Fond bleu clair */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    padding: 10px; /* Espacement interne */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-weight: bold; /* Texte en gras */\n"
"}"));
        label_10 = new QLabel(gb_modifier);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(30, 260, 151, 41));
        label_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); /* Fond bleu clair */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    padding: 10px; /* Espacement interne */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-weight: bold; /* Texte en gras */\n"
"}"));
        label_11 = new QLabel(gb_modifier);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(40, 340, 131, 41));
        label_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); /* Fond bleu clair */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    padding: 10px; /* Espacement interne */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-weight: bold; /* Texte en gras */\n"
"}"));
        pushButton_5 = new QPushButton(gb_modifier);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(50, 500, 111, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #003366; /* Bleu marin */\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 5px;\n"
"    box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.2); /* Ombre */\n"
"    transition: background-color 0.3s, transform 0.2s; /* Transition */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #002244; /* Bleu marin plus fonc\303\251 */\n"
"    transform: translateY(-2px); /* L\303\251g\303\250re \303\251l\303\251vation */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #001122; /* Bleu marin encore plus fonc\303\251 */\n"
"    transform: translateY(0); /* R\303\251trogradation */\n"
"}"));
        lineEdit_8 = new QLineEdit(gb_modifier);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(30, 220, 151, 31));
        lineEdit_8->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        label_9 = new QLabel(gb_modifier);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 180, 151, 41));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); /* Fond bleu clair */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    padding: 10px; /* Espacement interne */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-weight: bold; /* Texte en gras */\n"
"}"));
        label_5 = new QLabel(gb_modifier);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 30, 151, 41));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); /* Fond bleu clair */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    padding: 10px; /* Espacement interne */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-weight: bold; /* Texte en gras */\n"
"}"));
        label_12 = new QLabel(gb_modifier);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, -10, 281, 41));
        label_12->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #003366; /* Bleu marin */\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 5px;\n"
"    box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.2); /* Ombre */\n"
"    transition: background-color 0.3s, transform 0.2s; /* Transition */\n"
"color: #ffffff; /* Texte bleu fonc\303\251 */\n"
"    padding: 10px; /* Espacement interne */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-weight: bold; /* Texte en gras */\n"
"\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    background-color: #002244; /* Bleu marin plus fonc\303\251 */\n"
"    transform: translateY(-2px); /* L\303\251g\303\250re \303\251l\303\251vation */\n"
"}\n"
"\n"
"QLabel:pressed {\n"
"    background-color: #001122; /* Bleu marin encore plus fonc\303\251 */\n"
"    transform: translateY(0); /* R\303\251trogradation */\n"
"}"));
        lineEdit_16 = new QLineEdit(gb_modifier);
        lineEdit_16->setObjectName("lineEdit_16");
        lineEdit_16->setGeometry(QRect(44, 450, 141, 31));
        lineEdit_16->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        label_14 = new QLabel(gb_modifier);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(44, 410, 131, 40));
        label_14->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #e3f2fd, stop:1 #bbdefb); /* Fond bleu clair */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    padding: 10px; /* Espacement interne */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-weight: bold; /* Texte en gras */\n"
"}"));
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(1380, 380, 101, 41));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #003366; /* Bleu marin */\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 5px;\n"
"    box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.2); /* Ombre */\n"
"    transition: background-color 0.3s, transform 0.2s; /* Transition */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #002244; /* Bleu marin plus fonc\303\251 */\n"
"    transform: translateY(-2px); /* L\303\251g\303\250re \303\251l\303\251vation */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #001122; /* Bleu marin encore plus fonc\303\251 */\n"
"    transform: translateY(0); /* R\303\251trogradation */\n"
"}"));
        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(1220, 680, 141, 41));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #003366; /* Bleu marin */\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 5px;\n"
"    box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.2); /* Ombre */\n"
"    transition: background-color 0.3s, transform 0.2s; /* Transition */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #002244; /* Bleu marin plus fonc\303\251 */\n"
"    transform: translateY(-2px); /* L\303\251g\303\250re \303\251l\303\251vation */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #001122; /* Bleu marin encore plus fonc\303\251 */\n"
"    transform: translateY(0); /* R\303\251trogradation */\n"
"}"));
        lineEdit_12 = new QLineEdit(widget);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setGeometry(QRect(730, 90, 101, 26));
        lineEdit_12->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        lineEdit_13 = new QLineEdit(widget);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setGeometry(QRect(840, 90, 91, 26));
        lineEdit_13->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(940, 90, 111, 31));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #003366; /* Bleu marin */\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 5px 20px;\n"
"    border-radius: 5px;\n"
"    box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.2); /* Ombre */\n"
"    transition: background-color 0.3s, transform 0.2s; /* Transition */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #002244; /* Bleu marin plus fonc\303\251 */\n"
"    transform: translateY(-2px); /* L\303\251g\303\250re \303\251l\303\251vation */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #001122; /* Bleu marin encore plus fonc\303\251 */\n"
"    transform: translateY(0); /* R\303\251trogradation */\n"
"}"));
        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(1060, 90, 111, 26));
        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(1180, 80, 81, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #003366; /* Bleu marin */\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 5px;\n"
"    box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.2); /* Ombre */\n"
"    transition: background-color 0.3s, transform 0.2s; /* Transition */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #002244; /* Bleu marin plus fonc\303\251 */\n"
"    transform: translateY(-2px); /* L\303\251g\303\250re \303\251l\303\251vation */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #001122; /* Bleu marin encore plus fonc\303\251 */\n"
"    transform: translateY(0); /* R\303\251trogradation */\n"
"}"));
        lineEdit_14 = new QLineEdit(widget);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setGeometry(QRect(1120, 680, 91, 31));
        lineEdit_14->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc; /* Bordure grise */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement interne */\n"
"    background-color: white; /* Fond blanc */\n"
"    color: #0D47A1; /* Texte bleu fonc\303\251 */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1); /* Ombre */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3; /* Bordure bleue au focus */\n"
"}"));
        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(1372, 680, 111, 41));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #003366; /* Bleu marin */\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 5px;\n"
"    box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.2); /* Ombre */\n"
"    transition: background-color 0.3s, transform 0.2s; /* Transition */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #002244; /* Bleu marin plus fonc\303\251 */\n"
"    transform: translateY(-2px); /* L\303\251g\303\250re \303\251l\303\251vation */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #001122; /* Bleu marin encore plus fonc\303\251 */\n"
"    transform: translateY(0); /* R\303\251trogradation */\n"
"}"));
        widget_2->raise();
        dashboard->raise();
        groupBox->raise();
        pushButton_6->raise();
        lineEdit_11->raise();
        tableView->raise();
        gb_modifier->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        lineEdit_12->raise();
        lineEdit_13->raise();
        pushButton_9->raise();
        comboBox->raise();
        pushButton_10->raise();
        lineEdit_14->raise();
        pushButton_11->raise();

        retranslateUi(Dialogdashboard);

        QMetaObject::connectSlotsByName(Dialogdashboard);
    } // setupUi

    void retranslateUi(QDialog *Dialogdashboard)
    {
        Dialogdashboard->setWindowTitle(QCoreApplication::translate("Dialogdashboard", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Dialogdashboard", "NOM", nullptr));
        label_2->setText(QCoreApplication::translate("Dialogdashboard", "PRENOM", nullptr));
        label_3->setText(QCoreApplication::translate("Dialogdashboard", "IDENTIFIANT", nullptr));
        label_7->setText(QCoreApplication::translate("Dialogdashboard", "POSTE", nullptr));
        label_8->setText(QCoreApplication::translate("Dialogdashboard", "SALAIRE", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialogdashboard", "AJOUTER", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialogdashboard", "ANNULER", nullptr));
        label_4->setText(QCoreApplication::translate("Dialogdashboard", "AJOUTER UN EMPLOYEE", nullptr));
        label_13->setText(QCoreApplication::translate("Dialogdashboard", "Password", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialogdashboard", "supprimer", nullptr));
        dashboard->setTitle(QCoreApplication::translate("Dialogdashboard", "GroupBox", nullptr));
        employeebo->setText(QCoreApplication::translate("Dialogdashboard", "Employee", nullptr));
        clenitbot->setText(QCoreApplication::translate("Dialogdashboard", "   Clients", nullptr));
        supplierbot->setText(QCoreApplication::translate("Dialogdashboard", "Supplier", nullptr));
        servicesbot->setText(QCoreApplication::translate("Dialogdashboard", "Services", nullptr));
        reclamationbot->setText(QCoreApplication::translate("Dialogdashboard", "Report", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialogdashboard", "Settings", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialogdashboard", "Log out", nullptr));
        homepushbotton->setText(QCoreApplication::translate("Dialogdashboard", "Dashboard", nullptr));
        gb_modifier->setTitle(QCoreApplication::translate("Dialogdashboard", "modifier", nullptr));
        label_6->setText(QCoreApplication::translate("Dialogdashboard", "prenom", nullptr));
        label_10->setText(QCoreApplication::translate("Dialogdashboard", "poste", nullptr));
        label_11->setText(QCoreApplication::translate("Dialogdashboard", "salaire", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialogdashboard", "MODIFIER", nullptr));
        label_9->setText(QCoreApplication::translate("Dialogdashboard", "identifiant", nullptr));
        label_5->setText(QCoreApplication::translate("Dialogdashboard", "nom", nullptr));
        label_12->setText(QCoreApplication::translate("Dialogdashboard", "                 MODIFICATION", nullptr));
        label_14->setText(QCoreApplication::translate("Dialogdashboard", "Password", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Dialogdashboard", "UPDATE", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Dialogdashboard", "fiche de paie", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Dialogdashboard", "rechercher ", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Dialogdashboard", "trier", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Dialogdashboard", "statistique", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialogdashboard: public Ui_Dialogdashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDASHBOARD_H
