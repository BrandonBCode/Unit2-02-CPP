// Copyright (c) 2025 Brandon All rights reserved.
// Created By : Brandon
// Date : September 26th, 2025
// This program displays and calculates the circumference of a circle using TAU

#include <iostream>

int main() {
    // constants
    const float TAU = 6.28;

    // variables
    float radius, circumference;

    // get radius input from user
    std::cout << "Enter Radius of the Circle (CM): ";
    std::cin >> radius;

    // calculate circumference with TAU
    circumference = radius * TAU;

    // display circumference to user
    std::cout << "\n";
    std::cout << "Circumference = " << circumference << "cm" << std::endl;
}

