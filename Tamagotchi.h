//
// Created by samael on 28/01/24.
//

#ifndef TAMAGOTCHI_TAMAGOTCHI_H
#define TAMAGOTCHI_TAMAGOTCHI_H

class Tamagotchi {
private:
    int m_feedLevel;
    int m_happinessLevel;
    int m_bladderLevel;

public:
    Tamagotchi(int feedLevel, int happinessLevel, int bladderLevel);

    bool isAlive();

    void feed(int percentage);

    void hug();

    void walk();

    bool live();

    int getFeedLevel();

    int getHappiness();

    int getBladderLevel();

    ~Tamagotchi();
};

#endif //TAMAGOTCHI_TAMAGOTCHI_H
