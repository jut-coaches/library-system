// Library.cpp
#include "Book.h"
#include "Patron.h"

int main() {
    // Create a book
    Book myBook("The C++ Programming Language", "Bjarne Stroustrup", 1985);

    // Create a patron
    Patron myPatron("Alice", 12345);

    // Display book and patron information
    myBook.DisplayInfo();
    std::cout << std::endl;
    myPatron.DisplayInfo();

    return 0;
}
