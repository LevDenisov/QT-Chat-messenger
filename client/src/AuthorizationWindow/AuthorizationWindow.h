#ifndef MESSENGER_CLIENT_AUTHORIZATIONWINDOW_H
#define MESSENGER_CLIENT_AUTHORIZATIONWINDOW_H

#include <QWidget>

#include "../ServerCommunication/ServerCommunication.h"

#include "ui/authorization_window_ui.h"

class AuthorizationWindow : private QWidget, private Ui::Authorization {
public:
    AuthorizationWindow() {
        setupUi(this);
        emit onApplicationStartup();

        // UI
        connect(Ui::Authorization::authorizationButton,SIGNAL(clicked()),this,SLOT(clickedAuthorization()));

        // Server
        connect(&server, SIGNAL(authenticationSuccessful()), this, SLOT(authenticationSuccessful()));
        connect(&server, SIGNAL(dialogClosed()), this, SLOT(onApplicationStartup()));
    }

signals:
private:
    Q_OBJECT;

    ServerCommunication& server = ServerCommunication::instance();

public slots:

private slots:
    void onApplicationStartup() {
        this->show();
    }

    void onApplicationClosing() {
        this->close();
    }

    void authenticationSuccessful() {
        this->hide();
    }

    void clickedAuthorization() {
        QString username = Ui::Authorization::username->text();

        if (username.isEmpty()) {
            return;
        }

        server.connectionSever(username);
        emit server.goToDialogWindow();
    }
};


#endif //MESSENGER_CLIENT_AUTHORIZATIONWINDOW_H
