#include "MessengerWindow.h"

MessengerWindow::MessengerWindow(const User& user) : user(user) {
    setupUi(this);
    setMinimumHeight(min_height);
    setMinimumWidth(min_weight);

    // Server
    connect(&server, SIGNAL(goToDialogWindow()), this, SLOT(onApplicationStartup()));
}

void MessengerWindow::onApplicationStartup() {
    this->show();
}

void MessengerWindow::onApplicationClosing() {
    this->close();
    emit server.dialogClosed();
}
