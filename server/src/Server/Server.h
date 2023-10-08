#ifndef MESSENGER_SERVER_SERVER_H
#define MESSENGER_SERVER_SERVER_H

#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>

#include <QMap>

class Server : private QTcpServer {
public:
    explicit Server(QObject *parent = nullptr);
    ~Server();

    int32_t addConnection(QTcpSocket* connection);
    void removeConnection(int32_t socket_descriptor);

public slots:
    void incomingConnection();
    void deleteConnection(int32_t socketDescriptor);

private:
    Q_OBJECT;

    QMap<int32_t, QTcpSocket*> users;

};


#endif //MESSENGER_SERVER_SERVER_H
