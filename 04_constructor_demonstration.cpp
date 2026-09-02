#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    Book(string t, string a) {
        title = t;
        author = a;
    }

    void display() {
        cout << "\nBook Details\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    string title, author;

    cout << "Enter book title: ";
    getline(cin, title);
    cout << "Enter author name: ";
    getline(cin, author);

    Book b(title, author);
    b.display();

    return 0;
}
