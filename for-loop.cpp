// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program uses a while loop to add all whole numbers from 1 to the
// chosen_number


#include <math.h>
#include <iostream>


// This function uses a while loop
int main() {
    int loop_counter;
    int adding_number = 0;
    std::string chosen_number_as_string;
    int chosen_number;
    int answer = 0;

    std::cout << "Input a positive integer: " << std::endl;
    std::cin >> chosen_number_as_string;
    std::cout << "" << std::endl;

    try {
        // Input
        chosen_number = std::stoi(chosen_number_as_string);

        // Process and output
        for (loop_counter=0; loop_counter <= chosen_number; loop_counter++) {
            answer = pow(loop_counter, 2);
            std::cout << loop_counter << "^2=" << answer << std::endl;
        }
    } catch(std::invalid_argument) {
        std::cout << "Please type in a whole number." << std::endl;
    }
}
