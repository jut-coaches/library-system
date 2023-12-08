// Patron.cpp
#include "Patron.h"
#include <iostream>

Patron::Patron(std::string name, int libraryCardNumber)
    : name(name), libraryCardNumber(libraryCardNumber) {}

void Patron::DisplayInfo() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Library Card Number: " << libraryCardNumber << std::endl;
}
