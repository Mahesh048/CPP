

#include <iostream>
using namespace std;

class Book {

private:
    string title;
    string author;
    int year;

public:
    // Default constructor
    Book() {
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Author: ";
        cin >> author;
        cout << "Enter Year: ";
        cin >> year;
    }

    // Constructor with author
    Book(string _author) {
        author = _author;
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Year: ";
        cin >> year;
    }

    // Constructor with year
    Book(int _year) {
        year = _year;
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Author: ";
        cin >> author;
    }

    // Display method
    void display() {
        cout << "Title: " << title << endl
            << "Author: " << author << endl
            << "Year: " << year << endl;
    }
};

int main() {
    // Create a book using the default constructor
    Book b;
    b.display(); // Display details of the first book

    // Get author for the second book and create it
    string main_author;
    cout << "Enter Author for the second book: ";
    cin >> main_author;
    Book b1(main_author);
    b1.display(); // Display details of the second book

    // Get year for the third book and create it
    int main_year;
    cout << "Enter Year for the third book: ";
    cin >> main_year;
    Book b2(main_year);
    b2.display(); // Display details of the third book

    return 0;
}
