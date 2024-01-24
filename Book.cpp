#include "Book.hpp"

// Constructor
Book::Book(string t, string a, bool d) : title(t), author(a), available(d), reservationName() {}

// Getters
string Book::getTitle() const {
    return title;
}
string Book::getAuthor() const {
    return author;
}
bool Book::isAvailable() const {
    return available;
}
string Book::getReservationName() const {
    return reservationName;
}

// Setters
void Book::setAvailable(bool d) {
    available = d;
}

void Book::setTitle(string t) {
    title = t;
}
void Book::setAuthor(string a) {
    author = a;
}
void Book::setReservationName(string n) {
    reservationName = n;
}

