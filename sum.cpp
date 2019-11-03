// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: September 2019
// This program adds an amount of numbers specified by the user

#include <iostream>

int main() {
    // This program adds an amount of numbers specified by the user

    // Variables
    int counter;
    int addingNumber;
    int sum = 0;
    int number;

    // Input
    std::cout << "Enter the amount of numbers you want to add:" << std::endl;
    std::cin >> addingNumber;
    std::cout << "" << std::endl;

    // Process
    for (counter = 0; counter < addingNumber; counter++) {
        std::cout << "Enter a number to be added here:" << std::endl;
        std::cin >> number;
        if (number < 0) {
            continue;
        }
        sum = sum + number;
    }

    // Output
    std::cout << "" << std::endl;
    std::cout << "The sum of your numbers is " << sum << std::endl;
}
