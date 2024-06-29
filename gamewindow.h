//
// Created by samael on 29/06/24.
//

#ifndef TAMAGOTCHI_GAMEWINDOW_H
#define TAMAGOTCHI_GAMEWINDOW_H

#include <QWidget>
#include <QTimer>
#include "Tamagotchi.h"


QT_BEGIN_NAMESPACE
namespace Ui { class GameWindow; }
QT_END_NAMESPACE

class GameWindow : public QWidget {
Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr, Tamagotchi *tamagotchi = nullptr);

    ~GameWindow() override;

private slots:

    void feedTamagotchi();

    void hugTamagotchi();

    void walkTamagotchi();

    void updateStatus();

    void liveCycle();

    void saveGame();

    void backToMenu();

    void progressBarColor();

signals:

    void backToMainWindow();

private:
    Ui::GameWindow *ui;
    Tamagotchi *tamagotchi;
    QTimer *timer;
};


#endif //TAMAGOTCHI_GAMEWINDOW_H
