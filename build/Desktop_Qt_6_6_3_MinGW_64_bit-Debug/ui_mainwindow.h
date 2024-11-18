/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *idlogin;
    QLabel *username;
    QLineEdit *passwordlogin;
    QLabel *username_2;
    QPushButton *pushbutton;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(992, 721);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/OIP-removebg-preview (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"border-image: url(:/images/logbCK.png)\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(540, 120, 361, 401));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid #8f8f91;  /* Border color */\n"
"    border-radius: 50px;        /* Rounded corners */\n"
"    background-color: #38b6ff;  /* Background color */\n"
"    margin-top: 12px;           /* Space between title and border */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;  /* Positioning of the title */\n"
"    subcontrol-position: top left;  /* Align title to top-left */\n"
"    padding: 0 3px;             /* Padding around the title */\n"
"    background-color: #007BFF;  /* Title background color */\n"
"    color: white;               /* Title text color */\n"
"    border-radius: 5px;         /* Rounded title corners */\n"
"}\n"
""));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 361, 171));
        label->setStyleSheet(QString::fromUtf8(""));
        label->setIndent(-1);
        idlogin = new QLineEdit(groupBox);
        idlogin->setObjectName("idlogin");
        idlogin->setGeometry(QRect(40, 210, 279, 44));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(idlogin->sizePolicy().hasHeightForWidth());
        idlogin->setSizePolicy(sizePolicy1);
        idlogin->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #8f8f91; /* Default border color */\n"
"    border-radius: 20px; /* Rounded corners */\n"
"    padding: 10px; /* Inner padding */\n"
"    background-color: white; /* Background color */\n"
"    font-family: \"Garet\"; /* Font */\n"
"    font-size: 12pt; /* Font size */\n"
"    color: #17224d; /* Text color */\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 2px solid #17224d; /* Change border color on focus */\n"
"    background-color: #f0f0f0; /* Optional: change background on focus */\n"
"}\n"
"QLineEdit::placeholder {\n"
"    color: #c0c0c0; /* Placeholder color */\n"
"    font-family: \"Garet\"; /* Ensure Garet is installed */\n"
"    font-size: 12pt; /* Set font size */\n"
"}\n"
""));
        username = new QLabel(groupBox);
        username->setObjectName("username");
        username->setGeometry(QRect(40, 165, 279, 38));
        QFont font;
        font.setPointSize(14);
        username->setFont(font);
        passwordlogin = new QLineEdit(groupBox);
        passwordlogin->setObjectName("passwordlogin");
        passwordlogin->setGeometry(QRect(40, 300, 279, 44));
        sizePolicy1.setHeightForWidth(passwordlogin->sizePolicy().hasHeightForWidth());
        passwordlogin->setSizePolicy(sizePolicy1);
        passwordlogin->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"     border: 1px solid #8f8f91; /* Default border color */\n"
"    border-radius: 20px; /* Rounded corners */\n"
"    padding: 10px; /* Inner padding */\n"
"    background-color: white; /* Background color */\n"
"    font-family: \"Garet\"; /* Font */\n"
"    font-size: 14pt; /* Font size */\n"
"    color: #17224d; /* Text color */\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 2px solid #17224d; /* Change border color on focus */\n"
"    background-color: #f0f0f0; /* Optional: change background on focus */\n"
"}\n"
"QLineEdit::placeholder {\n"
"    color: #c0c0c0; /* Placeholder color */\n"
"    font-family: \"Garet\"; /* Ensure Garet is installed */\n"
"    font-size: 12pt; /* Set font size */\n"
"}\n"
""));
        passwordlogin->setEchoMode(QLineEdit::EchoMode::Password);
        username_2 = new QLabel(groupBox);
        username_2->setObjectName("username_2");
        username_2->setGeometry(QRect(40, 260, 279, 38));
        username_2->setFont(font);
        pushbutton = new QPushButton(centralwidget);
        pushbutton->setObjectName("pushbutton");
        pushbutton->setGeometry(QRect(780, 550, 131, 51));
        pushbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-family: 'Garet';            /* Set the font to Garet */\n"
"    font-size: 20pt;               /* Set the font size to 24.1 pt */\n"
"    font-weight: bold;               /* Make the text bold */\n"
"    color: #17224d;                  /* Set the text color to #17224d */\n"
"    background-color: white;         /* Default background color */\n"
"    border-radius: 15px;             /* Rounded corners */\n"
"    border: 2px solid #17224d;       /* Border color */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #38b6ff;       /* Background color when pressed */\n"
"    color: white;                    /* Text color when pressed */\n"
"}\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 540, 291, 61));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #f4fafb;\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Login And Register system", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "<html>\n"
"<head/>\n"
"<body>\n"
"    <div align=\"center\">\n"
"        <span style=\"font-size:28pt; font-weight: bold; color: #17224d;\">Login To Your</span><br style=\"line-height: 0; margin-bottom: -5px;\">\n"
"        <span style=\"font-size:28pt; font-weight: bold; color: #17224d;\">Account</span>\n"
"    </div>\n"
"</body>\n"
"</html>\n"
"", nullptr));
        username->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'Garet'; color:#17224d;\">Identfient:</span></p></body></html>", nullptr));
        username_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'Garet'; color:#17224d;\">Mot de passe:</span></p></body></html>", nullptr));
        pushbutton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<p style=\"margin: 0; line-height: 1;\"><b>Don\342\200\231t you have an account?</b></p>\n"
"<p style=\"margin: 0; line-height: 1;\">\n"
"    <b><a href=\"#signup\" style=\"color: #f4fafb; text-decoration: underline;\">Sign up now</a></b>\n"
"</p>\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
