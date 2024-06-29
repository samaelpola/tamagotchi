//
// Created by samael on 28/01/24.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mainWindow.h" resolved

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <fstream>

MainWindow::MainWindow(QWidget *parent) :
        QWidget(parent), ui(new Ui::MainWindow), gameWindow(nullptr) {
    ui->setupUi(this);

    QPixmap pm("../assets/tamagotchi.png");
    ui->labelImg->setPixmap(pm);
    ui->labelImg->setScaledContents(true);

    connect(ui->pushButton_newGame, SIGNAL(clicked(bool)), this, SLOT(startNewTamagotchi()));
    connect(ui->pushButton_loadGame, SIGNAL(clicked(bool)), this, SLOT(loadTamagotchi()));
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::showMainWindow() {
    this->show();
    delete gameWindow;
    gameWindow = nullptr;
}

void MainWindow::runGame(int feedLevel, int happinessLevel, int bladderLevel) {
    if (gameWindow != nullptr) {
        delete gameWindow;
    }

    Tamagotchi *tamagotchi = new Tamagotchi(feedLevel, happinessLevel, bladderLevel);
    gameWindow = new GameWindow(nullptr, tamagotchi);
    connect(gameWindow, &GameWindow::backToMainWindow, this, &MainWindow::showMainWindow);
    gameWindow->setWindowTitle("Tamagotchi");
    gameWindow->show();
    this->hide();
}

void MainWindow::startNewTamagotchi() {
    this->runGame(100, 100, 100);
}

void MainWindow::loadTamagotchi() {
    int feedLevel, happinessLevel, bladderLevel;
    std::ifstream f("save.txt");

    if (f.is_open()) {
        f >> feedLevel >> happinessLevel >> bladderLevel;
        f.close();
        this->runGame(feedLevel, happinessLevel, bladderLevel);
    }
}
