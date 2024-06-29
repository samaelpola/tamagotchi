//
// Created by samael on 29/06/24.
//

// You may need to build the project (run Qt uic code generator) to get "ui_gamewindow.h" resolved

#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QPixmap>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QProgressBar>
#include <fstream>

GameWindow::GameWindow(QWidget *parent, Tamagotchi *tamagotchi) :
        QWidget(parent), ui(new Ui::GameWindow), tamagotchi(tamagotchi),
        timer(new QTimer(this)) {
    ui->setupUi(this);
    QPixmap pm("../assets/tamagotchi.png");
    ui->label_img->setPixmap(pm);
    ui->label_img->setScaledContents(true);

    connect(ui->pushButton_save, SIGNAL(clicked(bool)), this, SLOT(saveGame()));
    connect(ui->pushButton_menu, SIGNAL(clicked(bool)), this, SLOT(backToMenu()));
    connect(ui->pushButton_feed, SIGNAL(clicked(bool)), this, SLOT(feedTamagotchi()));
    connect(ui->pushButton_makeHug, SIGNAL(clicked(bool)), this, SLOT(hugTamagotchi()));
    connect(ui->pushButton_walk, SIGNAL(clicked(bool)), this, SLOT(walkTamagotchi()));

    connect(ui->progressBar_happiness, SIGNAL(valueChanged(int)), this, SLOT(progressBarColor()));
    connect(ui->progressBar_feedLevel, SIGNAL(valueChanged(int)), this, SLOT(progressBarColor()));
    connect(ui->progressBar_bladderLevel, SIGNAL(valueChanged(int)), this, SLOT(progressBarColor()));

    connect(timer, &QTimer::timeout, this, &GameWindow::liveCycle);
    timer->start(5000);

    this->updateStatus();
}

void GameWindow::backToMenu() {
    emit backToMainWindow();
}

void GameWindow::saveGame() {
    std::ofstream f("save.txt", std::ofstream::out | std::ofstream::trunc);

    if (f.is_open()) {
        f << tamagotchi->getFeedLevel() << "\n";
        f << tamagotchi->getHappiness() << "\n";
        f << tamagotchi->getBladderLevel() << "\n";
        f.close();
        QMessageBox::information(this, "Success", "Your game has been saved");
    } else {
        QMessageBox::warning(this, "Error", "Error while saving the game");
    }
}

void GameWindow::feedTamagotchi() {
    if (tamagotchi) {
        tamagotchi->feed(5);
        updateStatus();
    }
}

void GameWindow::hugTamagotchi() {
    if (tamagotchi) {
        tamagotchi->hug();
        updateStatus();
    }
}

void GameWindow::walkTamagotchi() {
    if (tamagotchi) {
        tamagotchi->walk();
        updateStatus();
    }
}


void GameWindow::progressBarColor() {
    QProgressBar *progressBar = qobject_cast<QProgressBar *>(sender());
    if (!progressBar) return;

    int value = progressBar->value();

    QString color;
    if (value < 33) {
        color = "red";
    } else if (value < 66) {
        color = "orange";
    } else {
        color = "green";
    }

    QString style = QString(
            "QProgressBar {"
            "text-align: center;"
            "}"
            "QProgressBar::chunk {"
            "background-color: %1;"
            "border: 1px solid grey;"
            "border-radius: 5px;"
            "}"
    ).arg(color);

    progressBar->setStyleSheet(style);
}

void GameWindow::updateStatus() {
    if (!tamagotchi) return;

    this->ui->progressBar_feedLevel->setValue(tamagotchi->getFeedLevel());
    this->ui->progressBar_happiness->setValue(tamagotchi->getHappiness());
    this->ui->progressBar_bladderLevel->setValue(tamagotchi->getBladderLevel());

    if (tamagotchi->isAlive()) {
        QString statusMessage;

        if (tamagotchi->getHappiness() < 33) {
            statusMessage += "Your Tamagotchi is sad.\n";
        }

        if (tamagotchi->getBladderLevel() < 33) {
            statusMessage += "Your Tamagotchi needs to go to the bathroom.\n";
        }

        if (tamagotchi->getFeedLevel() < 33) {
            statusMessage += "Your Tamagotchi is hungry.\n";
        }

        if (tamagotchi->getHappiness() > 33 && tamagotchi->getFeedLevel() > 33 && tamagotchi->getBladderLevel() > 33) {
            statusMessage = "Your tamagotchi is happy.";
        } else {
            statusMessage += "Take care of your tamagotchi or it will die";
        }

        this->ui->statusLabel->setText(statusMessage);
    } else {
        QMessageBox::warning(this, "Tamagotchi", "Your Tamagotchi has died.");
        timer->stop();
        emit backToMainWindow();
    }
}

void GameWindow::liveCycle() {
    if (tamagotchi && tamagotchi->live()) {
        updateStatus();
    } else {
        QMessageBox::warning(this, "Tamagotchi", "Your Tamagotchi has died.");
        timer->stop();
        emit backToMainWindow();
    }
}

GameWindow::~GameWindow() {
    delete ui;
}
