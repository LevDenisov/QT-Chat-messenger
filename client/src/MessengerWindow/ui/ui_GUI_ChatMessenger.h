/********************************************************************************
** Form generated from reading UI file 'GUI_ChatMessenger.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CHATMESSENGER_H
#define UI_GUI_CHATMESSENGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(571, 508);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
                                                    "	color: white;\n"
                                                    "	background-color: #121212;\n"
                                                    "	font-family: Helvetica Neue;\n"
                                                    "	font-size: 16pt;\n"
                                                    "	font-weight: 600;\n"
                                                    "}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Helvetica Neue"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(static_cast<QFont::Weight>(75));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("font-size: 14pt;\n"
                                                  "border: none;\n"
                                                  "background-color: #444444;"));

        verticalLayout->addWidget(lineEdit);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\202 \320\274\320\265\321\201\321\201\320\265\320\275\320\264\320\266\320\265\321\200", nullptr));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CHATMESSENGER_H
