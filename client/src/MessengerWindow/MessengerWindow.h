#ifndef MESSENGER_CLIENT_MESSENGERWINDOW_H
#define MESSENGER_CLIENT_MESSENGERWINDOW_H

#include <QMainWindow>
#include <ui/ui_GUI_ChatMessenger.h>

#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>

#include "../User/User.h"
#include "../AuthorizationWindow/AuthorizationWindow.h"



class MessengerWindow : private QMainWindow, public Ui::MainWindow {
public:
    explicit MessengerWindow(const User& user);

private:
Q_OBJECT

    short min_height = 480;
    short min_weight = 640;

    ServerCommunication& server = ServerCommunication::instance();
    User user;

signals:
    void openDialogWindow();

public slots:

private slots:
    void onApplicationStartup();
    void onApplicationClosing();

};


#endif //MESSENGER_CLIENT_MESSENGERWINDOW_H
