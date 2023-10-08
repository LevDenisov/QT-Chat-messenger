#include "Server.h"

int32_t ID = 0; // TODO: replace with a generator

Server::Server(QObject *parent) { // TODO: add field: ip, port
    try {
        this->listen(QHostAddress("127.0.0.1"), 1234);
        qDebug() << "Server connected: " << "127.0.0.1" << ':' << 1234;

        connect(this, SIGNAL(newConnection()), this, SLOT(incomingConnection()));
    } catch (const std::exception &e) {
        qDebug() << e.what();
    }
}

Server::~Server() {
    qDebug() << "Server disconnect: " << QHostAddress::Any << ':' << 6666;
}

int32_t Server::addConnection(QTcpSocket *connection) { // TODO: replace with a generator
    int32_t _identifier = ID++;

    users.insert(_identifier, connection);

    return _identifier;
}

void Server::removeConnection(int32_t socket_descriptor) {
    users.remove(socket_descriptor);
}

void Server::incomingConnection() { // TODO: issue as an HTTP request
    qDebug() << "Send client connect status - YES";
}

void Server::deleteConnection(int32_t socketDescriptor) {
    removeConnection(socketDescriptor);
}