// 4. Reverse a Number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int originalNumber = n;
    int reversedNumber = 0;

    while (n != 0) {
        int remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    cout << "Reverse of " << originalNumber << " = "
         << reversedNumber << endl;

    return 0;
}
