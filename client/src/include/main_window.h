#ifndef CHAT_MESSENGER_ON_QT_MAIN_WINDOW_H
#define CHAT_MESSENGER_ON_QT_MAIN_WINDOW_H

#include <QMainWindow>

#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>

#include <QPlainTextDocumentLayout>
#include <QDockWidget>
#include <QStyleOptionDockWidget>
#include "ui/ui_GUI_ChatMessenger.h"

class MainWindow : public QMainWindow, public Ui::MainWindow {
    int32_t min_height = 480;
    int32_t min_weight = 640;

public:
    explicit MainWindow(QWidget *parrent = nullptr) {
//        setWindowTitle("Чат-мессенджер");
//        setMinimumHeight(min_height);
//        setMinimumWidth(min_weight);
        setupUi(this);
//
//        auto *layout = new QVBoxLayout(new QTextEdit);




//
    }

private slots:
    void sendMessage() {
        //...
    }

};


#endif //CHAT_MESSENGER_ON_QT_MAIN_WINDOW_H
