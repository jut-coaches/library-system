// Book.h
#pragma once
#include <string>

class Book {
public:
    Book(std::string title, std::string author, int publicationYear);
    void DisplayInfo();

private:
    std::string title;
    std::string author;
    int publicationYear;
};
