// Copyright (c) 2019 Jack D'Angelo All rights reserved.
//
// Created by: Jack D'Angelo
// Created on: October 2019
// This program gets user to guess a number
// with user input

#include <iostream>
#include <cstdlib>
int rand();

int main() {
    int numberGuessedAsNumber;
    std::string numberGuessed;

    while (true) {
        // input
        std::cout << "Guess a number between 0-9: ";
        std::cin >> numberGuessed;
        try {
            numberGuessedAsNumber = std::stoi(numberGuessed);
            if (numberGuessedAsNumber == (rand() % 10) + 1) {
                std::cout << "You won, you guessed the number" << std::endl;
                break;
            } else {
                (numberGuessedAsNumber != (rand() % 10) + 1);
                std::cout << "Wrong, try again" << std::endl; }
        } catch(std::invalid_argument) {
            std::cout << "Not a valid number inputted" << std::endl;
        }
    }
}
