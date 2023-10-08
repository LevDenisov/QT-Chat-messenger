#include <QApplication>
#include "src/MessengerWindow/MessengerWindow.h"
#include "src/AuthorizationWindow/AuthorizationWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    AuthorizationWindow _window;

    User user("USER");

    MessengerWindow window(user);

    return app.exec();
}