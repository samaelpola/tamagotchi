//
// Created by samael on 28/01/24.
//

#ifndef TAMAGOTCHI_MAINWINDOW_H
#define TAMAGOTCHI_MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include "gamewindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private slots:

    void showMainWindow();

    void startNewTamagotchi();

    void loadTamagotchi();

private:
    Ui::MainWindow *ui;
    GameWindow *gameWindow;

    void runGame(int feedLevel, int happinessLevel, int bladderLevel);
};

#endif //TAMAGOTCHI_MAINWINDOW_H
