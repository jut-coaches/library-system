// Book.cpp
#include "Book.h"
#include <iostream>

Book::Book(std::string title, std::string author, int publicationYear)
    : title(title), author(author), publicationYear(publicationYear) {}

void Book::DisplayInfo() {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Publication Year: " << publicationYear << std::endl;
}
