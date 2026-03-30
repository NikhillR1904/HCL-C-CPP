#include <iostream>
using namespace std;

class Book {
private:
    string isbn;
    string title;
    string author;

public:
    // Default constructor
    Book() {
        isbn = "";
        title = "";
        author = "";
    }

    // Setters
    void setISBN(string i) { isbn = i; }
    void setTitle(string t) { title = t; }
    void setAuthor(string a) { author = a; }

    // Update title
    void updateTitle(const string& newTitle) {
        title = newTitle;
    }

    // Print details
    void print() {
        cout << "ISBN: " << isbn << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book b;

    b.setISBN("12345");
    b.setTitle("C++ Basics");
    b.setAuthor("Nikhill");

    b.print();

    cout << "\nAfter update:\n";
    b.updateTitle("Advanced C++");
    b.print();
}
