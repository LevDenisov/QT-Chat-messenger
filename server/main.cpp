#include <QApplication>

#include "src/Server/Server.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Server server;

    return app.exec();
}