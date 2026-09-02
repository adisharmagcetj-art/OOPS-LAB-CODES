#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, breadth;

public:
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    float calculateArea() {
        return length * breadth;
    }

    void displayArea() {
        cout << "Area of rectangle = " << calculateArea() << endl;
    }
};

int main() {
    Rectangle r;
    r.input();
    r.displayArea();
    return 0;
}
