// 5. Palindrome Number
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

    if (originalNumber == reversedNumber)
        cout << originalNumber << " is a palindrome number." << endl;
    else
        cout << originalNumber << " is not a palindrome number." << endl;

    return 0;
}
