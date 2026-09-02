#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    int marks[5];

public:
    Student() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter marks in 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    int calculateTotal() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total;
    }

    double calculatePercentage() {
        return calculateTotal() / 5.0;
    }

    char determineGrade() {
        double percentage = calculatePercentage();

        if (percentage >= 90)
            return 'A';
        else if (percentage >= 75)
            return 'B';
        else if (percentage >= 60)
            return 'C';
        else if (percentage >= 40)
            return 'D';
        else
            return 'F';
    }

    void displayResult() {
        cout << fixed << setprecision(2);
        cout << "\n----- Student Result -----\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << calculateTotal() << " / 500" << endl;
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
        cout << "Grade: " << determineGrade() << endl;
    }
};

int main() {
    Student s;
    s.displayResult();
    return 0;
}
