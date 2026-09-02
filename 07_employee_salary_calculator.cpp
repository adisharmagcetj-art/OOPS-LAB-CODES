#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee {
private:
    string employeeName;
    double basicSalary;

public:
    Employee(string name, double salary) {
        employeeName = name;
        basicSalary = salary;
    }

    double calculateHRA() {
        return 0.20 * basicSalary;
    }

    double calculateDA() {
        return 0.10 * basicSalary;
    }

    void displayGrossSalary() {
        double hra = calculateHRA();
        double da = calculateDA();
        double grossSalary = basicSalary + hra + da;

        cout << fixed << setprecision(2);
        cout << "\nEmployee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA (20%): " << hra << endl;
        cout << "DA (10%): " << da << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    string name;
    double salary;

    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter basic salary: ";
    cin >> salary;

    Employee e(name, salary);
    e.displayGrossSalary();

    return 0;
}
