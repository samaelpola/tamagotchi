//
// Created by samael on 28/01/24.
//

#include "Tamagotchi.h"
#include <random>
#include <iostream>


Tamagotchi::Tamagotchi(int feedLevel, int happinessLevel, int bladderLevel) {
    this->m_feedLevel = feedLevel;
    this->m_happinessLevel = happinessLevel;
    this->m_bladderLevel = bladderLevel;
}

int Tamagotchi::getFeedLevel() {
    return this->m_feedLevel;
}

int Tamagotchi::getHappiness() {
    return this->m_happinessLevel;
}

int Tamagotchi::getBladderLevel() {
    return this->m_bladderLevel;
}

bool Tamagotchi::isAlive() {
    return this->m_feedLevel > 1 && this->m_happinessLevel > 1 && this->m_bladderLevel > 1 && this->m_feedLevel <= 100;
}

void Tamagotchi::feed(int percentage) {
    this->m_feedLevel += percentage;
}

int getRandomNumber(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}

void Tamagotchi::hug() {
    if (this->m_happinessLevel == 100) return;
    this->m_happinessLevel += getRandomNumber(10, 30);
}

void Tamagotchi::walk() {
    if (!(this->m_bladderLevel < 25 && getRandomNumber(0, 1) == 1)) {
        this->m_bladderLevel = 100;
    }
}

bool Tamagotchi::live() {
    int random = getRandomNumber(1, 4);

    switch (random) {
        case 1:
            this->m_feedLevel -= getRandomNumber(5, 21);
            break;
        case 2:
            this->m_happinessLevel -= getRandomNumber(7, 14);
            break;
        case 3:
            this->m_bladderLevel -= getRandomNumber(1, 5);
            break;
        case 4:
            this->m_feedLevel -= 6;
            this->m_happinessLevel -= 9;
            this->m_bladderLevel -= 3;
            break;
        default:
            break;
    }

    return isAlive();
}

Tamagotchi::~Tamagotchi() = default;
