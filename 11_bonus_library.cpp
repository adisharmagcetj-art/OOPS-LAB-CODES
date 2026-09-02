#include <iostream>
#include <string>
using namespace std;

class Library {
private:
    string title;
    string author;

public:
    Library() {
        title = "";
        author = "";
    }

    Library(string t, string a) {
        title = t;
        author = a;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }

    string getTitle() {
        return title;
    }
};

int main() {
    Library books[10];
    string title, author, searchTitle;

    cout << "Enter details of 10 books:\n";

    for (int i = 0; i < 10; i++) {
        cout << "\nBook " << i + 1 << " title: ";
        getline(cin >> ws, title);

        cout << "Book " << i + 1 << " author: ";
        getline(cin, author);

        books[i] = Library(title, author);
    }

    cout << "\nEnter title to search: ";
    getline(cin >> ws, searchTitle);

    bool found = false;

    cout << "\nMatching book details:\n";
    for (int i = 0; i < 10; i++) {
        if (books[i].getTitle() == searchTitle) {
            books[i].display();
            cout << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No matching book found." << endl;
    }

    return 0;
}
