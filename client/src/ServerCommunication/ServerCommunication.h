#ifndef MESSENGER_CLIENT_SERVERCOMMUNICATION_H
#define MESSENGER_CLIENT_SERVERCOMMUNICATION_H

#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>

class ServerCommunication : public QTcpSocket { // TODO: add config file
    Q_OBJECT;

private:
    QHostAddress ip =  QHostAddress("127.0.0.1");
    quint16 port = 1234;
    QTcpSocket* socket;

    ServerCommunication() {
        socket = new QTcpSocket(this);

        // Server
        connect(socket, SIGNAL(connected()), this, SLOT(onConnected()));
        connect(socket, SIGNAL(disconnected()), this, SLOT(onDisconnected()));
        connect(socket, SIGNAL(errorOccurred(QAbstractSocket::SocketError)), this, SLOT(onError(QAbstractSocket::SocketError)));
    }

public:
    ServerCommunication(const ServerCommunication &other) = delete;
    ServerCommunication& operator=(ServerCommunication &other) = delete;

    static ServerCommunication& instance() {
        static ServerCommunication sc;
        return sc;
    }

    int32_t connectionSever(const QString& username) {
        socket->connectToHost(ip, port);
    }

signals:
    void authenticationSuccessful();
    void disconnect();

    void goToDialogWindow();
    void dialogClosed();

private slots:

public slots:
    void onConnected()
    {
        emit authenticationSuccessful();
    }

    void onDisconnected()
    {
        emit disconnect();
    }

    void onError(QAbstractSocket::SocketError socketError)
    {
        switch (socketError)
        {
            case QAbstractSocket::ConnectionRefusedError:
                qDebug() << "Connection was refused. The server is not running or unreachable.";
                break;

            case QAbstractSocket::RemoteHostClosedError:
                qDebug() << "The remote host (server) closed the connection.";
                break;

            case QAbstractSocket::HostNotFoundError:
                qDebug() << "The host was not found. Check the IP address and port.";
                break;

            default:
                qDebug() << "Socket error: " << socketError;
        }
    }
};


#endif //MESSENGER_CLIENT_SERVERCOMMUNICATION_H
