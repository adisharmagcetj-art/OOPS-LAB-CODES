#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNo, double initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        } else if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void displayBalance() {
        cout << fixed << setprecision(2);
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    string accountNumber;
    double initialBalance, amount;

    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    BankAccount account(accountNumber, initialBalance);

    cout << "\nEnter deposit amount: ";
    cin >> amount;
    account.deposit(amount);

    cout << "Enter withdrawal amount: ";
    cin >> amount;
    account.withdraw(amount);

    cout << "\n";
    account.displayBalance();

    return 0;
}
