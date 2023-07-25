#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setFixedSize(1280, 720);

    QPushButton button ("Hello world", &window);
    button.setGeometry(0, 0, 1280, 720);

    window.show();
    return app.exec();
}
