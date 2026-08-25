// 13. Array Reversal
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Original array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    reverse(arr.begin(), arr.end());

    cout << "Reversed array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}
