// 6. Sum of Digits
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int originalNumber = n;
    n = (n < 0) ? -n : n;

    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << "Sum of digits of " << originalNumber
         << " = " << sum << endl;

    return 0;
}
