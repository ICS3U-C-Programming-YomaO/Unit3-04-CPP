// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date : September 28, 2025
// This program plays a number guessing game with user

#include <iostream>
int main() {
    // declare variables
    int number;
    // ask user to guess number
    std::cout << "Enter an integer: ";
    std::cin >> number;
    std::cout << "" << std::endl;

    // use if statements to check answer
    if (number > 0) {
        // output
        std::cout << number << " is a positive number!";
    } else if (number < 0) {
        // output
        std::cout << number << " is a negative number";
    } else {
        // output
        std::cout << number << " is just zero!"
        << std::endl;
    }
}
