// Copyright (c) 2022 Paterry Baptichn All rights reserved.
//
// Created by: Paterry Baptichon Junior
// Created on: 2022-04-06
// This is a program which tells you the name of the month you input.

#include <iostream>

int main() {
    // This is what identifies the month. Declaring a variable.
    int month_number;

    // ask user for the month number
        std::cout << "Input the number of a month: ";
        std::cin >> month_number;
        std::cout << "" << std::endl;

    // state the month selected as a string
    switch (month_number) {
            case 1 :
                std::cout << "January" << std::endl;
                break;
            case 2 :
                std::cout << "Febuary" << std::endl;
                break;
            case 3 :
                std::cout << "March" << std::endl;
                break;
            case 4 :
                std::cout << "April" << std::endl;
                break;
            case 5 :
                std::cout << "May" << std::endl;
                break;
            case 6 :
                std::cout << "June" << std::endl;
                break;
            case 7 :
                std::cout << "July" << std::endl;
                break;
            case 8 :
                std::cout << "August" << std::endl;
                break;
            case 9 :
                std::cout << "September" << std::endl;
                break;
            case 10 :
                std::cout << "october" << std::endl;
                break;
            case 11 :
                std::cout << "november" << std::endl;
                break;
            case 12 :
                std::cout << "december" << std::endl;
                break;
            default :
                std::cout << "That's not a month" << std::endl;
        }
}
