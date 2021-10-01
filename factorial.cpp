// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Sep 2020
// This program calculates factorial numbers

#include <iostream>
#include <string>

int main() {
    // this function uses a loop
    std::string userInputAsString;
    int userInput;
    int loopCounter = 1;
    int total = 1;

    // input
    std::cout << "Please enter a positive integer : ";
    std::cin >> userInputAsString;

    // process & output
    try {
        userInput = std::stoi(userInputAsString);
        if (userInput >= 0) {
            do {
                total = total * loopCounter;
                loopCounter = loopCounter + 1;
            } while (loopCounter <= userInput);
            std::cout << "" << userInput << "! = " "" << total << std::endl;
        } else {
            std::cout << "Negative integer entered, please try again."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid integer entered, please try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
