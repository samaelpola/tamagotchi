#include <QApplication>
#include <QPushButton>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    qputenv("QT_QPA_PLATFORM", "wayland");
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
    return QApplication::exec();
}
