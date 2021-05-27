// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan
// Created on: May 27, 2021
// This program asks the user to enter a positive number
// and then uses a loop to calculate and display the sum
// of each number from the numbers amount


#include <iostream>


int main() {
     // initialize the loop counter and sum
    int counter = 0;
    int sum = 0;
    int numOfNumsInt;
    int numInt;
    std::string numOfNumsString;
    std::string numString;

    // get the user's number
    std::cout << "How many numbers do you want to add? ";
    std::cin >> numOfNumsString;
    try {
        numOfNumsInt = std::stoi(numOfNumsString);
        if (numOfNumsInt > 0) {
            // calculate the sum of each numbers from the amount
            while (counter < numOfNumsInt) {
                // get the user's number
                std::cout << "Enter a number ";
                std::cin >> numString;
                try {
                    numInt = std::stoi(numString);
                    if (numInt >= 0) {
                        std::cout << numInt << " has been added" << std::endl;
                        sum = sum + numInt;
                        counter = counter + 1;
                    } else {
                        std::cout << numInt << " is lower than 0, so"
                                               "it was skipped." << std::endl;
                        continue;
                    }
                } catch (std::invalid_argument) {
                    // The user did not enter an integer.
                    std::cout << "\n";
                    std::cout << "Please enter a valid number.\n";
                }
            }
        } else {
            std::cout << "\n";
            std::cout << numOfNumsInt << " is not a valid number." << std::endl;
        }
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << "\n";
        std::cout << "Please enter a valid number.\n";
    }
    std::cout << "\n";
    std::cout << "The sum of the numbers is "<< sum << std::endl;
    std::cout << "Thank you for your input" << std::endl;
}
