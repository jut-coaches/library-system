// Patron.h
#pragma once
#include <string>

class Patron {
public:
    Patron(std::string name, int libraryCardNumber);
    void DisplayInfo();

private:
    std::string name;
    int libraryCardNumber;
};
