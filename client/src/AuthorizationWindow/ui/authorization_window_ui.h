/********************************************************************************
** Form generated from reading UI file 'AuthorizationWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef AUTHORIZATION_WINDOW_UI_H
#define AUTHORIZATION_WINDOW_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authorization
{
public:
    QLineEdit *username;
    QLabel *label;
    QPushButton *authorizationButton;

    void setupUi(QWidget *Authorization)
    {
        if (Authorization->objectName().isEmpty())
            Authorization->setObjectName(QString::fromUtf8("Authorization"));
        Authorization->resize(280, 387);
        username = new QLineEdit(Authorization);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(100, 150, 113, 21));
        label = new QLabel(Authorization);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 150, 60, 16));
        authorizationButton = new QPushButton(Authorization);
        authorizationButton->setObjectName(QString::fromUtf8("authorizationButton"));
        authorizationButton->setGeometry(QRect(70, 190, 113, 32));

        retranslateUi(Authorization);

        QMetaObject::connectSlotsByName(Authorization);
    } // setupUi

    void retranslateUi(QWidget *Authorization)
    {
        Authorization->setWindowTitle(QCoreApplication::translate("Authorization", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
#if QT_CONFIG(tooltip)
        Authorization->setToolTip(QCoreApplication::translate("Authorization", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("Authorization", "Login:", nullptr));
        authorizationButton->setText(QCoreApplication::translate("Authorization", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Authorization: public Ui_Authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // AUTHORIZATION_WINDOW_UI_H
