#include <iostream>
#include "Book.hpp"
#include "Person.hpp"
using namespace std;

int main(){

    vector<Book> bookList;
    vector<Person> personList;

    Book b1;
    Book b2("El Quijote", "Cervantes");
    Book b3("El Principito", "Antoine");

    bookList.push_back(b1);
    bookList.push_back(b2);
    bookList.push_back(b3);

    // Show All Books
    cout << "Information about the books:\n";
    for (const Book& book : bookList) {
        cout << "Title: " << book.getTitle() << " Author: " << book.getAuthor() << " Available: " << (book.isAvailable() ? "Yes" : "No") << endl;
    }
    cout << endl;

    Person p1;
    Person p2("Mario", "Alvarez");

    personList.push_back(p1);
    personList.push_back(p2);

    // Show All Persons
    cout << "Information about the Persons:\n";
    for (const Person& person : personList) {
        cout << "Name: " << person.getName() << " Surname: " << person.getSurname() << endl;
    }
    cout << endl;

    // Example of book reservation
    cout << "Attempting to reserve a book:\n";
    personList[0].reserveBook(bookList[0]); // The first person reserves the first book
    personList[1].reserveBook(bookList[0]);
    personList[1].reserveBook(bookList[1]);

    // Show updated information of the books
    cout << "\nInformation about the books after reservation:\n";

    for (const Book &book : bookList) {
        cout << "Title: " << book.getTitle() << " Author: " << book.getAuthor()
             << " Available: " << (book.isAvailable() ? "Yes" : "No") << endl;
    }
    cout << endl;

    // Return books
    cout << "\nAttempting to return books:\n";
    personList[0].returnBook(bookList[0]);
    personList[1].returnBook(bookList[0]);
    personList[1].returnBook(bookList[1]);

    // Show updated information of the books after return
    cout << "\nInformation about the books after return:\n";
    for (const Book &book : bookList) {
        cout << "Title: " << book.getTitle() << " Author: " << book.getAuthor()
             << " Available: " << (book.isAvailable() ? "Yes" : "No") << endl;
    }
    cout << endl;

    return 0;
}

