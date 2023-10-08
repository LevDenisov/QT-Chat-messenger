#ifndef MESSENGER_CLIENT_USER_H
#define MESSENGER_CLIENT_USER_H

#include <QString>

#include <QTcpSocket>


class User {
public:
    explicit User(const QString&& username, QTcpSocket* socket = nullptr) : username(username) {}

    const QString& getUsername() {
        return username;
    }


private:
    QString username;
};


#endif //MESSENGER_CLIENT_USER_H
