// 7. Fibonacci Series
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms for Fibonacci Series: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    long long t1 = 0, t2 = 1;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        cout << t1;
        if (i < n) cout << ", ";

        long long nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    cout << endl;
    return 0;
}
