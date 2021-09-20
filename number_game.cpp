// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: September 2021
// This program is a number guessing game

#include <iostream>

int main() {
    // This function is the number guessing game
    const int CORRECT_NUMBER = 5;
    int guessed_number;

    // Input
    std::cout << "Pick a number between 1-9: ";
    std::cin >> guessed_number;
    std::cout << "" << std::endl;

    // Process and Output
    if (guessed_number == CORRECT_NUMBER) {
        std::cout << ("You guessed the correct number") << std::endl;
    }

    if (guessed_number != CORRECT_NUMBER) {
        std::cout << ("You guessed incorrectly, please run again.")
        << std::endl;
    }

    std::cout << ("") << std::endl;
    std::cout << ("Done.") << std::endl;
}
