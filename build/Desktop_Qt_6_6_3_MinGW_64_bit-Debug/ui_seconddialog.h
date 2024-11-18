/********************************************************************************
** Form generated from reading UI file 'seconddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDDIALOG_H
#define UI_SECONDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondDialog
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *usernameregistr;
    QLabel *label_2;
    QLineEdit *emailreg;
    QLabel *label_3;
    QLineEdit *passwordreg;
    QPushButton *pushButton;

    void setupUi(QDialog *secondDialog)
    {
        if (secondDialog->objectName().isEmpty())
            secondDialog->setObjectName("secondDialog");
        secondDialog->resize(690, 435);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/OIP-removebg-preview (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        secondDialog->setWindowIcon(icon);
        secondDialog->setStyleSheet(QString::fromUtf8("#secondDialog{\n"
"\n"
"border-image: url(:/images/backregestr.png);}"));
        groupBox = new QGroupBox(secondDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(340, 20, 281, 321));
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
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 40, 241, 261));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        usernameregistr = new QLineEdit(widget);
        usernameregistr->setObjectName("usernameregistr");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(usernameregistr->sizePolicy().hasHeightForWidth());
        usernameregistr->setSizePolicy(sizePolicy);
        usernameregistr->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(usernameregistr);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        emailreg = new QLineEdit(widget);
        emailreg->setObjectName("emailreg");
        sizePolicy.setHeightForWidth(emailreg->sizePolicy().hasHeightForWidth());
        emailreg->setSizePolicy(sizePolicy);
        emailreg->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(emailreg);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        passwordreg = new QLineEdit(widget);
        passwordreg->setObjectName("passwordreg");
        sizePolicy.setHeightForWidth(passwordreg->sizePolicy().hasHeightForWidth());
        passwordreg->setSizePolicy(sizePolicy);
        passwordreg->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        passwordreg->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passwordreg);

        pushButton = new QPushButton(secondDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(510, 350, 111, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-family: 'Garet';            /* Set the font to Garet */\n"
"    font-size: 18pt;               /* Set the font size to 24.1 pt */\n"
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

        retranslateUi(secondDialog);

        QMetaObject::connectSlotsByName(secondDialog);
    } // setupUi

    void retranslateUi(QDialog *secondDialog)
    {
        secondDialog->setWindowTitle(QCoreApplication::translate("secondDialog", "Clever Clean Registration System", nullptr));
        groupBox->setTitle(QCoreApplication::translate("secondDialog", "Create An Account ", nullptr));
        label->setText(QCoreApplication::translate("secondDialog", "<html>\n"
"<head/>\n"
"<body>\n"
"    <p>\n"
"        <span style=\"font-family:'Garet'; color:#17224d;\">Username:</span>\n"
"    </p>\n"
"</body>\n"
"</html>\n"
"", nullptr));
        label_2->setText(QCoreApplication::translate("secondDialog", "<html>\n"
"<head/>\n"
"<body>\n"
"    <p>\n"
"        <span style=\"font-family:'Garet'; color:#17224d;\">Email Adress:</span>\n"
"    </p>\n"
"</body>\n"
"</html>\n"
"", nullptr));
        label_3->setText(QCoreApplication::translate("secondDialog", "<html>\n"
"<head/>\n"
"<body>\n"
"    <p>\n"
"        <span style=\"font-family:'Garet'; color:#17224d;\">Password:</span>\n"
"    </p>\n"
"</body>\n"
"</html>\n"
"", nullptr));
        pushButton->setText(QCoreApplication::translate("secondDialog", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondDialog: public Ui_secondDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDDIALOG_H
